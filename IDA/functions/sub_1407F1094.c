#include "../winhttp.h"

//----- (00000001407F1094) ----------------------------------------------------
LARGE_INTEGER __fastcall sub_1407F1094(int a1, LARGE_INTEGER a2, DWORD a3)
{
	__int64 v3; // rbx
	void* v6; // rax
	int LastError; // eax
	LARGE_INTEGER NewFilePointer; // [rsp+48h] [rbp+20h] BYREF

	v3 = a1;
	v6 = (void*)sub_1407F55A4(a1);
	if (v6 == (void*)-1i64)
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
		return (LARGE_INTEGER)-1i64;
	}
	if (!SetFilePointerEx(v6, a2, &NewFilePointer, a3))
	{
		LastError = GetLastError();
		sub_1407DE160(LastError);
		return (LARGE_INTEGER)-1i64;
	}
	*(_BYTE*)(qword_140C60410[v3 >> 5] + 88 * (v3 & 0x1F) + 8) &= ~2u;
	return NewFilePointer;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

