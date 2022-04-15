#include "../winhttp.h"

//----- (000000014033EE00) ----------------------------------------------------
__int64 __fastcall sub_14033EE00(int a1, __int64 a2, __int64* a3)
{
	__int64* v5; // rdi
	int* v6; // rax
	void* v7; // rcx
	__int64 v8; // r8
	int v9; // edi
	__int64 v10; // rbx
	__int64 v11[4]; // [rsp+20h] [rbp-48h] BYREF
	int v12; // [rsp+40h] [rbp-28h]
	__int64 v13; // [rsp+48h] [rbp-20h]
	__int128 v14; // [rsp+50h] [rbp-18h]

	if (qword_140C65850)
		return 2147500037i64;
	v11[0] = (__int64)&unk_1409E6CCC;
	v14 = 0i64;
	v11[1] = (__int64)&unk_1409E6CEC;
	v11[2] = (__int64)&unk_1409E6C94;
	v5 = v11;
	if (a3)
		v5 = a3;
	v11[3] = (__int64)&unk_1409E6CAC;
	v12 = 0;
	v13 = 0i64;
	v6 = sub_14018B280(120i64, 0);
	if (v6)
	{
		v6[10] = 0;
		*((_QWORD*)v6 + 6) = 0i64;
		*((_QWORD*)v6 + 7) = 0i64;
		*((_QWORD*)v6 + 8) = 0i64;
		qword_140C65850 = (__int64)v6;
		*((_QWORD*)v6 + 1) = &unk_1409E6DE4;
		*((_QWORD*)v6 + 2) = &unk_1409E6E44;
		*((_QWORD*)v6 + 3) = &unk_1409E6D94;
		v7 = &unk_1409E6DBC;
		*((_QWORD*)v6 + 4) = &unk_1409E6DBC;
		*((_QWORD*)v6 + 14) = 0i64;
		*((_QWORD*)v6 + 13) = 0i64;
		*((_QWORD*)v6 + 12) = 0i64;
		*((_QWORD*)v6 + 10) = 0i64;
		*((_QWORD*)v6 + 11) = 0i64;
		*((_WORD*)v6 + 36) = 0;
	}
	else
	{
		qword_140C65850 = 0i64;
	}
	v9 = sub_14033F710((__int64)v7, a1, v8, (__int64)v5);
	if (v9 < 0)
	{
		v10 = qword_140C65850;
		if (qword_140C65850)
		{
			sub_14033EFA0(qword_140C65850);
			sub_14018B900(v10, 0);
		}
		qword_140C65850 = 0i64;
	}
	return (unsigned int)v9;
}
// 14033EEEE: variable 'v7' is possibly undefined
// 14033EEEE: variable 'v8' is possibly undefined
// 140C65850: using guessed type __int64 qword_140C65850;

