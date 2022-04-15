#include "../winhttp.h"

//----- (0000000140751FA0) ----------------------------------------------------
__int64 __fastcall sub_140751FA0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int* v4; // rax
	__int64 v5; // rax
	unsigned __int64 v6; // r8
	_DWORD* v7; // rcx
	int v8; // eax
	__int64 v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	_DWORD* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // r9
	_DWORD* v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // r9
	_DWORD* v21; // rax
	float v22; // xmm1_4
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // r9
	_DWORD* v26; // rax
	int v27; // ebx
	__int64 v28; // rax
	__int64 v29; // rsi
	int* v30; // rax
	int* v31; // rcx
	int** v32; // rdx
	__int64 v33; // rax
	__int64* v34; // r8
	bool v35; // zf
	__int64 v36; // rcx
	__int64 v38; // [rsp+40h] [rbp-18h] BYREF
	int v39; // [rsp+48h] [rbp-10h]

	v2 = sub_14018B280(256i64, 0);
	v3 = (__int64)v2;
	if (v2)
	{
		sub_1407E4830(v2, 0i64, 0xD0ui64);
		sub_1407E4830((int*)v3, 0i64, 0x100ui64);
	}
	else
	{
		v3 = 0i64;
	}
	sub_1407E4830((int*)v3, 0i64, 0x100ui64);
	v4 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v4)
		v5 = sub_1403D90D0(qword_140C65898, *v4);
	else
		v5 = 0i64;
	*(_DWORD*)(v3 + 208) = 0;
	if (v5)
		*(_DWORD*)(v3 + 208) = *(_DWORD*)(v5 + 8);
	*(_DWORD*)v3 = 0;
	*(_DWORD*)(v3 + 212) = 0;
	*(_DWORD*)(v3 + 192) = 150;
	if (!v5)
		*(_DWORD*)(v3 + 208) = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64);
	v6 = a1[2];
	v7 = dword_140A12138;
	if (a1[3] + 16i64 < v6)
		v7 = (_DWORD*)(a1[3] + 16i64);
	v8 = v7[2];
	if (v8 == 5 || v8 == 7)
		v9 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	else
		v9 = *(_QWORD*)(a1[4] + 8i64 * (int)v7[2] + 224);
	if (v9)
	{
		*(_QWORD*)v6 = v9;
		*(_DWORD*)(v6 + 8) = 5;
		a1[2] += 16i64;
	}
	v10 = a1[2];
	v11 = sub_140062650((__int64)a1, (unsigned __int64*)"eEffect", 7ui64);
	v12 = a1[2];
	v38 = v11;
	v39 = 4;
	sub_14005E8E0((__int64)a1, v10 - 16, (int*)&v38, v12);
	a1[2] += 16i64;
	v13 = (_DWORD*)(a1[2] - 16i64);
	if (v13 == dword_140A12138 || v13[2])
		*(_QWORD*)(v3 + 152) = off_140B4BC10[(unsigned int)sub_140056D60(a1, 0xFFFFFFFF)];
	a1[2] -= 16i64;
	v14 = a1[2];
	v15 = sub_140062650((__int64)a1, (unsigned __int64*)"nDuration", 9ui64);
	v16 = a1[2];
	v38 = v15;
	v39 = 4;
	sub_14005E8E0((__int64)a1, v14 - 16, (int*)&v38, v16);
	a1[2] += 16i64;
	v17 = (_DWORD*)(a1[2] - 16i64);
	if (v17 == dword_140A12138 || v17[2])
		*(_DWORD*)(v3 + 4) = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v18 = a1[2];
	v19 = sub_140062650((__int64)a1, (unsigned __int64*)"fDuration", 9ui64);
	v20 = a1[2];
	v38 = v19;
	v39 = 4;
	sub_14005E8E0((__int64)a1, v18 - 16, (int*)&v38, v20);
	a1[2] += 16i64;
	v21 = (_DWORD*)(a1[2] - 16i64);
	if (v21 == dword_140A12138 || v21[2])
	{
		v22 = sub_140056C40(a1, 0xFFFFFFFF);
		*(_DWORD*)(v3 + 4) = (int)(float)(v22 * 1000.0);
	}
	a1[2] -= 16i64;
	v23 = a1[2];
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"eLocation", 9ui64);
	v25 = a1[2];
	v38 = v24;
	v39 = 4;
	sub_14005E8E0((__int64)a1, v23 - 16, (int*)&v38, v25);
	a1[2] += 16i64;
	v26 = (_DWORD*)(a1[2] - 16i64);
	if (v26 == dword_140A12138 || v26[2])
		*(_DWORD*)(v3 + 220) = sub_140056D60(a1, 0xFFFFFFFF);
	a1[2] -= 16i64;
	v27 = *(_DWORD*)(v3 + 208);
	sub_1400035B0();
	if (v27 && (v28 = sub_1403D90D0(qword_140C65898, v27), (v29 = v28) != 0) && !*(_QWORD*)(v28 + 5864))
	{
		v30 = sub_14018B280(64i64, 0);
		v31 = v30;
		if (v30)
		{
			*(_QWORD*)v30 = v3;
			v30[2] = 0;
			v30[3] = 5;
			*((_QWORD*)v30 + 2) = 0i64;
			*((_QWORD*)v30 + 3) = 0i64;
			*((_QWORD*)v30 + 4) = 0i64;
			*((_QWORD*)v30 + 5) = 0i64;
			*((_QWORD*)v30 + 6) = 0i64;
			*((_QWORD*)v30 + 7) = 0i64;
		}
		else
		{
			v31 = 0i64;
		}
		v32 = (int**)(v29 + 1464);
		if (!*((_QWORD*)v31 + 2))
		{
			*((_QWORD*)v31 + 2) = v32;
			*((_QWORD*)v31 + 3) = *v32;
			*v32 = v31;
			v33 = *((_QWORD*)v31 + 3);
			if (v33)
				*(_QWORD*)(v33 + 16) = v31 + 6;
		}
		sub_1400035B0();
	}
	else
	{
		sub_1400035B0();
		v35 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
		v36 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
		dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
		if (v35 || (_DWORD)v36 == 0x3FFFFFFF)
			dword_140C8AF30 = 1;
		sub_140576BF0(v36, v3, v34);
		sub_14018B900(v3, 0);
	}
	return 0i64;
}
// 1407523B7: variable 'v34' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4BC10: using guessed type wchar_t *off_140B4BC10[13];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AF30: using guessed type int dword_140C8AF30;

