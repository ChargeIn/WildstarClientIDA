#include "../winhttp.h"

//----- (00000001403508E0) ----------------------------------------------------
__int64 __fastcall sub_1403508E0(__int64 a1, int a2, __int64* a3)
{
	int* v6; // rax
	__int64 v7; // rbx
	int v8; // edi

	v6 = sub_14018B280(104i64, 0);
	v7 = (__int64)v6;
	if (v6)
	{
		*(_QWORD*)v6 = off_140B55048;
		v6[2] = 1;
		*(_QWORD*)v6 = off_140B65A38;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 10) = 0i64;
		*((_QWORD*)v6 + 9) = 0i64;
		*((_QWORD*)v6 + 11) = 0i64;
		*((_QWORD*)v6 + 12) = 0i64;
		*((_QWORD*)v6 + 2) = a1;
		v6[6] = a2;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = sub_140371BA0(v7);
	if (v8 >= 0)
	{
		*a3 = v7;
		return 0i64;
	}
	else
	{
		if (v7)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 16i64))(v7, 1i64);
		return (unsigned int)v8;
	}
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B65A38: using guessed type __int64 (__fastcall *off_140B65A38[19])();

