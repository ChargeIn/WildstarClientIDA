#include "../winhttp.h"

//----- (000000014027ACE0) ----------------------------------------------------
__int64 __fastcall sub_14027ACE0(__int64 a1, __int64* a2, int** a3)
{
	int* v7; // rax
	int* v8; // rbx
	int v9; // edi

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(176i64, 0);
	v8 = v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B61C70;
		*((_QWORD*)v7 + 11) = 0i64;
		*((_QWORD*)v7 + 12) = 0i64;
		*((_QWORD*)v7 + 13) = 0i64;
		*((_QWORD*)v7 + 14) = 0i64;
		*((_QWORD*)v7 + 16) = 0i64;
		*((_QWORD*)v7 + 17) = 0i64;
		*((_QWORD*)v7 + 20) = 0i64;
		*((_QWORD*)v7 + 21) = 0i64;
		v7[2] = 1;
		*((_QWORD*)v7 + 2) = a1;
		*((_QWORD*)v7 + 8) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = sub_14029D130(v8, a2);
	if (v9 >= 0)
	{
		*a3 = v8;
		return 0i64;
	}
	else
	{
		if (v8)
		{
			sub_14029CF70(v8);
			sub_14018B900((__int64)v8, 0);
		}
		return (unsigned int)v9;
	}
}
// 140B61C70: using guessed type __int64 (__fastcall *off_140B61C70[5])();

