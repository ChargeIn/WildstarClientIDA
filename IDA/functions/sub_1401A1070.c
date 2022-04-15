#include "../winhttp.h"

//----- (00000001401A1070) ----------------------------------------------------
signed int __fastcall sub_1401A1070(__int64* a1, BOOL a2, BOOL a3, _BYTE* a4, int a5)
{
	signed int result; // eax
	int* v10; // rax
	__int64 v11; // rbx
	signed int v12; // edi

	if (!a1)
		return -2147024809;
	v10 = sub_14018B280(24i64, 0);
	v11 = (__int64)v10;
	if (v10)
	{
		*(_QWORD*)v10 = off_140B5E790;
		v10[2] = 1;
		*((_QWORD*)v10 + 2) = 0i64;
	}
	else
	{
		v11 = 0i64;
	}
	result = sub_14019FF60(v11, a2, a3, a4, a5);
	v12 = result;
	if (result >= 0)
	{
		*a1 = v11;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		return v12;
	}
	return result;
}
// 140B5E790: using guessed type __int64 (__fastcall *off_140B5E790[5])();

