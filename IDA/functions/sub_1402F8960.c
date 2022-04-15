#include "../winhttp.h"

//----- (00000001402F8960) ----------------------------------------------------
void __fastcall sub_1402F8960(__int64 a1, unsigned int a2, int* a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rbx
	int* v7; // rax
	unsigned __int64 v8; // rax
	int* v9; // rax
	unsigned int* v10; // rbp
	__int64 v11; // rdi
	__int64* v12; // r15
	bool v13; // zf
	int* v14; // rax
	int* v15; // rbx
	int v16; // eax
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rax
	int v20; // eax
	int v21; // eax
	__int64 v22; // rax
	int v23; // r11d
	int v24; // r9d
	int v25; // r10d
	__int64 v26; // rcx
	float v27; // xmm0_4
	float v28; // xmm1_4
	float v29; // xmm0_4
	bool v30; // cc
	float v31; // xmm2_4
	float v32; // xmm0_4
	float v33; // xmm2_4
	int v34; // eax
	__int64 v35; // rax
	int v36; // ecx
	__int64 v37; // rax
	void(__fastcall * v38)(__int64, _QWORD, __int64, __int64, _DWORD, _QWORD); // r10
	unsigned __int64 v39; // rbp
	__int64 v40; // rcx
	float v41; // xmm2_4
	float v42; // xmm3_4
	__int64 v43; // rcx
	int v44; // r10d
	int v45; // r9d
	float v46; // xmm1_4
	int v47; // edx
	_QWORD* v48; // rdx
	__int64 v49; // rdx
	__int64 v50; // rdx
	int v51[4]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v52; // [rsp+90h] [rbp+8h] BYREF

	v3 = *(_QWORD*)a1;
	v4 = a2;
	v51[0] = 0;
	if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(v3 + 16))(a1, v51, 0i64))
	{
		v7 = sub_14018B280(64i64, 0);
		if (v7)
			sub_1402EF4C0((__int64)v7, a1, v4, a3);
		return;
	}
	if (v4 >= *(_QWORD*)(a1 + 896))
	{
		v52 = -1i64;
		sub_14019F340((__int64*)(a1 + 888), (unsigned int)(v4 + 1), &v52);
	}
	v8 = *(_QWORD*)(*(_QWORD*)(a1 + 888) + 8 * v4);
	if (v8 > *(_QWORD*)(a1 + 880))
	{
		v9 = sub_14018B280(32i64, 0);
		if (v9)
		{
			*((_QWORD*)v9 + 1) = 0i64;
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 3) = 0i64;
			*v9 = v4;
			v52 = (__int64)v9;
		}
		else
		{
			v52 = 0i64;
		}
		v8 = sub_140033260((__int64*)(a1 + 872), &v52);
		*(_QWORD*)(*(_QWORD*)(a1 + 888) + 8 * v4) = v8;
	}
	v10 = *(unsigned int**)(*(_QWORD*)(a1 + 872) + 8 * v8);
	v11 = *((_QWORD*)v10 + 2);
	v12 = (__int64*)(v10 + 4);
	if (v11)
	{
		if (*(_DWORD*)v11 != *a3 || *(_DWORD*)(v11 + 24) != a3[6])
			goto LABEL_21;
		if (*a3)
		{
			if (!*(_DWORD*)(v11 + 48) && (a3[5] & 2) == 0)
			{
				*(_DWORD*)(v11 + 16) = a3[4];
				*(_DWORD*)(*v12 + 12) = a3[3];
				*(_DWORD*)(*v12 + 8) = a3[2];
				return;
			}
			goto LABEL_21;
		}
		v13 = (a3[5] & 1) == 0;
	}
	else
	{
		v13 = *a3 == 0;
	}
	if (v13)
		return;
LABEL_21:
	v14 = sub_14018B280(96i64, 0);
	v15 = v14;
	if (v14)
	{
		*((_QWORD*)v14 + 10) = 0i64;
		*((_QWORD*)v14 + 11) = 0i64;
	}
	else
	{
		v15 = 0i64;
	}
	if (*a3)
	{
		*v15 = *a3;
		v15[1] = a3[1];
		v15[2] = a3[2];
		v15[3] = a3[3];
		v15[4] = a3[4];
		v15[5] = a3[5];
		v15[6] = a3[6];
		v15[10] = sub_1402F7130((__int64*)a1, *a3, a3[1]);
	}
	else
	{
		*(_QWORD*)v15 = 0i64;
		*((_QWORD*)v15 + 1) = 1065353216i64;
		v15[4] = 1065353216;
		v16 = a3[5];
		v15[6] = 0;
		v15[10] = -1;
		v15[5] = v16;
	}
	v17 = (unsigned int)v15[10];
	if ((_DWORD)v17 == -1)
	{
		*((_QWORD*)v15 + 4) = 0i64;
		v15[11] = 0;
		v15[12] = 1;
		v23 = 150;
		v24 = 0;
	LABEL_39:
		v15[5] &= ~4u;
		goto LABEL_40;
	}
	v18 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 136i64) + 48 * v17;
	v15[11] = 0;
	*((_QWORD*)v15 + 4) = v18;
	v19 = sub_14021A300(*v15);
	if (v19)
	{
		v20 = *(_DWORD*)(v19 + 20) - 1;
		if (v20)
		{
			v21 = v20 - 1;
			if (v21)
			{
				if (v21 == 1)
					v15[11] = 8;
			}
			else
			{
				v15[11] = 4;
			}
		}
		else
		{
			v15[11] = 2;
		}
	}
	v22 = *((_QWORD*)v15 + 4);
	v15[12] = 0;
	v23 = *(unsigned __int16*)(v22 + 6);
	v24 = *(_DWORD*)(v22 + 12) - *(_DWORD*)(v22 + 8);
	if (!v24 || *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 136i64) + 48i64 * (unsigned int)v15[10] + 16) == 0.0)
		goto LABEL_39;
