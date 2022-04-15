//----- (0000000140732E20) ----------------------------------------------------
__int64 __fastcall sub_140732E20(_QWORD* a1)
{
	__m128 v1; // xmm0
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rdi
	__int64 v9; // rbx
	int v10; // eax
	_QWORD* v11; // rcx
	double v12; // xmm13_8
	__int64 v13; // r14
	_DWORD* v14; // rax
	__int64 v15; // r14
	_QWORD* v16; // rcx
	__m128 v17; // xmm7
	_DWORD* v18; // rax
	_QWORD* v19; // rcx
	__m128 v20; // xmm6
	_DWORD* v21; // rax
	_QWORD* v22; // rcx
	_DWORD* v23; // rax
	double v24; // xmm0_8
	_QWORD* v25; // rcx
	float v26; // xmm9_4
	_DWORD* v27; // rax
	double v28; // xmm0_8
	_QWORD* v29; // rcx
	float v30; // xmm7_4
	_DWORD* v31; // rax
	double v32; // xmm14_8
	__int64 v33; // xmm8_8
	double v34; // xmm6_8
	float v35; // xmm12_4
	float v36; // xmm0_4
	float v37; // xmm11_4
	float v38; // xmm10_4
	float v39; // xmm0_4
	float v40; // xmm9_4
	float v41; // xmm0_4
	_QWORD* v42; // rcx
	_DWORD* v43; // rax
	float v44; // xmm0_4
	__int64 v45; // rax
	__m128* v46; // r9
	__int64 v47; // rcx
	int* v48; // rax
	int v50[4]; // [rsp+28h] [rbp-E0h] BYREF
	char* v51; // [rsp+38h] [rbp-D0h]
	__m128* v52; // [rsp+40h] [rbp-C8h]
	__int128 v53; // [rsp+48h] [rbp-C0h]
	int v54; // [rsp+58h] [rbp-B0h] BYREF
	_QWORD v55[3]; // [rsp+60h] [rbp-A8h] BYREF
	__m128 v56[4]; // [rsp+78h] [rbp-90h] BYREF
	__m256 v57[2]; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v58[2]; // [rsp+F8h] [rbp-10h] BYREF
	char v59[64]; // [rsp+118h] [rbp+10h] BYREF
	__m128* v60[10]; // [rsp+158h] [rbp+50h] BYREF

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
	v9 = (int)sub_1400F26A0(v8, 1);
	v10 = sub_1400F26A0(v8, 2);
	v11 = *(_QWORD**)(v8 + 16);
	v12 = 0.0;
	v13 = v10;
	v14 = (_DWORD*)(v11[3] + 32i64);
	v15 = v9 | (v13 << 32);
	if ((unsigned __int64)v14 >= v11[2] || v14 == dword_140A12138 || *(int*)(v11[3] + 40i64) <= 0)
		v1 = 0i64;
	else
		*(double*)v1.m128_u64 = sub_140056C40(v11, 3u);
	v16 = *(_QWORD**)(v8 + 16);
	v17 = 0i64;
	v17.m128_f32[0] = *(double*)v1.m128_u64;
	v18 = (_DWORD*)(v16[3] + 48i64);
	if ((unsigned __int64)v18 >= v16[2] || v18 == dword_140A12138 || *(int*)(v16[3] + 56i64) <= 0)
		v1 = 0i64;
	else
		*(double*)v1.m128_u64 = sub_140056C40(v16, 4u);
	v19 = *(_QWORD**)(v8 + 16);
	v20 = 0i64;
	v20.m128_f32[0] = *(double*)v1.m128_u64;
	v21 = (_DWORD*)(v19[3] + 64i64);
	if ((unsigned __int64)v21 >= v19[2] || v21 == dword_140A12138 || *(int*)(v19[3] + 72i64) <= 0)
		v1 = 0i64;
	else
		*(double*)v1.m128_u64 = sub_140056C40(v19, 5u);
	v1.m128_f32[0] = *(double*)v1.m128_u64;
	*(__m128*)& v55[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, v1), _mm_unpacklo_ps(v20, (__m128)0i64));
	v22 = *(_QWORD**)(v8 + 16);
	v23 = (_DWORD*)(v22[3] + 80i64);
	if ((unsigned __int64)v23 >= v22[2] || v23 == dword_140A12138 || *(int*)(v22[3] + 88i64) <= 0)
		v24 = 0.0;
	else
		v24 = sub_140056C40(v22, 6u);
	v25 = *(_QWORD**)(v8 + 16);
	v26 = v24;
	v27 = (_DWORD*)(v25[3] + 96i64);
	if ((unsigned __int64)v27 >= v25[2] || v27 == dword_140A12138 || *(int*)(v25[3] + 104i64) <= 0)
		v28 = 0.0;
	else
		v28 = sub_140056C40(v25, 7u);
	v29 = *(_QWORD**)(v8 + 16);
	v30 = v28;
	v31 = (_DWORD*)(v29[3] + 112i64);
	if ((unsigned __int64)v31 >= v29[2] || v31 == dword_140A12138 || *(int*)(v29[3] + 120i64) <= 0)
		v32 = 0.0;
	else
		v32 = sub_140056C40(v29, 8u);
	v33 = (unsigned int)dword_140C3B438;
	*(float*)&v33 = *(float*)&dword_140C3B438 * 0.0055555557;
	HIDWORD(v34) = 0;
	*(float*)&v34 = (float)((float)(*(float*)&dword_140C3B438 * 0.0055555557) * v30) * 0.5;
	sub_1408FE3D0(v34);
	v35 = *(float*)&v34;
	v36 = sub_1408FC950(v34);
	HIDWORD(v34) = HIDWORD(v33);
	v37 = v36;
	*(float*)&v34 = (float)(*(float*)&v33 * v26) * 0.5;
	sub_1408FE3D0(v34);
	v38 = *(float*)&v34;
	v39 = sub_1408FC950(v34);
	HIDWORD(v34) = 0;
	*(float*)&v34 = v32;
	v40 = v39;
	*(float*)&v34 = (float)(*(float*)&v34 * *(float*)&v33) * 0.5;
	sub_1408FE3D0(v34);
	v41 = sub_1408FC950(v34);
	*(float*)v50 = (float)(v35 * (float)(*(float*)&v34 * v40)) + (float)((float)(v41 * v38) * v37);
	*(float*)&v50[1] = (float)((float)(*(float*)&v34 * v40) * v37) - (float)(v35 * (float)(v41 * v38));
	*(float*)&v50[3] = (float)(v35 * (float)(*(float*)&v34 * v38)) + (float)((float)(v41 * v40) * v37);
	*(float*)&v50[2] = (float)(v35 * (float)(v41 * v40)) - (float)((float)(*(float*)&v34 * v38) * v37);
	v42 = *(_QWORD**)(v8 + 16);
	v43 = (_DWORD*)(v42[3] + 128i64);
	if ((unsigned __int64)v43 < v42[2] && v43 != dword_140A12138 && *(int*)(v42[3] + 136i64) > 0)
		v12 = sub_140056C40(v42, 9u);
	v44 = v12;
	v52 = 0i64;
	*(_QWORD*)&v53 = v50;
	*(float*)&v51 = v44;
	*((_QWORD*)&v53 + 1) = &v55[1];
	v58[0] = (unsigned __int64)v51;
	v58[1] = v53;
	v45 = sub_1405B1510(&qword_140C7DFB0);
	sub_1405B0600(v45, v57);
	sub_1401B0590((int*)v58, (__int64)v59);
	v51 = v59;
	v52 = v46;
	v60[0] = (__m128*)v59;
	v60[1] = v46;
	sub_1401AFB10(v60, v56);
	v48 = sub_1404B7EC0(v47, &v54, v15, v56);
	return sub_1406AE160(a1, *v48);
}
// 140732FA3: variable 'v1' is possibly undefined
// 1407331E4: variable 'v46' is possibly undefined
// 14073321A: variable 'v47' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B438: using guessed type int dword_140C3B438;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140732E20: using guessed type __m256 var_1A0[2];
// 140732E20: using guessed type __m128 var_1E0[4];

