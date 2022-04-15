#include "../winhttp.h"

//----- (000000014086EEB0) ----------------------------------------------------
__int64 __fastcall sub_14086EEB0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v8; // ebx
	float v9; // xmm1_4
	float v10; // xmm0_4
	unsigned __int8* v11; // r8
	unsigned int v12; // r9d
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rdx
	float* v16; // rax
	unsigned __int8* v17; // r8
	unsigned int v18; // r9d
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // rdx
	float* v22; // rax
	float v23; // xmm0_4
	__int64 v24; // r8
	unsigned __int8* v25; // r8
	unsigned int v26; // r9d
	int v27; // ecx
	__int64 v28; // rdx
	float* v29; // rdx
	unsigned __int8* v30; // rdx
	unsigned int v31; // r8d
	__int64 v32; // rcx
	float* v33; // rcx
	__int64 v34; // rax
	int v36[2]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v37; // [rsp+38h] [rbp-40h]
	__int64 v38; // [rsp+40h] [rbp-38h]
	char v39; // [rsp+48h] [rbp-30h]
	int v40; // [rsp+4Ch] [rbp-2Ch]
	char v41; // [rsp+50h] [rbp-28h]
	float v42; // [rsp+80h] [rbp+8h] BYREF

	v39 &= 0xFCu;
	v41 &= ~1u;
	v36[1] = 1065353216;
	*(float*)(a2 + 8) = sub_14085A7D0((__int64)a1, 0) + *(float*)(a2 + 8);
	v36[0] = 0;
	v37 = 0i64;
	v38 = 0i64;
	v40 = 0;
	sub_1408527D0((__int64)a1, (float*)v36, 3);
	v8 = 0;
	v42 = 0.0;
	v9 = *(float*)v36 + *(float*)(a2 + 8);
	v10 = *(float*)&v37 + *(float*)(a2 + 20);
	*(float*)(a2 + 8) = v9;
	*(float*)(a2 + 20) = v10;
	v11 = (unsigned __int8*)a1[10];
	if (v11)
	{
		v12 = *v11;
		v13 = 0i64;
		while (1)
		{
			v14 = (unsigned int)(v13 + 1);
			if (!v11[v14])
				break;
			v13 = (unsigned int)v14;
			if ((unsigned int)v14 >= v12)
				goto LABEL_5;
		}
		v15 = (__int64)&v11[4 * v13 + ((v12 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v15 = 0i64;
	}
	v16 = &v42;
	if (v15)
		v16 = (float*)v15;
	v42 = *v16;
	*(float*)(a2 + 8) = v9 + v42;
	if ((a1[12] & 1i64) != 0)
	{
		sub_140836340(qword_140C61BB0, (__int64)a1, 0, 0i64);
		*(float*)(a2 + 8) = v10 + *(float*)(a2 + 8);
	}
	v17 = (unsigned __int8*)a1[10];
	v42 = 0.0;
	if (v17)
	{
		v18 = *v17;
		v19 = 0i64;
		while (1)
		{
			v20 = (unsigned int)(v19 + 1);
			if (v17[v20] == 2)
				break;
			v19 = (unsigned int)v20;
			if ((unsigned int)v20 >= v18)
				goto LABEL_14;
		}
		v21 = (__int64)&v17[4 * v19 + ((v18 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_14:
		v21 = 0i64;
	}
	v22 = &v42;
	if (v21)
		v22 = (float*)v21;
	v42 = *v22;
	v23 = v42 + *(float*)(a2 + 20);
	*(float*)(a2 + 20) = v23;
	if ((a1[12] & 4i64) != 0)
	{
		sub_140836340(qword_140C61BB0, (__int64)a1, 2, 0i64);
		*(float*)(a2 + 20) = v23 + *(float*)(a2 + 20);
	}
	v24 = a1[5];
	if (v24)
	{
		v25 = *(unsigned __int8**)(v24 + 24);
		if (v25)
		{
			v26 = *v25;
			v27 = 0;
			while (1)
			{
				v28 = (unsigned int)(v27 + 1);
				if (!v25[v28])
					break;
				++v27;
				if ((unsigned int)v28 >= v26)
					goto LABEL_29;
			}
			v29 = (float*)&v25[16 * v27 + ((v26 + 4) & 0xFFFFFFFC)];
			if (v29)
				*(float*)(a2 + 8) = *v29 + *(float*)(a2 + 8);
		}
	LABEL_29:
		v30 = *(unsigned __int8**)(a1[5] + 24i64);
		if (v30)
		{
			v31 = *v30;
			while (1)
			{
				v32 = (unsigned int)(v8 + 1);
				if (v30[v32] == 2)
					break;
				++v8;
				if ((unsigned int)v32 >= v31)
					goto LABEL_36;
			}
			v33 = (float*)&v30[16 * v8 + ((v31 + 4) & 0xFFFFFFFC)];
			if (v33)
				*(float*)(a2 + 20) = *v33 + *(float*)(a2 + 20);
		}
	}
LABEL_36:
	v34 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 528i64))(a1);
	if (v34)
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _BYTE))(*(_QWORD*)v34 + 512i64))(v34, a2, a3, a4, 0);
	return 1i64;
}
// 1409A3530: using guessed type int dword_1409A3530[];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

