#include "../winhttp.h"

//----- (0000000140507C60) ----------------------------------------------------
__int64 __fastcall sub_140507C60(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // rax
	double v4; // xmm6_8
	int v5; // r15d
	double v6; // xmm0_8
	unsigned __int64 v7; // rax
	__int64 v8; // rsi
	_DWORD* v9; // rax
	unsigned int v10; // r14d
	_DWORD* v11; // rax
	unsigned __int64 v12; // rax
	__int64 v13; // rdi
	_DWORD* v14; // rax
	unsigned int v15; // ecx
	unsigned __int64 v16; // rdx
	__int64 v17; // rcx
	_DWORD* v18; // rcx
	bool v19; // r14
	_DWORD* v20; // rax
	int v21; // ecx
	BOOL v22; // eax
	int* v23; // rax
	__int64 v24; // rdi
	_DWORD* v25; // rax
	char* v26; // rax
	_DWORD* v27; // rax
	int* v28; // rsi
	_QWORD* v29; // rax
	unsigned __int16* v30; // rdi
	unsigned __int64* v31; // rdx
	unsigned __int64 v32; // r8
	__int64 v33; // [rsp+30h] [rbp-49h] BYREF
	__int64 v34; // [rsp+38h] [rbp-41h]
	int v35; // [rsp+40h] [rbp-39h]
	int v36; // [rsp+44h] [rbp-35h]
	__int64 v37[6]; // [rsp+50h] [rbp-29h] BYREF

	result = sub_140506EA0(a1);
	if (result)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = 0.0;
		v5 = 2;
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v6 = 0.0;
		else
			v6 = sub_140056C40(a1, 2u);
		v7 = 0i64;
		if (v6 >= 9.223372036854776e18)
		{
			v6 = v6 - 9.223372036854776e18;
			if (v6 < 9.223372036854776e18)
				v7 = 0x8000000000000000ui64;
		}
		v8 = v7 + (unsigned int)(int)v6;
		v9 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v10 = 1;
		else
			v10 = sub_140056D60(a1, 3u);
		v11 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v11 < a1[2] && v11 != dword_140A12138 && *(int*)(a1[3] + 56i64) > 0)
			v4 = sub_140056C40(a1, 4u);
		v12 = 0i64;
		if (v4 >= 9.223372036854776e18)
		{
			v4 = v4 - 9.223372036854776e18;
			if (v4 < 9.223372036854776e18)
				v12 = 0x8000000000000000ui64;
		}
		v13 = v12 + (unsigned int)(int)v4;
		v14 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v14 >= a1[2] || v14 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
			v15 = 1;
		else
			v15 = sub_140056D60(a1, 5u);
		v16 = a1[2];
		v35 = 0;
		v36 = 0;
		v37[1] = v10;
		v34 = v15;
		v17 = a1[3];
		v37[2] = 0i64;
		v36 = 0;
		v18 = (_DWORD*)(v17 + 80);
		v37[4] = v34;
		v19 = 0;
		v37[0] = v8;
		v37[3] = v13;
		v37[5] = 0i64;
		if ((unsigned __int64)v18 < v16 && v18 != dword_140A12138 && v18[2] == 1)
		{
			v20 = dword_140A12138;
			if ((unsigned __int64)v18 < v16)
				v20 = v18;
			v21 = v20[2];
			v22 = v21 && (v21 != 1 || *v20);
			v19 = v22;
		}
		v23 = sub_14018B280(16i64, 0);
		v24 = (__int64)v23;
		if (v23)
			*(_WORD*)v23 = 0;
		v25 = (_DWORD*)(a1[3] + 96i64);
		if ((unsigned __int64)v25 >= a1[2] || v25 == dword_140A12138 || *(int*)(a1[3] + 104i64) <= 0)
			v26 = "Default";
		else
			v26 = (char*)sub_140056BB0(a1, 7u, 0i64);
		sub_14018F2D0(&v33, v26);
		if (v24)
			sub_14018B900(v24, 0);
		v27 = (_DWORD*)(a1[3] + 112i64);
		if ((unsigned __int64)v27 < a1[2] && v27 != dword_140A12138 && *(int*)(a1[3] + 120i64) > 0)
			v5 = sub_140056D60(a1, 8u);
		v28 = (int*)v34;
		v29 = (_QWORD*)sub_140504B50((__int64)&v33, (int*)v37, v19, (int*)v34, v5);
		v30 = (unsigned __int16*)v29[1];
		v29[1] = 0i64;
		v29[2] = 0i64;
		v29[3] = 0i64;
		if (v34)
			sub_14018B900(v34, 0);
		v31 = (unsigned __int64*)sub_14018F0E0(&v33, v30)[1];
		if (v31)
		{
			v32 = -1i64;
			do
				++v32;
			while (*((_BYTE*)v31 + v32));
			sub_140058710((__int64)a1, v31, v32);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v34)
			sub_14018B900(v34, 0);
		if (v30)
			sub_14018B900((__int64)v30, 0);
		if (v28)
			sub_14018B900((__int64)v28, 0);
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

