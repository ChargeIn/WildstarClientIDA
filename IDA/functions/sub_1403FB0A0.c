#include "../winhttp.h"

//----- (00000001403FB0A0) ----------------------------------------------------
float* __fastcall sub_1403FB0A0(__int64 a1, float* a2)
{
	__int64 v3; // rdx
	__int64 v5; // rax
	float* v6; // rbx
	float v7; // xmm2_4
	float v8; // xmm0_4
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm0_4
	float v12; // xmm1_4
	float v13; // xmm1_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	float v17; // xmm1_4
	int v18; // xmm1_4
	float v19; // xmm0_4
	int v20; // xmm1_4
	int v21; // xmm0_4
	char v23[8]; // [rsp+20h] [rbp-50h] BYREF
	int* v24; // [rsp+28h] [rbp-48h]
	__int64 v25; // [rsp+30h] [rbp-40h]
	int v26[4]; // [rsp+40h] [rbp-30h] BYREF
	char v27[8]; // [rsp+50h] [rbp-20h] BYREF
	__int64 v28; // [rsp+58h] [rbp-18h]
	__int64 v29; // [rsp+60h] [rbp-10h]
	float* v30; // [rsp+90h] [rbp+20h] BYREF
	float* v31; // [rsp+A0h] [rbp+30h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = (float*)v3;
	if (v5)
	{
		v7 = *a2;
		do
		{
			v8 = *(float*)(v5 + 32);
			if (v8 < v7
				|| v8 == v7
				&& ((v9 = *(float*)(v5 + 36), v10 = a2[1], v9 < v10)
					|| v9 == v10
					&& ((v11 = *(float*)(v5 + 40), v12 = a2[2], v11 < v12) || v11 == v12 && a2[3] > *(float*)(v5 + 44))))
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v6 = (float*)v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
	}
	if (v6 == (float*)v3
		|| (v13 = v6[8], *a2 < v13)
		|| *a2 == v13
		&& ((v14 = a2[1], v15 = v6[9], v14 < v15)
			|| v14 == v15 && ((v16 = a2[2], v17 = v6[10], v16 < v17) || v16 == v17 && v6[11] > a2[3])))
	{
		v24 = sub_14018B280(176i64, 0);
		v25 = 0i64;
		*(_BYTE*)v24 = 0;
		v18 = *((_DWORD*)a2 + 1);
		*((_QWORD*)v24 + 1) = 0i64;
		*((_QWORD*)v24 + 2) = v24;
		*((_QWORD*)v24 + 3) = v24;
		v19 = *a2;
		v26[1] = v18;
		v20 = *((_DWORD*)a2 + 3);
		*(float*)v26 = v19;
		v21 = *((_DWORD*)a2 + 2);
		v26[3] = v20;
		v26[2] = v21;
		sub_1403FB870((__int64)v27, (__int64)v23);
		v30 = v6;
		sub_1403FD8C0(a1, (int**)&v31, (__int64*)&v30, v26);
		v6 = v31;
		if (v29)
		{
			sub_1403FDC00((__int64)v27, *(_QWORD**)(v28 + 8));
			*(_QWORD*)(v28 + 16) = v28;
			*(_QWORD*)(v28 + 8) = 0i64;
			*(_QWORD*)(v28 + 24) = v28;
			v29 = 0i64;
		}
		sub_14018B900(v28, 0);
		if (v25)
		{
			sub_1403FDC00((__int64)v23, *((_QWORD**)v24 + 1));
			*((_QWORD*)v24 + 2) = v24;
			*((_QWORD*)v24 + 1) = 0i64;
			*((_QWORD*)v24 + 3) = v24;
			v25 = 0i64;
		}
		sub_14018B900((__int64)v24, 0);
	}
	return v6 + 12;
}
// 1403FB0A0: using guessed type char var_50[8];
// 1403FB0A0: using guessed type char var_20[8];

