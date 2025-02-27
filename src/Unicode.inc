struct UnicodePage
{
	const char* replacement[128];
};

UnicodePage Latin1Supplement = 
{
	{
		"",		// U+0080		Padding Character	PAD
		"",		// U+0081		High Octet Preset	HOP
		"",		// U+0082		Break Permitted Here	BPH
		"",		// U+0083		No Break Here	NBH
		"",		// U+0084		Index	IND
		"\n",	// U+0085		Next Line	NEL
		"",		// U+0086		Start of Selected Area	SSA
		"",		// U+0087		End of Selected Area	ESA
		"",		// U+0088		Character (Horizontal) Tabulation Set	HTS
		"",		// U+0089		Character (Horizontal) Tabulation with Justification	HTJ
		"",		// U+008A		Line (Vertical) Tabulation Set	LTS
		"",		// U+008B		Partial Line Forward (Down)	PLD
		"",		// U+008C		Partial Line Backward (Up)	PLU
		"",		// U+008D		Reverse Line Feed (Index)	RI
		"",		// U+008E		Single-Shift Two	SS2
		"",		// U+008F		Single-Shift Three	SS3
		"",		// U+0090		Device Control String	DCS
		"",		// U+0091		Private Use One	PU1
		"",		// U+0092		Private Use Two	PU2
		"",		// U+0093		Set Transmit State	STS
		"",		// U+0094		Cancel character	CCH
		"",		// U+0095		Message Waiting	MW
		"",		// U+0096		Start of Protected Area	SPA
		"",		// U+0097		End of Protected Area	EPA
		"",		// U+0098		Start of String	SOS
		"",		// U+0099		Single Graphic Character Introducer	SGCI
		"",		// U+009A		Single Character Introducer	SCI
		"",		// U+009B		Control Sequence Introducer	CSI
		"",		// U+009C		String Terminator	ST
		"",		// U+009D		Operating System Command	OSC
		"",		// U+009E		Private Message	PM
		"",		// U+009F		Application Program Command	APC
		"",		// Latin-1 Punctuation and Symbols
		" ",	// U+00A0	 	Non-breaking space	NBSP
		"",		// U+00A1	�	Inverted exclamation mark	
		"c",	// U+00A2	�	Cent sign	
		"�",	// U+00A3	�	Pound sign	
		"",		// U+00A4	�	Currency sign	
		"Y",	// U+00A5	�	Yen sign	
		"|",	// U+00A6	�	Broken bar	
		"",		// U+00A7	�	Section sign	
		"\"",	// U+00A8	�	Diaeresis	
		"(C)",	// U+00A9	�	Copyright sign	
		"",		// U+00AA	�	Feminine Ordinal Indicator	
		"<<",	// U+00AB	�	Left-pointing double angle quotation mark	
		"",		// U+00AC	�	Not sign	
		"",		// U+00AD		Soft hyphen	SHY
		"(R)",	// U+00AE	�	Registered sign	
		"'",	// U+00AF	�	Macron	
		"",		// U+00B0	�	Degree symbol	
		"+-",	// U+00B1	�	Plus-minus sign	
		"",		// U+00B2	�	Superscript two	
		"",		// U+00B3	�	Superscript three	
		"",		// U+00B4	�	Acute accent	
		"",		// U+00B5	�	Micro sign	
		"",		// U+00B6	�	Pilcrow sign	
		"",		// U+00B7	�	Middle dot	
		"."		// U+00B8	�	Cedilla	
		"",		// U+00B9	�	Superscript one	
		"",		// U+00BA	�	Masculine ordinal indicator	
		">>",	// U+00BB	�	Right-pointing double-angle quotation mark	
		"1/4",	// U+00BC	�	Vulgar fraction one quarter	
		"1/2",	// U+00BD	�	Vulgar fraction one half	
		"3/4",	// U+00BE	�	Vulgar fraction three quarters	
		"",		// U+00BF	�	Inverted question mark	
		// Letters
		"A",		// U+00C0	�	Latin Capital Letter A with grave	
		"A",		// U+00C1	�	Latin Capital letter A with acute	
		"A",		// U+00C2	�	Latin Capital letter A with circumflex	
		"A",		// U+00C3	�	Latin Capital letter A with tilde	
		"A",		// U+00C4	�	Latin Capital letter A with diaeresis	
		"A",		// U+00C5	�	Latin Capital letter A with ring above	
		"AE",		// U+00C6	�	Latin Capital letter AE	
		"C",		// U+00C7	�	Latin Capital letter C with cedilla	
		"E",		// U+00C8	�	Latin Capital letter E with grave	
		"E",		// U+00C9	�	Latin Capital letter E with acute	
		"E",		// U+00CA	�	Latin Capital letter E with circumflex	
		"E",		// U+00CB	�	Latin Capital letter E with diaeresis	
		"I",		// U+00CC	�	Latin Capital letter I with grave	
		"I",		// U+00CD	�	Latin Capital letter I with acute	
		"I",		// U+00CE	�	Latin Capital letter I with circumflex	
		"I",		// U+00CF	�	Latin Capital letter I with diaeresis	
		"D",		// U+00D0	�	Latin Capital letter Eth	
		"N",		// U+00D1	�	Latin Capital letter N with tilde	
		"O",		// U+00D2	�	Latin Capital letter O with grave	
		"O",		// U+00D3	�	Latin Capital letter O with acute	
		"O",		// U+00D4	�	Latin Capital letter O with circumflex	
		"O",		// U+00D5	�	Latin Capital letter O with tilde	
		"O",		// U+00D6	�	Latin Capital letter O with diaeresis	
		// Mathematical operator
		"x",		// U+00D7	�	Multiplication sign	
		// Letters
		"O",		// U+00D8	�	Latin Capital letter O with stroke	
		"U",		// U+00D9	�	Latin Capital letter U with grave	
		"U",		// U+00DA	�	Latin Capital letter U with acute	
		"U",		// U+00DB	�	Latin Capital Letter U with circumflex	
		"U",		// U+00DC	�	Latin Capital Letter U with diaeresis	
		"Y",		// U+00DD	�	Latin Capital Letter Y with acute	
		"",		// U+00DE	�	Latin Capital Letter Thorn	
		"",		// U+00DF	�	Latin Small Letter sharp S	
		"a",		// U+00E0	�	Latin Small Letter A with grave	
		"a",		// U+00E1	�	Latin Small Letter A with acute	
		"a",		// U+00E2	�	Latin Small Letter A with circumflex	
		"a",		// U+00E3	�	Latin Small Letter A with tilde	
		"a",		// U+00E4	�	Latin Small Letter A with diaeresis	
		"a",		// U+00E5	�	Latin Small Letter A with ring above	
		"ae",		// U+00E6	�	Latin Small Letter AE	
		"c",		// U+00E7	�	Latin Small Letter C with cedilla	
		"e",		// U+00E8	�	Latin Small Letter E with grave	
		"e",		// U+00E9	�	Latin Small Letter E with acute	
		"e",		// U+00EA	�	Latin Small Letter E with circumflex	
		"e",		// U+00EB	�	Latin Small Letter E with diaeresis	
		"i",		// U+00EC	�	Latin Small Letter I with grave	
		"i",		// U+00ED	�	Latin Small Letter I with acute	
		"i",		// U+00EE	�	Latin Small Letter I with circumflex	
		"i",		// U+00EF	�	Latin Small Letter I with diaeresis	
		"o",		// U+00F0	�	Latin Small Letter Eth	
		"n",		// U+00F1	�	Latin Small Letter N with tilde	
		"o",		// U+00F2	�	Latin Small Letter O with grave	
		"o",		// U+00F3	�	Latin Small Letter O with acute	
		"o",		// U+00F4	�	Latin Small Letter O with circumflex	
		"o",		// U+00F5	�	Latin Small Letter O with tilde	
		"o",		// U+00F6	�	Latin Small Letter O with diaeresis	
		// Mathematical operator
		"'/.",		// U+00F7	�	Division sign	
		// Letters
		"o",		// U+00F8	�	Latin Small Letter O with stroke	
		"u",		// U+00F9	�	Latin Small Letter U with grave	
		"u",		// U+00FA	�	Latin Small Letter U with acute	
		"u",		// U+00FB	�	Latin Small Letter U with circumflex	
		"u",		// U+00FC	�	Latin Small Letter U with diaeresis	
		"y",		// U+00FD	�	Latin Small Letter Y with acute	
		"",		// U+00FE	�	Latin Small Letter Thorn	
		"y",		// U+00FF	�	Latin Small Letter Y with diaeresis
	}
};
