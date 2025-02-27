//
// Copyright (C) 2021 James Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

#pragma once

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#pragma warning(disable:4996)

// 8K chunk size including next chunk pointer
#define CHUNK_DATA_SIZE (8 * 1024 - sizeof(struct Chunk*))

class LinearAllocator
{
	struct Chunk
	{
		Chunk() : next(NULL) {}
		uint8_t data[CHUNK_DATA_SIZE];
		Chunk* next;
	};

public:
	LinearAllocator() : allocOffset(0)
	{
		currentChunk = firstChunk = new Chunk();
	}

	~LinearAllocator()
	{
		for (Chunk* ptr = firstChunk; ptr;)
		{
			Chunk* next = ptr->next;
			delete ptr;
			ptr = next;
		}
	}

	void Reset()
	{
		currentChunk = firstChunk;
		allocOffset = 0;
	}

	char* AllocString(const char* inString)
	{
		char* result = (char*) Alloc(strlen(inString) + 1);
		if (result)
		{
			strcpy(result, inString);
		}
		return result;
	}

	char* AllocString(const char* inString, size_t length)
	{
		char* result = (char*)Alloc(length + 1);
		if (result)
		{
			memcpy(result, inString, length);
			result[length] = '\0';
		}
		return result;
	}

	void* Alloc(size_t numBytes)
	{
		if (numBytes >= CHUNK_DATA_SIZE)
		{
			return NULL;
		}

		uint8_t* result = &currentChunk->data[allocOffset];

		if (allocOffset + numBytes > CHUNK_DATA_SIZE)
		{
			if (!currentChunk->next)
			{
				currentChunk->next = new Chunk();
				if (!currentChunk->next)
				{
					return NULL;
				}
			}
			currentChunk = currentChunk->next;
			allocOffset = 0;
			result = &currentChunk->data[allocOffset];
		}

		allocOffset += numBytes;
		return result;
	}

	template <typename T>
	T* Alloc()
	{
		return new (Alloc(sizeof(T))) T();
	}

private:

	Chunk* firstChunk;
	Chunk* currentChunk;
	size_t allocOffset;
};
