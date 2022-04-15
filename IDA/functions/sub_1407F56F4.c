#include "../winhttp.h"

//----- (00000001407F56F4) ----------------------------------------------------
__int64 __fastcall sub_1407F56F4(unsigned __int16 a1)
{
	HANDLE v1; // rcx
	unsigned __int16 Buffer; // [rsp+40h] [rbp+8h] BYREF
	DWORD NumberOfCharsWritten; // [rsp+48h] [rbp+10h] BYREF

	Buffer = a1;
	v1 = qword_140C10A80;
	if (qword_140C10A80 == (HANDLE)-2i64)
	{
		sub_1407F8018();
		v1 = qword_140C10A80;
	}
	if (v1 == (HANDLE)-1i64 || !WriteConsoleW(v1, &Buffer, 1u, &NumberOfCharsWritten, 0i64))
		return 0xFFFFi64;
	else
		return Buffer;
}

