#include "../winhttp.h"

//----- (0000000140184DD0) ----------------------------------------------------
__int64 __fastcall sub_140184DD0(_QWORD* a1)
{
	__int64* v2; // r14
	__int64 v3; // r9
	unsigned __int64 v4; // rdx
	unsigned int v5; // ecx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rdi
	_QWORD* v9; // rbx
	char* v10; // rdx
	_DWORD* v11; // rax
	_QWORD* v12; // rbx
	char* v13; // rdx
	_DWORD* v14; // rax
	_QWORD* v15; // rbx
	char* v16; // rdx
	_DWORD* v17; // rax
	__int64 v18; // rbx
	unsigned int v19; // eax
	__int64 v20; // rsi
	__int64 v21; // rdi
	__int64 v22; // rbp
	__int64 v24; // [rsp+30h] [rbp-88h] BYREF
	__int64 v25; // [rsp+38h] [rbp-80h]
	__int64 v26; // [rsp+50h] [rbp-68h] BYREF
	__int64 v27; // [rsp+58h] [rbp-60h]
	__int64 v28; // [rsp+70h] [rbp-48h] BYREF
	__int64 v29; // [rsp+78h] [rbp-40h]
	__int64 v30; // [rsp+90h] [rbp-28h] BYREF
	__int64 v31; // [rsp+98h] [rbp-20h]

	v2 = (__int64*)sub_140184D20(a1);
	if (v2)
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(qword_140C63650 + 768);
		v5 = 0;
		if (v4)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v4)
					goto LABEL_8;
			}
			v3 = *(_QWORD*)(v6 + 8i64 * v5);
		}
	LABEL_8:
		v8 = v3 + 384;
		v9 = *(_QWORD**)(v3 + 400);
		v10 = (char*)sub_14018F0E0(&v24, 0i64)[1];
		v11 = (_DWORD*)(v9[3] + 16i64);
		if ((unsigned __int64)v11 < v9[2] && v11 != dword_140A12138 && *(int*)(v9[3] + 24i64) > 0)
			v10 = (char*)sub_140056BB0(v9, 2u, 0i64);
		sub_14018F2D0(&v30, v10);
		if (v25)
			sub_14018B900(v25, 0);
		v12 = *(_QWORD**)(v8 + 16);
		v13 = (char*)sub_14018F0E0(&v24, 0i64)[1];
		v14 = (_DWORD*)(v12[3] + 32i64);
		if ((unsigned __int64)v14 < v12[2] && v14 != dword_140A12138 && *(int*)(v12[3] + 40i64) > 0)
			v13 = (char*)sub_140056BB0(v12, 3u, 0i64);
		sub_14018F2D0(&v28, v13);
		if (v25)
			sub_14018B900(v25, 0);
		v15 = *(_QWORD**)(v8 + 16);
		v16 = (char*)sub_14018F0E0(&v24, 0i64)[1];
		v17 = (_DWORD*)(v15[3] + 64i64);
		if ((unsigned __int64)v17 < v15[2] && v17 != dword_140A12138 && *(int*)(v15[3] + 72i64) > 0)
			v16 = (char*)sub_140056BB0(v15, 5u, 0i64);
		sub_14018F2D0(&v26, v16);
		if (v25)
			sub_14018B900(v25, 0);
		v18 = *v2;
		v19 = sub_1400F26A0(v8, 4);
		v20 = v29;
		v21 = v31;
		v22 = v27;
		(*(void(__fastcall**)(__int64*, __int64, __int64, _QWORD, __int64))(v18 + 568))(v2, v31, v29, v19, v27);
		if (v22)
			sub_14018B900(v22, 0);
		if (v20)
			sub_14018B900(v20, 0);
		if (v21)
			sub_14018B900(v21, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

