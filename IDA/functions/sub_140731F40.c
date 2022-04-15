//----- (0000000140731F40) ----------------------------------------------------
__int64 __fastcall sub_140731F40(_QWORD* a1)
{
	__m128 v1; // xmm0
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rbx
	unsigned int v9; // eax
	__int64 v10; // r8
	double v11; // xmm13_8
	unsigned int v12; // esi
	_DWORD* v13; // rcx
	_QWORD* v14; // rcx
	__m128 v15; // xmm7
	_DWORD* v16; // rax
	_QWORD* v17; // rcx
	__m128 v18; // xmm6
	_DWORD* v19; // rax
	_QWORD* v20; // rcx
	_DWORD* v21; // rax
	double v22; // xmm0_8
	_QWORD* v23; // rcx
	float v24; // xmm9_4
	_DWORD* v25; // rax
	double v26; // xmm0_8
	_QWORD* v27; // rcx
	float v28; // xmm7_4
	_DWORD* v29; // rax
	double v30; // xmm14_8
	__int64 v31; // xmm8_8
	double v32; // xmm6_8
	float v33; // xmm12_4
	float v34; // xmm0_4
	float v35; // xmm11_4
	float v36; // xmm10_4
	float v37; // xmm0_4
	float v38; // xmm9_4
	float v39; // xmm0_4
	_QWORD* v40; // rcx
	_DWORD* v41; // rax
	float v42; // xmm0_4
	__int64 v43; // rax
	__m128* v44; // r9
	__int64 v45; // rcx
	int* v46; // rax
	int v48[4]; // [rsp+28h] [rbp-E0h] BYREF
	char* v49; // [rsp+38h] [rbp-D0h]
	__m128* v50; // [rsp+40h] [rbp-C8h]
	__int128 v51; // [rsp+48h] [rbp-C0h]
	int v52; // [rsp+58h] [rbp-B0h] BYREF
	_QWORD v53[3]; // [rsp+60h] [rbp-A8h] BYREF
	__m128 v54[4]; // [rsp+78h] [rbp-90h] BYREF
	__m256 v55[2]; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v56[2]; // [rsp+F8h] [rbp-10h] BYREF
	char v57[64]; // [rsp+118h] [rbp+10h] BYREF
	__m128* v58[10]; // [rsp+158h] [rbp+50h] BYREF

	v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	if (v4)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v3 = (unsigned int)(v3 + 1);
			v6 = (unsigned int)v3;
			if ((unsigned int)v3 >= v4)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8 * v3);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v9 = sub_1400F26A0(v8, 1);
	v10 = *(_QWORD*)(v8 + 16);
	v11 = 0.0;
	v12 = v9;
	v13 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64);
	if ((unsigned __int64)v13 >= *(_QWORD*)(v10 + 16)
		|| v13 == dword_140A12138
		|| *(int*)(*(_QWORD*)(v10 + 24) + 24i64) <= 0)
	{
		v1 = 0i64;
	}
	else
	{
		*(double*)v1.m128_u64 = sub_140056C40(*(_QWORD**)(v8 + 16), 2u);
	}
	v14 = *(_QWORD**)(v8 + 16);
	v15 = 0i64;
	v15.m128_f32[0] = *(double*)v1.m128_u64;
	v16 = (_DWORD*)(v14[3] + 32i64);
	if ((unsigned __int64)v16 >= v14[2] || v16 == dword_140A12138 || *(int*)(v14[3] + 40i64) <= 0)
		v1 = 0i64;
	else
		*(double*)v1.m128_u64 = sub_140056C40(v14, 3u);
	v17 = *(_QWORD**)(v8 + 16);
	v18 = 0i64;
	v18.m128_f32[0] = *(double*)v1.m128_u64;
	v19 = (_DWORD*)(v17[3] + 48i64);
	if ((unsigned __int64)v19 >= v17[2] || v19 == dword_140A12138 || *(int*)(v17[3] + 56i64) <= 0)
		v1 = 0i64;
	else
		*(double*)v1.m128_u64 = sub_140056C40(v17, 4u);
	v1.m128_f32[0] = *(double*)v1.m128_u64;
	*(__m128*)& v53[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, v1), _mm_unpacklo_ps(v18, (__m128)0i64));
	v20 = *(_QWORD**)(v8 + 16);
	v21 = (_DWORD*)(v20[3] + 64i64);
	if ((unsigned __int64)v21 >= v20[2] || v21 == dword_140A12138 || *(int*)(v20[3] + 72i64) <= 0)
		v22 = 0.0;
	else
		v22 = sub_140056C40(v20, 5u);
	v23 = *(_QWORD**)(v8 + 16);
	v24 = v22;
	v25 = (_DWORD*)(v23[3] + 80i64);
	if ((unsigned __int64)v25 >= v23[2] || v25 == dword_140A12138 || *(int*)(v23[3] + 88i64) <= 0)
		v26 = 0.0;
	else
		v26 = sub_140056C40(v23, 6u);
	v27 = *(_QWORD**)(v8 + 16);
	v28 = v26;
	v29 = (_DWORD*)(v27[3] + 96i64);
	if ((unsigned __int64)v29 >= v27[2] || v29 == dword_140A12138 || *(int*)(v27[3] + 104i64) <= 0)
		v30 = 0.0;
	else
		v30 = sub_140056C40(v27, 7u);
	v31 = (unsigned int)dword_140C3B438;
	*(float*)&v31 = *(float*)&dword_140C3B438 * 0.0055555557;
	HIDWORD(v32) = 0;
	*(float*)&v32 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * v28) * 0.5;
	sub_1408FE3D0(v32);
	v33 = *(float*)&v32;
	v34 = sub_1408FC950(v32);
	HIDWORD(v32) = HIDWORD(v31);
	v35 = v34;
	*(float*)&v32 = (float)(*(float*)&v31 * v24) * 0.5;
	sub_1408FE3D0(v32);
	v36 = *(float*)&v32;
	v37 = sub_1408FC950(v32);
	HIDWORD(v32) = 0;
	*(float*)&v32 = v30;
	v38 = v37;
	*(float*)&v32 = (float)(*(float*)&v32 * *(float*)&v31) * 0.5;
	sub_1408FE3D0(v32);
	v39 = sub_1408FC950(v32);
	*(float*)v48 = (float)(v33 * (float)(*(float*)&v32 * v38)) + (float)((float)(v39 * v36) * v35);
	*(float*)&v48[1] = (float)((float)(*(float*)&v32 * v38) * v35) - (float)(v33 * (float)(v39 * v36));
	*(float*)&v48[3] = (float)(v33 * (float)(*(float*)&v32 * v36)) + (float)((float)(v39 * v38) * v35);
	*(float*)&v48[2] = (float)(v33 * (float)(v39 * v38)) - (float)((float)(*(float*)&v32 * v36) * v35);
	v40 = *(_QWORD**)(v8 + 16);
	v41 = (_DWORD*)(v40[3] + 112i64);
	if ((unsigned __int64)v41 < v40[2] && v41 != dword_140A12138 && *(int*)(v40[3] + 120i64) > 0)
		v11 = sub_140056C40(v40, 8u);
	v42 = v11;
	v50 = 0i64;
	*(_QWORD*)&v51 = v48;
	*(float*)&v49 = v42;
	*((_QWORD*)&v51 + 1) = &v53[1];
	v56[0] = (unsigned __int64)v49;
	v56[1] = v51;
	v43 = sub_1405B1510(&qword_140C7DFB0);
	sub_1405B0600(v43, v55);
	sub_1401B0590((int*)v56, (__int64)v57);
	v49 = v57;
	v50 = v44;
	v58[0] = (__m128*)v57;
	v58[1] = v44;
	sub_1401AFB10(v58, v54);
	v46 = sub_1404B7D40(v45, &v52, v12, v54);
	return sub_1406AE160(a1, *v46);
}
// 1407320AC: variable 'v1' is possibly undefined
// 1407322ED: variable 'v44' is possibly undefined
// 140732323: variable 'v45' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B438: using guessed type int dword_140C3B438;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140731F40: using guessed type __m256 var_1A0[2];
// 140731F40: using guessed type __m128 var_1E0[4];

