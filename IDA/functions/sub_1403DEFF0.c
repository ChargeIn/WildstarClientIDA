#include "../winhttp.h"

//----- (00000001403DEFF0) ----------------------------------------------------
__int64 __fastcall sub_1403DEFF0(__int64 a1, unsigned int* a2)
{
	unsigned __int64 v4; // r14
	int* v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // rax
	float v8; // xmm7_4
	_QWORD* v9; // rsi
	float v10; // xmm8_4
	float v11; // xmm6_4
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r15d
	__int64 v16; // rdi
	__int64 v17; // rdx
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rax
	unsigned int v21; // ebx
	int* v22; // rax
	int* v23; // rbx
	float v24; // xmm1_4
	char* v25; // rax
	__int64 v26; // rbx
	unsigned int v27; // edi
	__int64 v28; // rax
	__int64 v29; // rdx
	unsigned int v30; // ecx
	__int64 v31; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v34; // ecx
	__int64 v35; // rax
	_DWORD* v36; // rcx
	__int64 v37; // r8
	__int64 v38; // rax
	int* v39; // rax
	__int64 v40; // rdi
	__int64 v41; // rbx
	float v43; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v44; // [rsp+40h] [rbp-C8h] BYREF
	int* v45; // [rsp+48h] [rbp-C0h]
	__int64 v46; // [rsp+50h] [rbp-B8h]
	__int64 v47; // [rsp+60h] [rbp-A8h]
	__int64(__fastcall * *v48)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v49; // [rsp+70h] [rbp-98h]
	_QWORD* v50; // [rsp+78h] [rbp-90h]
	int v51; // [rsp+80h] [rbp-88h]
	char v52[1216]; // [rsp+88h] [rbp-80h] BYREF
	__int64 v53; // [rsp+548h] [rbp+440h] BYREF
	__int64 v54; // [rsp+550h] [rbp+448h]
	char v55; // [rsp+568h] [rbp+460h] BYREF
	__int64 v56; // [rsp+848h] [rbp+740h]
	int v57; // [rsp+9E0h] [rbp+8D8h]
	int v58; // [rsp+9E8h] [rbp+8E0h]

	v4 = 0i64;
	v5 = (int*)&unk_140AF6C78;
	v45 = sub_14018B280(40i64, 0);
	v46 = 0i64;
	*(_BYTE*)v45 = 0;
	v6 = 12i64;
	*((_QWORD*)v45 + 1) = 0i64;
	*((_QWORD*)v45 + 2) = v45;
	*((_QWORD*)v45 + 3) = v45;
	do
	{
		sub_1403ADDD0((__int64)&v44, (__int64)&v48, v5++);
		--v6;
	} while (v6);
	v7 = *(_QWORD*)(a1 + 29504);
	v8 = 0.0;
	v51 = 1;
	v9 = *(_QWORD**)(v7 + 400);
	v10 = 0.0;
	v11 = 0.0;
	v12 = v9[4];
	v48 = off_140B569F0;
	v50 = v9;
	if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
		sub_14005E2C0((__int64)v9);
	v13 = v9[2];
	v14 = sub_14005C1B0((__int64)v9, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	v9[2] += 16i64;
	v15 = sub_1400578C0((__int64)v9);
	LODWORD(v49) = v15;
	if (a2[1])
	{
		v16 = 0i64;
		while (1)
		{
			sub_14040FAE0((__int64)&v53);
			v17 = v16 + *((_QWORD*)a2 + 1);
			if (!v17 || !sub_140411B60((__int64)&v53, v17) || !v58 || !v54)
				goto LABEL_29;
			v18 = (_QWORD*)sub_14040FC60((__int64)v52, (__int64)&v53);
			if ((unsigned int)sub_140415BB0(v9, (__int64)v18))
			{
				sub_1400FB470((__int64)&v48);
				v9 = v50;
				v50[2] -= 16i64;
			}
			if (*v18)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v18 + 8i64))(*v18);
				*v18 = 0i64;
			}
			v19 = v18[96];
			if (v19)
				sub_14018B900(v19, 0);
			if (!v57)
				goto LABEL_29;
			v20 = 0i64;
			if (v58)
				v20 = v54;
			v21 = *(_DWORD*)(v20 + 380);
			if (qword_140C63840)
				break;
			if (!dword_140C6559C && (int)sub_14020E540() >= 0)
			{
				v22 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648E8 + 24i64))(
					qword_140C648E8,
					v21);
			LABEL_25:
				v23 = v22;
				if (v22)
				{
					v43 = *(float*)v22;
					sub_1403ADED0((__int64)&v44, &v43);
					v24 = *((float*)v23 + 6) * *((float*)v23 + 5);
					v25 = &v55;
					if (!v57)
						v25 = 0i64;
					v11 = v11 + v24;
					v10 = v10 + (float)((float)*((int*)v25 + 3) * v24);
				}
			}
		LABEL_29:
			if (v53)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 8i64))(v53);
				v53 = 0i64;
			}
			if (v56)
				sub_14018B900(v56, 0);
			++v4;
			v16 += 168i64;
			if (v4 >= a2[1])
			{
				v15 = v49;
				goto LABEL_35;
			}
		}
		v22 = (int*)qword_140C63840(off_140A6AFD8, v21, qword_140C63858);
		goto LABEL_25;
	}
