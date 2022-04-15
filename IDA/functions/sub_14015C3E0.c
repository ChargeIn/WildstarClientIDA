#include "../winhttp.h"

//----- (000000014015C3E0) ----------------------------------------------------
__int64 __fastcall sub_14015C3E0(_QWORD* a1)
{
	__int64 v2; // rbp
	_DWORD* v3; // rdx
	__int64 result; // rax
	char* v5; // rax
	char* v6; // rax
	bool v7; // bl
	_DWORD* v8; // rax
	__int64 v9; // [rsp+20h] [rbp-48h] BYREF
	_WORD* v10; // [rsp+28h] [rbp-40h]
	__int64 v11; // [rsp+40h] [rbp-28h] BYREF
	__m128i* v12; // [rsp+48h] [rbp-20h]

	v2 = sub_14015C870(a1);
	if (v2)
	{
		v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v11, v5);
		v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v9, v6);
		v7 = sub_14015AB40(*(__m128**)(v2 + 1024), v12, v10);
		sub_14015BC10(v2);
		v8 = (_DWORD*)a1[2];
		v8[2] = 1;
		*v8 = v7;
		a1[2] += 16i64;
		if (v10)
			sub_14018B900((__int64)v10, 0);
		if (v12)
			sub_14018B900((__int64)v12, 0);
		return 1i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}

