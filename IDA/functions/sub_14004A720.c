#include "../winhttp.h"

//----- (000000014004A720) ----------------------------------------------------
__int64 __fastcall sub_14004A720(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // edi
	int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rbp
	_DWORD* v7; // rax
	unsigned int v8; // r13d
	_DWORD* v9; // rax
	unsigned int v10; // r12d
	_DWORD* v11; // rax
	int v12; // r15d
	_DWORD* v13; // r8
	unsigned __int64 v14; // rdx
	int v15; // r14d
	_DWORD* v16; // rax
	_DWORD* v17; // rcx
	int v18; // eax
	BOOL v19; // eax
	_DWORD* v20; // rax
	_DWORD* v21; // rcx
	int v22; // eax
	double v23; // xmm0_8
	_DWORD* v24; // rax
	float v25; // xmm6_4
	double v26; // xmm0_8
	float v27; // xmm0_4

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	v4 = 1;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2]) && (v5 = sub_140056AB0(a1, 1u)) != 0)
		v6 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
	else
		v6 = 0i64;
	v7 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v8 = 1;
	else
		v8 = sub_140056D60(a1, 2u);
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v10 = 150;
	else
		v10 = sub_140056D60(a1, 3u);
	v11 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v11 >= a1[2] || v11 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v12 = 1;
	else
		v12 = sub_140056D60(a1, 4u);
	v13 = (_DWORD*)a1[3];
	v14 = a1[2];
	v15 = 0;
	v16 = v13 + 16;
	if ((unsigned __int64)(v13 + 16) < v14 && v16 != dword_140A12138 && v13[18] == 1)
	{
		v17 = dword_140A12138;
		if ((unsigned __int64)v16 < v14)
			v17 = v13 + 16;
		v18 = v17[2];
		v19 = v18 && (v18 != 1 || *v17);
		LOBYTE(v15) = v19;
	}
	v20 = v13 + 20;
	if ((unsigned __int64)(v13 + 20) < v14 && v20 != dword_140A12138 && v13[22] == 1)
	{
		v21 = dword_140A12138;
		if ((unsigned __int64)v20 < v14)
			v21 = v13 + 20;
		v22 = v21[2];
		if (!v22 || v22 == 1 && !*v21)
			v4 = 0;
		LOBYTE(v2) = v4 != 0;
	}
	if ((unsigned __int64)(v13 + 24) >= v14 || v13 + 24 == dword_140A12138 || (int)v13[26] <= 0)
		v23 = 1.0;
	else
		v23 = sub_140056C40(a1, 7u);
	v24 = (_DWORD*)(a1[3] + 112i64);
	v25 = v23;
	if ((unsigned __int64)v24 >= a1[2] || v24 == dword_140A12138 || *(int*)(a1[3] + 120i64) <= 0)
		v26 = 0.0;
	else
		v26 = sub_140056C40(a1, 8u);
	if (v6)
	{
		v27 = v26;
		sub_140049A80(v6, v8, v10, v12, v25, v27, v15, v2);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

