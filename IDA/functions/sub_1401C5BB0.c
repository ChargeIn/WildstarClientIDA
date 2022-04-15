#include "../winhttp.h"

//----- (00000001401C5BB0) ----------------------------------------------------
signed int __fastcall sub_1401C5BB0(_BYTE* a1, __int64 a2, SIZE_T a3, __int64* a4)
{
	int* v7; // rax
	__int64 v8; // r8
	__int64 v9; // rbx
	signed int result; // eax
	signed int v11; // edi

	if (!a1 || !a4)
		return -2147024809;
	v7 = sub_14018B280(40i64, 0);
	v9 = (__int64)v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B5F518;
		v7[2] = 1;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 4) = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	result = sub_1401C5940(v9, a1, v8, a3);
	v11 = result;
	if (result >= 0)
	{
		*a4 = v9;
	}
	else
	{
		if (v9)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 40i64))(v9, 1i64);
		return v11;
	}
	return result;
}
// 1401C5C22: variable 'v8' is possibly undefined
// 140B5F518: using guessed type __int64 (__fastcall *off_140B5F518[32])();