LABEL_35:
	v26 = *((_QWORD*)v45 + 2);
	if ((int*)v26 != v45)
	{
		while (1)
		{
			v27 = *(_DWORD*)(v26 + 32);
			if (qword_140C63840)
				break;
			if (!dword_140C6559C && (int)sub_14020E540() >= 0)
			{
				v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648E8 + 24i64))(qword_140C648E8, v27);
			LABEL_41:
				if (v28)
				{
					v29 = *(_QWORD*)(a1 + 120);
					v30 = *(_DWORD*)(v29 + 60);
					if (!v30)
						v30 = *(_DWORD*)(v29 + 56);
					if (*(_DWORD*)(v28 + 36) <= v30)
						v11 = v11 + (float)(*(float*)(v28 + 24) * *(float*)(v28 + 20));
				}
			}
			v31 = *(_QWORD*)(v26 + 24);
			if (v31)
			{
				v26 = *(_QWORD*)(v26 + 24);
				for (i = *(_QWORD*)(v31 + 16); i; i = *(_QWORD*)(i + 16))
					v26 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v26 + 8); v26 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v26 = j;
				if (*(_QWORD*)(v26 + 24) != j)
					v26 = j;
			}
			if ((int*)v26 == v45)
				goto LABEL_55;
		}
		v28 = qword_140C63840(off_140A6AFD8, v27, qword_140C63858);
		goto LABEL_41;
	}
LABEL_55:
	v43 = v11;
	LODWORD(v47) = 0;
	v34 = 0;
	if (v11 < 0.0)
		v34 = 0x80000000;
	if ((int)abs32(v34 - LODWORD(v11)) > 84)
		v8 = v10 / v11;
	v35 = sub_1403D90D0(qword_140C65898, *a2);
	if (v35)
		*(float*)(v35 + 3404) = v8;
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "Inspect", "UT", *a2, v15);
	if (v9 && v15 >= 0)
	{
		v36 = *(_DWORD**)(*(_QWORD*)sub_1400580E0((__int64)v9, -10000) + 32i64);
		while (v36[6] != 3 || *((double*)v36 + 2) != 0.0)
		{
			v36 = (_DWORD*)*((_QWORD*)v36 + 4);
			if (!v36)
			{
				v36 = dword_140A12138;
				break;
			}
		}
		v37 = v9[2];
		*(_QWORD*)v37 = *(_QWORD*)v36;
		*(_DWORD*)(v37 + 8) = v36[2];
		v9[2] += 16i64;
		sub_140058B30((__int64)v9, -10000);
		v38 = v9[2];
		*(_DWORD*)(v38 + 8) = 3;
		*(double*)v38 = (double)v15;
		v9[2] += 16i64;
		sub_140058B30((__int64)v9, -10000);
	}
	if (v46)
	{
		v39 = v45;
		v40 = *((_QWORD*)v45 + 1);
		if (v40)
		{
			do
			{
				sub_1400083B0((__int64)&v44, *(_QWORD*)(v40 + 24));
				v41 = *(_QWORD*)(v40 + 16);
				sub_14018B900(v40, 0);
				v40 = v41;
			} while (v41);
			v39 = v45;
		}
		*((_QWORD*)v39 + 2) = v39;
		*((_QWORD*)v45 + 1) = 0i64;
		*((_QWORD*)v45 + 3) = v45;
		v46 = 0i64;
	}
	sub_14018B900((__int64)v45, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6AFD8: using guessed type wchar_t *off_140A6AFD8[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C648E8: using guessed type __int64 qword_140C648E8;
// 140C6559C: using guessed type int dword_140C6559C;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403DEFF0: using guessed type char var_9F0[1216];