LABEL_40:
	v25 = v15[5];
	if ((v25 & 1) != 0)
		v23 = 0;
	if (v24)
	{
		if ((v25 & 8) == 0)
		{
			if ((v25 & 0x20) != 0)
				v15[3] = a3[1] % (unsigned int)v24;
			goto LABEL_53;
		}
		v26 = *v12;
		if ((v25 & 4) != 0)
		{
			if (!v26)
			{
			LABEL_53:
				if (!v15[3] && *((float*)v15 + 2) < 0.0)
					v15[3] = v24;
				goto LABEL_56;
			}
			while ((*(_BYTE*)(v26 + 20) & 4) == 0)
			{
				v26 = *(_QWORD*)(v26 + 88);
				if (!v26)
					goto LABEL_53;
			}
		}
		if (v26)
		{
			v27 = sub_1402F1D50(v26, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64));
			v15[3] = (int)(float)(v27 * (float)v24);
		}
		goto LABEL_53;
	}
LABEL_56:
	v28 = *((float*)v15 + 2);
	v29 = *(float*)&dword_140C41F64;
	v30 = v28 <= *(float*)&dword_140C41F64;
	v15[13] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	if (!v30)
	{
		v31 = 1.0;
		v32 = (float)(v24 - v15[3]);
	LABEL_60:
		v33 = v31 / v28;
		v15[14] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) + (int)(float)(v32 * v33);
		if (v33 > 1.0)
			v33 = 1.0;
		v15[15] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v15[16] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) + (int)(float)((float)v23 * v33);
		goto LABEL_64;
	}
	if (v28 < (float)-v29)
	{
		v31 = -1.0;
		v32 = (float)v15[3];
		goto LABEL_60;
	}
	v15[14] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	v15[15] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	v34 = v23 + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	v15[5] = v25 | 0x10;
	v15[16] = v34;
LABEL_64:
	if (v15[13] == v15[14] && (v15[5] & 0x10) == 0)
		v15[14] = v15[16];
	v35 = *((_QWORD*)v15 + 4);
	v36 = v15[3];
	v15[17] = v36;
	if (v35)
		v15[17] = *(_DWORD*)(v35 + 8) + v36;
	v15[18] = 0;
	if (!*((_QWORD*)v15 + 10))
	{
		*((_QWORD*)v15 + 10) = v12;
		*((_QWORD*)v15 + 11) = *v12;
		*v12 = (__int64)v15;
		v37 = *((_QWORD*)v15 + 11);
		if (v37)
			*(_QWORD*)(v37 + 80) = v15 + 22;
	}
	if (!v15[12] && (v15[5] & 0x10) == 0)
		sub_140306300(a1, v15[14]);
	v38 = *(void(__fastcall**)(__int64, _QWORD, __int64, __int64, _DWORD, _QWORD))(a1 + 960);
	if (v38 && v11 && !*(_DWORD*)(v11 + 48) && (*(_BYTE*)(v11 + 20) & 0x10) == 0 && !*(_DWORD*)(a1 + 332))
		v38(a1, *v10, v11, 1i64, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 212i64), *(_QWORD*)(a1 + 968));
	v39 = 0i64;
	do
	{
		++v39;
		if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v15[16] >= 0)
		{
			v40 = *((_QWORD*)v15 + 11);
			if (v40)
				sub_1402F1AC0(v40);
		}
		v15 = (int*)*((_QWORD*)v15 + 11);
	} while (v15);
	if (v39 > 8)
	{
		v41 = 1.0;
		v42 = 1.0;
		v43 = 0i64;
		if (v11)
		{
			v44 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
			do
			{
				v45 = *(_DWORD*)(v11 + 60);
				if (v44 - v45 >= 0)
				{
					v47 = *(_DWORD*)(v11 + 64);
					if (v44 - v47 < 0)
						v46 = (float)(v44 - v45) / (float)(v47 - v45);
					else
						v46 = 1.0;
				}
				else
				{
					v46 = 0.0;
				}
				if (v42 >= (float)(v46 * v41))
				{
					v42 = v46 * v41;
					v43 = v11;
				}
				v11 = *(_QWORD*)(v11 + 88);
				v41 = v41 * (float)(1.0 - v46);
			} while (v11);
			if (v43)
			{
				v48 = *(_QWORD**)(v43 + 80);
				if (v48)
					*v48 = *(_QWORD*)(v43 + 88);
				v49 = *(_QWORD*)(v43 + 88);
				if (v49)
					*(_QWORD*)(v49 + 80) = *(_QWORD*)(v43 + 80);
				*(_QWORD*)(v43 + 80) = 0i64;
				*(_QWORD*)(v43 + 88) = 0i64;
				v50 = *(_QWORD*)(v43 + 88);
				if (v50)
					*(_QWORD*)(v50 + 80) = *(_QWORD*)(v43 + 80);
				*(_QWORD*)(v43 + 80) = 0i64;
				*(_QWORD*)(v43 + 88) = 0i64;
				sub_14018B900(v43, 0);
			}
		}
	}
}
// 1402F8C5B: variable 'v24' is possibly undefined
// 1402F8D1C: variable 'v23' is possibly undefined
// 1402F8D60: variable 'v25' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41F64: using guessed type int dword_140C41F64;
// 1402F8960: using guessed type int var_58[4];

