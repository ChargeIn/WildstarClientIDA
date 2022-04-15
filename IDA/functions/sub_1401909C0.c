#include "../winhttp.h"

//----- (00000001401909C0) ----------------------------------------------------
__int16* sub_1401909C0()
{
	LPWSTR FilePart; // [rsp+20h] [rbp-448h] BYREF
	WCHAR Filename[264]; // [rsp+30h] [rbp-438h] BYREF
	WCHAR Buffer[264]; // [rsp+240h] [rbp-228h] BYREF

	if (!word_140C884B0[0])
	{
		GetModuleFileNameW(0i64, Filename, 0x104u);
		GetFullPathNameW(Filename, 0x104u, Buffer, &FilePart);
		*FilePart = 0;
		sub_14001B370(word_140C884B0, 260i64, L"%s..\\Errors", Buffer);
	}
	return word_140C884B0;
}
// 140A42BF0: using guessed type wchar_t aSErrors[12];
// 140C884B0: using guessed type __int16 word_140C884B0[260];

