#include "../winhttp.h"

//----- (000000014011FC40) ----------------------------------------------------
__int64 __fastcall sub_14011FC40(_QWORD* a1)
{
	unsigned __int64 v1; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rsi
	int* v7; // rax
	int* v8; // rdi
	_DWORD* v9; // rax
	char* v10; // rax
	__int64 v11; // rsi
	unsigned __int64 v12; // rcx
	_DWORD* v13; // rax
	char* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v19; // [rsp+30h] [rbp-38h] BYREF
	int* v20; // [rsp+38h] [rbp-30h]
	__int64 v21; // [rsp+40h] [rbp-28h]
	float v22; // [rsp+78h] [rbp+10h] BYREF
	__int64 v23; // [rsp+80h] [rbp+18h] BYREF

	v1 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v1)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v1)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_14018B280(16i64, 0);
	v8 = v7;
	if (v7)
		*(_WORD*)v7 = 0;
	v9 = (_DWORD*)a1[3];
	if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || (unsigned int)(v9[2] - 3) > 1)
	{
		if (!sub_1400D6530((__int64)a1, 1))
		{
		LABEL_27:
			v12 = a1[2];
		LABEL_28:
			*(_DWORD*)(v12 + 8) = 3;
			*(_QWORD*)v12 = 0i64;
			goto LABEL_29;
		}
		v11 = *(_QWORD*)(sub_1400D6530((__int64)a1, 1) + 696);
	}
	else
	{
		v10 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v19, v10);
		v11 = sub_1400E58C0(v6, v20);
		if (v20)
			sub_14018B900((__int64)v20, 0);
	}
	if (!v11)
		goto LABEL_27;
	v12 = a1[2];
	v13 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v13 >= v12 || v13 == dword_140A12138 || (unsigned int)(*(_DWORD*)(a1[3] + 24i64) - 3) > 1)
		goto LABEL_28;
	v14 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v19, v14);
	v15 = (__int64)v8;
	v8 = v20;
	if (v15)
		sub_14018B900(v15, 0);
	v23 = 0i64;
	(*(void(__fastcall**)(__int64, _QWORD, int*, __int64, __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
		qword_140C65680,
		*(_QWORD*)(v11 + 96),
		v8,
		-1i64,
		&v23);
	if (v23)
	{
		v22 = 0.0;
		(*(void(__fastcall**)(__int64, __int64, float*))(*(_QWORD*)v23 + 168i64))(v23, (v21 - (__int64)v8) >> 1, &v22);
		if (v23)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
			v23 = 0i64;
		}
		v17 = a1[2];
		*(double*)v17 = v22;
		*(_DWORD*)(v17 + 8) = 3;
	}
	else
	{
		v16 = a1[2];
		*(_QWORD*)v16 = 0i64;
		*(_DWORD*)(v16 + 8) = 3;
	}
LABEL_29:
	a1[2] += 16i64;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65680: using guessed type __int64 qword_140C65680;

