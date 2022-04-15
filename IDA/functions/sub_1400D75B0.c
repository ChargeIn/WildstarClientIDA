#include "../winhttp.h"

//----- (00000001400D75B0) ----------------------------------------------------
__int64 __fastcall sub_1400D75B0(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // r14
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rdx
	_DWORD* v11; // rcx
	int v12; // eax
	BOOL v13; // eax
	_DWORD* v14; // r8
	unsigned __int64 v15; // r9
	bool v16; // bp
	_DWORD* v17; // rcx
	int v18; // eax
	bool v19; // bl
	int v20; // eax
	float v21; // xmm6_4
	_DWORD* v22; // rcx
	int v23; // eax
	__int64 v24; // rcx
	unsigned __int16* v25; // rdx
	float v26; // xmm1_4
	_QWORD* v27; // rcx
	_DWORD* v28; // rax
	double v29; // xmm0_8
	float v31; // [rsp+68h] [rbp+10h] BYREF
	unsigned __int64 v32; // [rsp+70h] [rbp+18h] BYREF

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = 1;
	v8 = sub_1400D66A0(a1, 1u);
	v9 = v8;
	if (v8)
	{
		*(_BYTE*)(v8 + 29) |= 2u;
		v10 = *(_QWORD*)(v6 + 400);
		v11 = dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(v10 + 24) + 16i64) < *(_QWORD*)(v10 + 16))
			v11 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64);
		v12 = v11[2];
		v13 = v12 && (v12 != 1 || *v11);
		v14 = (_DWORD*)a1[3];
		v15 = a1[2];
		v16 = v13;
		if ((unsigned __int64)(v14 + 8) >= v15 || v14 + 8 == dword_140A12138 || v14[10] != 1)
		{
			v19 = *(_DWORD*)(v6 + 48) - *(_DWORD*)(v9 + 356) < 2;
		}
		else
		{
			v17 = dword_140A12138;
			if ((unsigned __int64)(*(_QWORD*)(v10 + 24) + 32i64) < *(_QWORD*)(v10 + 16))
				v17 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 32i64);
			v18 = v17[2];
			if (!v18 || v18 == 1 && !*v17)
				v7 = 0;
			v19 = v7 != 0;
		}
		v31 = 0.25;
		v20 = dword_140C3C1E0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3C1E0)
			v20 = *(_DWORD*)qword_140C63750;
		v21 = dword_140C3C1F0[v20];
		v22 = dword_140A12138;
		if ((unsigned __int64)(v14 + 12) < v15)
			v22 = v14 + 12;
		v23 = v22[2];
		if (v23 == 3 || v23 == 4 && sub_14005AC80((char*)(*(_QWORD*)v22 + 32i64), &v32))
		{
			v27 = *(_QWORD**)(v6 + 400);
			v28 = (_DWORD*)(v27[3] + 48i64);
			if ((unsigned __int64)v28 >= v27[2] || v28 == dword_140A12138 || *(int*)(v27[3] + 56i64) <= 0)
				v29 = 0.0;
			else
				v29 = sub_140056C40(v27, 4u);
			v26 = v29;
			if (v19)
				goto LABEL_47;
		}
		else
		{
			v24 = *(_QWORD*)(v9 + 288);
			if (!v24 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24))
				goto LABEL_47;
			v25 = L"fHideTransition";
			if (v16)
				v25 = L"fShowTransition";
			if ((int)sub_1400FAE90(*(_QWORD*)(v9 + 288), v25, &v31) < 0)
				goto LABEL_47;
			v26 = v31;
		}
		if (v26 > 0.0)
			v21 = 1.0 / v26;
	LABEL_47:
		if ((*(unsigned __int8(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 88i64))(
			v6,
			v9,
			3 - (unsigned int)v16))
		{
			sub_1400D42F0(v9, v16, v19, v21);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A15278: using guessed type wchar_t aFhidetransitio[16];
// 140A15298: using guessed type wchar_t aFshowtransitio[16];
// 140C3C1E0: using guessed type int dword_140C3C1E0;
// 140C3C1F0: using guessed type float dword_140C3C1F0[22];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63750: using guessed type __int64 qword_140C63750;

