#include "../winhttp.h"

//----- (000000014085A0F0) ----------------------------------------------------
__int64 __fastcall sub_14085A0F0(_QWORD* a1, float* a2, int a3, __int64* a4, __int64 a5, char a6, __int64 a7)
{
	unsigned int v9; // ebp
	int v11; // ebx
	unsigned __int8* v12; // r8
	unsigned int v13; // r9d
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rdx
	float* v17; // rax
	float v18; // xmm0_4
	unsigned __int8* v19; // r8
	unsigned int v20; // r9d
	__int64 v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // rdx
	float* v24; // rax
	float v25; // xmm0_4
	__int64 v26; // r8
	unsigned __int8* v27; // r8
	unsigned int v28; // r9d
	int v29; // ecx
	__int64 v30; // rdx
	float* v31; // rdx
	unsigned __int8* v32; // r8
	unsigned int v33; // r9d
	int v34; // ecx
	__int64 v35; // rdx
	float* v36; // rdx
	unsigned __int8* v37; // rdx
	unsigned int v38; // r8d
	__int64 v39; // rcx
	float* v40; // rcx
	float v41; // xmm2_4
	__int64 v42; // rcx
	__int128 v44; // [rsp+40h] [rbp-28h] BYREF
	float v45; // [rsp+80h] [rbp+18h] BYREF

	v9 = a3 & 0xFFFFFFF6;
	sub_1408527D0((__int64)a1, a2, a3 & 0xF6);
	v11 = 0;
	if ((v9 & 2) != 0)
	{
		v12 = (unsigned __int8*)a1[10];
		v45 = 0.0;
		if (v12)
		{
			v13 = *v12;
			v14 = 0i64;
			while (1)
			{
				v15 = (unsigned int)(v14 + 1);
				if (v12[v15] == 2)
					break;
				v14 = (unsigned int)v15;
				if ((unsigned int)v15 >= v13)
					goto LABEL_6;
			}
			v16 = (__int64)&v12[4 * v14 + ((v13 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_6:
			v16 = 0i64;
		}
		v17 = &v45;
		if (v16)
			v17 = (float*)v16;
		v45 = *v17;
		v18 = v45 + a2[2];
		a2[2] = v18;
		if ((a1[12] & 4i64) != 0)
		{
			sub_140836340(qword_140C61BB0, (__int64)a1, 2, 0i64);
			a2[2] = v18 + a2[2];
		}
	}
	if ((v9 & 4) != 0)
	{
		v19 = (unsigned __int8*)a1[10];
		v45 = 0.0;
		if (v19)
		{
			v20 = *v19;
			v21 = 0i64;
			while (1)
			{
				v22 = (unsigned int)(v21 + 1);
				if (v19[v22] == 3)
					break;
				v21 = (unsigned int)v22;
				if ((unsigned int)v22 >= v20)
					goto LABEL_16;
			}
			v23 = (__int64)&v19[4 * v21 + ((v20 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_16:
			v23 = 0i64;
		}
		v24 = &v45;
		if (v23)
			v24 = (float*)v23;
		v45 = *v24;
		v25 = v45 + a2[3];
		a2[3] = v25;
		if ((a1[12] & 8i64) != 0)
		{
			sub_140836340(qword_140C61BB0, (__int64)a1, 3, 0i64);
			a2[3] = v25 + a2[3];
		}
	}
	v26 = a1[5];
	if (v26)
	{
		v27 = *(unsigned __int8**)(v26 + 24);
		if (v27)
		{
			v28 = *v27;
			v29 = 0;
			while (1)
			{
				v30 = (unsigned int)(v29 + 1);
				if (v27[v30] == 2)
					break;
				++v29;
				if ((unsigned int)v30 >= v28)
					goto LABEL_31;
			}
			v31 = (float*)&v27[16 * v29 + ((v28 + 4) & 0xFFFFFFFC)];
			if (v31)
				a2[2] = a2[2] + *v31;
		}
	LABEL_31:
		v32 = *(unsigned __int8**)(a1[5] + 24i64);
		if (v32)
		{
			v33 = *v32;
			v34 = 0;
			while (1)
			{
				v35 = (unsigned int)(v34 + 1);
				if (v32[v35] == 3)
					break;
				++v34;
				if ((unsigned int)v35 >= v33)
					goto LABEL_38;
			}
			v36 = (float*)&v32[16 * v34 + ((v33 + 4) & 0xFFFFFFFC)];
			if (v36)
				a2[3] = a2[3] + *v36;
		}
	LABEL_38:
		v37 = *(unsigned __int8**)(a1[5] + 24i64);
		if (v37)
		{
			v38 = *v37;
			while (1)
			{
				v39 = (unsigned int)(v11 + 1);
				if (v37[v39] == 10)
					break;
				++v11;
				if ((unsigned int)v39 >= v38)
					goto LABEL_46;
			}
			v40 = (float*)&v37[16 * v11 + ((v38 + 4) & 0xFFFFFFFC)];
			if (v40)
			{
				v41 = *v40;
				if (*v40 != 1.0)
				{
					*(_QWORD*)&v44 = a1;
					DWORD2(v44) = DWORD2(v44) & 0xFFFFFFFC | 1;
					sub_14084F8A0(a4, &v44, v41);
				}
			}
		}
	}
LABEL_46:
	v42 = a1[9];
	if (v42)
		(*(void(__fastcall**)(__int64, float*, _QWORD, __int64*, __int64, char, __int64, char))(*(_QWORD*)v42 + 336i64))(
			v42,
			a2,
			v9,
			a4,
			a5,
			a6,
			a7,
			1);
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

