//----- (00000001407D2F60) ----------------------------------------------------
__int64 __fastcall sub_1407D2F60(__int64 a1, __int64 a2)
{
	int* v2; // rdi
	__int128 v3; // xmm13
	__int128 v4; // xmm12
	__int128 v5; // xmm11
	int v6; // ebx
	int v7; // eax
	__m128 v8; // xmm15
	__m128 v9; // xmm14
	__m128 v12; // xmm10
	__m128 v13; // xmm7
	__m128 v14; // xmm3
	__m128 v15; // xmm3
	float v16; // xmm13_4
	float v17; // xmm11_4
	float v18; // xmm12_4
	float v19; // xmm0_4
	float v20; // xmm9_4
	__m128 v21; // xmm0
	__m128 v22; // xmm8
	__m128 v23; // xmm0
	__m128 v24; // xmm8
	__m128 v25; // xmm7
	__m128 v26; // xmm0
	int v27; // eax
	__m128 v28; // xmm7
	float v29; // xmm3_4
	__m128 v30; // xmm4
	__m128 v31; // xmm5
	__int64 v32; // rdx
	__int64 v33; // r8
	int v34; // ecx
	__m128 v35; // xmm0
	int v36; // ecx
	__m128 v37; // xmm0
	int v38; // ecx
	__int64 v39; // rsi
	__int64 v40; // rcx
	__int64 result; // rax
	__int128 v42; // [rsp+28h] [rbp-E0h]
	__int128 v43; // [rsp+38h] [rbp-D0h]
	__int128 v44; // [rsp+48h] [rbp-C0h]
	__int128 v45; // [rsp+68h] [rbp-A0h]
	__int128 v46; // [rsp+78h] [rbp-90h]
	__int128 v47; // [rsp+98h] [rbp-70h]
	__int128 v48; // [rsp+A8h] [rbp-60h]
	__int128 v49; // [rsp+C8h] [rbp-40h]
	float v50; // [rsp+E8h] [rbp-20h]
	__int128 v51; // [rsp+F8h] [rbp-10h]
	float v52; // [rsp+118h] [rbp+10h]
	__int128 v53; // [rsp+128h] [rbp+20h]
	float v54; // [rsp+148h] [rbp+40h]

	v2 = (int*)qword_140C63750;
	v50 = *(float*)(a1 + 3280);
	v3 = *(_OWORD*)(a1 + 3248);
	v4 = *(_OWORD*)(a1 + 3296);
	v5 = *(_OWORD*)(a1 + 3344);
	v6 = *(_DWORD*)qword_140C63750;
	v52 = *(float*)(a1 + 3328);
	v49 = v3;
	v51 = v4;
	v53 = v5;
	v54 = *(float*)(a1 + 3376);
	v7 = dword_140C56150;
	v12 = (__m128)(unsigned int)dword_140C3B438;
	v8 = *(__m128*)(a1 + 3312);
	v9 = *(__m128*)(a1 + 3360);
	v12.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
	if (*(_DWORD*)qword_140C63750 < dword_140C56150)
		v7 = *(_DWORD*)qword_140C63750;
	v13 = v12;
	v13.m128_f32[0] = v12.m128_f32[0] * *(float*)(a1 + 2512);
	v14 = (__m128) * ((unsigned int*)&xmmword_140C56160 + v7);
	v15 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), *(__m128*)(a1 + 2784));
	v16 = *(float*)&v3 + (float)(v15.m128_f32[0] * 3.5449078);
	v17 = *(float*)&v5 + (float)(_mm_shuffle_ps(v15, v15, 170).m128_f32[0] * 3.5449078);
	v18 = *(float*)&v4 + (float)(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] * 3.5449078);
	v19 = sub_1408FC950(*(double*)v13.m128_u64);
	v12.m128_f32[0] = v12.m128_f32[0] * *(float*)(a1 + 2516);
	v20 = v19;
	v21 = v12;
	v21.m128_f32[0] = sub_1408FE3D0(*(double*)v12.m128_u64);
	v22 = v21;
	v23 = v13;
	v22.m128_f32[0] = v22.m128_f32[0] * v20;
	v24 = _mm_xor_ps(v22, (__m128)xmmword_140B7B530);
	v23.m128_f32[0] = sub_1408FE3D0(*(double*)v13.m128_u64);
	v25 = v23;
	v26 = v12;
	v26.m128_f32[0] = sub_1408FC950(*(double*)v12.m128_u64);
	v27 = dword_140C561B0;
	v28 = _mm_unpacklo_ps(v25, (__m128)0i64);
	if (v6 < dword_140C561B0)
		v27 = v6;
	v26.m128_f32[0] = v26.m128_f32[0] * v20;
	v29 = dword_140C561C0[v27];
	*(float*)&v43 = v16 * v29;
	*(float*)&v45 = v18 * v29;
	*(float*)&v47 = v17 * v29;
	v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, _mm_xor_ps(v26, (__m128)xmmword_140B7B530)), v28);
	v31 = *(__m128*)(a1 + 3264);
	*((float*)&v43 + 1) = *((float*)&v49 + 1) * v29;
	*((float*)&v45 + 1) = *((float*)&v51 + 1) * v29;
	*((float*)&v47 + 1) = *((float*)&v53 + 1) * v29;
	*((float*)&v45 + 2) = *((float*)&v51 + 2) * v29;
	*((float*)&v43 + 2) = *((float*)&v49 + 2) * v29;
	*((float*)&v43 + 3) = *((float*)&v49 + 3) * v29;
	*((float*)&v47 + 3) = *((float*)&v53 + 3) * v29;
	*((float*)&v47 + 2) = *((float*)&v53 + 2) * v29;
	*(float*)&v44 = v31.m128_f32[0] * v29;
	*((float*)&v45 + 3) = *((float*)&v51 + 3) * v29;
	*(float*)&v48 = v29 * v9.m128_f32[0];
	*(float*)&v46 = v29 * v8.m128_f32[0];
	*((float*)&v44 + 1) = v29 * _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
	*((float*)&v46 + 1) = v29 * _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
	*((float*)&v48 + 1) = v29 * _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
	*((float*)&v44 + 2) = v29 * _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
	*((float*)&v46 + 2) = v29 * _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
	*((float*)&v48 + 2) = v29 * _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
	*((float*)&v44 + 3) = v29 * *(float*)(a1 + 3276);
	*((float*)&v46 + 3) = v29 * *(float*)(a1 + 3324);
	*((float*)&v48 + 3) = v29 * *(float*)(a1 + 3372);
	v32 = 6688i64;
	v33 = 12i64;
	*(_OWORD*)a2 = v43;
	*(_OWORD*)(a2 + 48) = v45;
	*(_OWORD*)(a2 + 16) = v44;
	*(float*)(a2 + 32) = v29 * v50;
	*(_OWORD*)(a2 + 96) = v47;
	*(_OWORD*)(a2 + 64) = v46;
	*(float*)(a2 + 80) = v29 * v52;
	*(_OWORD*)(a2 + 112) = v48;
	*(float*)(a2 + 128) = v29 * v54;
	v34 = dword_140C56210;
	if (*v2 < dword_140C56210)
		v34 = *v2;
	v35 = (__m128)(unsigned int)dword_140C56220[v34];
	*(__m128*)(a2 + 144) = _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), *(__m128*)(a1 + 2480));
	v36 = dword_140C56210;
	if (*v2 < dword_140C56210)
		v36 = *v2;
	v37 = (__m128)(unsigned int)dword_140C56220[v36];
	*(__m128*)(a2 + 160) = _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), *(__m128*)(a1 + 2528));
	*(_DWORD*)(a2 + 688) = 1103101952;
	*(__m128*)(a2 + 176) = v30;
	*(_DWORD*)(a2 + 696) = *(_DWORD*)(a1 + 2592);
	*(_DWORD*)(a2 + 700) = *(_DWORD*)(a1 + 2596);
	*(float*)&v42 = *(float*)(a1 + 3536) * 0.28209481;
	*((float*)&v42 + 2) = *(float*)(a1 + 3632) * 0.28209481;
	*((float*)&v42 + 1) = *(float*)(a1 + 3584) * 0.28209481;
	HIDWORD(v42) = 1065353216;
	*(_OWORD*)(a2 + 192) = v42;
	*(_DWORD*)(a2 + 736) = *(_DWORD*)(a1 + 2608);
	v38 = dword_140C56270;
	if (*v2 < dword_140C56270)
		v38 = *v2;
	v39 = a2 + 416;
	*(_DWORD*)(v39 + 328) = dword_140C56280[v38];
	*(_DWORD*)(v39 + 324) = *(_DWORD*)(a1 + 2612);
	*(_OWORD*)(v39 + 192) = *(_OWORD*)(a1 + 3216);
	do
	{
		v39 += 16i64;
		v32 += 4i64;
		v40 = *(unsigned int*)(v32 + *(_QWORD*)(a1 + 24) - 4);
		*(_OWORD*)(v39 - 208) = *(_OWORD*)(a1 + 48 * v40 + 2816);
		result = 6 * (v40 + 59);
		*(_OWORD*)(v39 - 16) = *(_OWORD*)(a1 + 48 * (v40 + 59));
		--v33;
	} while (v33);
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C56150: using guessed type int dword_140C56150;
// 140C56160: using guessed type __int128 xmmword_140C56160;
// 140C561B0: using guessed type int dword_140C561B0;
// 140C561C0: using guessed type float dword_140C561C0[16];
// 140C56210: using guessed type int dword_140C56210;
// 140C56220: using guessed type int dword_140C56220[16];
// 140C56270: using guessed type int dword_140C56270;
// 140C56280: using guessed type int dword_140C56280[16];
// 140C63750: using guessed type __int64 qword_140C63750;

