//----- (00000001407BBF40) ----------------------------------------------------
int* __fastcall sub_1407BBF40(__int64 a1, __m128* a2, int a3, int a4, unsigned int* a5, int a6)
{
	__m128* v7; // rcx
	__m128* v8; // r12
	unsigned __int64 v9; // r15
	int v10; // edi
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // r14
	int* v14; // rax
	unsigned __int64 v15; // r13
	int* v16; // rdi
	__m128 v17; // xmm9
	float v18; // xmm7_4
	__m128 v19; // xmm3
	__m128 v20; // xmm1
	__m128 v21; // xmm4
	__m128 v22; // xmm6
	float v23; // xmm2_4
	float v24; // xmm0_4
	__m128 v25; // xmm9
	float v26; // xmm3_4
	__m128 v27; // xmm2
	__m128 v28; // xmm0
	__m128 v29; // xmm1
	__m128 v30; // xmm12
	float v31; // xmm12_4
	__int64 v32; // r15
	__m128 v33; // xmm0
	bool v34; // zf
	__m128 v35; // xmm4
	__m128 v36; // xmm1
	float v37; // xmm8_4
	int v38; // ebx
	int* v39; // rax
	int* v40; // r12
	int* v41; // rax
	int* v42; // rbx
	__m128 v43; // xmm2
	__m128 v44; // xmm0
	__m128 v45; // xmm1
	unsigned int v46; // ecx
	int v47; // r8d
	int v48; // ebx
	int v49; // eax
	int v50; // r15d
	int* v51; // rax
	int* v52; // rsi
	unsigned int v53; // esi
	int* v54; // rax
	int* v55; // rbx
	__int64 v56; // rax
	int* v57; // r13
	__int64 v58; // rax
	__int64 v59; // rax
	int* v60; // r15
	__int64 v61; // rax
	int* v62; // r12
	int* result; // rax
	unsigned int v64; // [rsp+48h] [rbp-C0h] BYREF
	float v65; // [rsp+4Ch] [rbp-BCh] BYREF
	__int64 v66; // [rsp+50h] [rbp-B8h]
	int* v67[2]; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v68; // [rsp+68h] [rbp-A0h] BYREF
	int* v69; // [rsp+78h] [rbp-90h]
	__int64 v70; // [rsp+88h] [rbp-80h] BYREF
	int* v71; // [rsp+90h] [rbp-78h]
	int* v72; // [rsp+98h] [rbp-70h]
	__int64 v73; // [rsp+168h] [rbp+60h] BYREF
	__m128* v74; // [rsp+170h] [rbp+68h]
	int v75; // [rsp+178h] [rbp+70h]
	int v76; // [rsp+180h] [rbp+78h]

	v76 = a4;
	v75 = a3;
	v74 = a2;
	sub_1407B6330(a1);
	v8 = v7 + 4;
	v9 = 0i64;
	v67[1] = 0i64;
	v67[0] = 0i64;
	sub_1405E7080((__int64*)v67, (int*)&v7[4]);
	v10 = 256;
	if (*(_DWORD*)(a1 + 168))
		v10 = 12;
	if (*(_DWORD*)(a1 + 180))
		v10 |= 0x30u;
	v11 = 1i64;
	v73 = 1i64;
	v12 = sub_14018DB00(0i64, 1ui64, 4i64);
	*v12 = v10;
	v13 = v12;
	v14 = sub_14018DB00(0i64, 1ui64, 4i64);
	v15 = 1i64;
	*v14 = 0;
	v16 = v14;
	v17 = (__m128)0x40400000u;
	v22 = 0i64;
	v18 = 0.0;
	v19 = *(__m128*)(a1 + 240);
	v20 = _mm_mul_ps(v19, v19);
	v21 = _mm_sub_ps(*v74, *v8);
	v22.m128_f32[0] = (float)v76 * 0.001;
	v23 = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0]) + _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
	v24 = fsqrt(v23);
	v17.m128_f32[0] = fmaxf(
		(float)((float)(3.0 - (float)((float)(v23 * (float)(1.0 / v24)) * (float)(1.0 / v24))) * 0.5)
		* (float)(1.0 / v24),
		0.0);
	v25 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v19);
	v26 = *(float*)&dword_140C54B1C;
	v27 = _mm_mul_ps(v21, v25);
	v28 = _mm_shuffle_ps(v27, v27, 85);
	v28.m128_f32[0] = (float)(v28.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
	v29 = _mm_sub_ps(v21, _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v25));
	v30 = _mm_mul_ps(v29, v29);
	v31 = fsqrt(
		(float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
		+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0])
		/ v22.m128_f32[0];
	if (v22.m128_f32[0] > 0.0000099999997)
	{
		v32 = 1i64;
		do
		{
			v33 = v22;
			if ((float)(v22.m128_f32[0] + 0.0000099999997) >= v26)
				break;
			v34 = v75 == 0;
			v33.m128_f32[0] = v22.m128_f32[0];
			v35 = _mm_div_ps(v21, _mm_shuffle_ps(v33, v33, 0));
			*(__m128*)(a1 + 96) = v35;
			if (!v34)
			{
				v36 = v22;
				v36.m128_f32[0] = v22.m128_f32[0] * 0.5;
				*(__m128*)(a1 + 96) = _mm_sub_ps(v35, _mm_mul_ps(*(__m128*)(a1 + 240), _mm_shuffle_ps(v36, v36, 0)));
			}
			if (!(unsigned int)sub_1407BA940(a1, &v73, &v68, &v65))
				break;
			if (!(unsigned int)sub_1407BB5F0((__m128*)a1, v73, &v68, *(double*)v22.m128_u64, (float*)&v64))
				break;
			v37 = *(float*)&v64;
			if (!(unsigned int)sub_1407BB9C0((__m128*)a1, v65, COERCE_DOUBLE((unsigned __int64)v64)))
				break;
			v18 = v18 + v37;
			sub_1405E7080((__int64*)v67, (int*)v8);
			v38 = sub_1407BC740(a1);
			v66 = v32 + 1;
			v39 = sub_14018DB00((__int64)v13, v32 + 1, 4i64);
			v39[v32] = v38;
			v40 = v39;
			if (v13 != v39)
			{
				sub_1407DB590(v39, v13, 4 * v32);
				if (v13)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
				v13 = v40;
			}
			v32 = v66;
			v41 = sub_14018DB00((__int64)v16, v15 + 1, 4i64);
			v42 = v41;
			v41[v15] = (int)(float)(v18 * 1000.0);
			if (v16 != v41)
			{
				sub_1407DB590(v41, v16, 4 * v15);
				if (v16)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
				v16 = v42;
			}
			v26 = v22.m128_f32[0];
			v8 = (__m128*)(a1 + 64);
			++v15;
			v21 = _mm_sub_ps(*v74, *(__m128*)(a1 + 64));
			v43 = _mm_mul_ps(v21, v25);
			v44 = _mm_shuffle_ps(v43, v43, 85);
			v44.m128_f32[0] = (float)(v44.m128_f32[0] + v43.m128_f32[0]) + _mm_shuffle_ps(v43, v43, 170).m128_f32[0];
			v45 = _mm_sub_ps(v21, _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v25));
			v22 = _mm_mul_ps(v45, v45);
			v22.m128_f32[0] = fsqrt(
				(float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
				+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0])
				/ v31;
		} while (v22.m128_f32[0] > 0.0000099999997);
		v73 = v32;
		v11 = v32;
		v9 = 0i64;
	}
	v46 = (int)(float)(v18 * 1000.0);
	if (v46 && v15)
	{
		v47 = a6;
		v48 = v76;
		do
		{
			v49 = v16[v9++];
			v16[v9 - 1] = v47 + v48 * v49 / v46;
		} while (v9 < v15);
		v11 = v73;
	}
	sub_1405E7080((__int64*)v67, (int*)v8);
	v50 = 256;
	if (*(_DWORD*)(a1 + 168))
		v50 = 12;
	if (*(_DWORD*)(a1 + 180))
		v50 |= 0x30u;
	v51 = sub_14018DB00((__int64)v13, v11 + 1, 4i64);
	v51[v11] = v50;
	v52 = v51;
	if (v13 != v51)
	{
		sub_1407DB590(v51, v13, 4 * v11);
		if (v13)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
		v13 = v52;
	}
	v53 = v15 + 1;
	v54 = sub_14018DB00((__int64)v16, v15 + 1, 4i64);
	v55 = v54;
	v54[v15] = v76 + a6;
	if (v16 != v54)
	{
		sub_1407DB590(v54, v16, 4 * v15);
		if (v16)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
		v16 = v55;
	}
	v69 = 0i64;
	v68 = (__m128)v53;
	v56 = 4i64 * v53;
	if (!is_mul_ok(v53, 4ui64))
		v56 = -1i64;
	v57 = sub_14018B280(v56, 0);
	v68.m128_u64[1] = (unsigned __int64)v57;
	sub_1407DB590(v57, v16, 4i64 * v53);
	v58 = 12i64 * v53;
	if (!is_mul_ok(v53, 0xCui64))
		v58 = -1i64;
	v69 = sub_14018B280(v58, 0);
	sub_1407DB590(v69, v67[0], 12i64 * v53);
	if (v53)
	{
		sub_1407BCE70((unsigned int*)&v68);
		v57 = (int*)v68.m128_u64[1];
	}
	v71 = 0i64;
	v72 = 0i64;
	v70 = v53;
	v59 = 4i64 * v53;
	if (!is_mul_ok(v53, 4ui64))
		v59 = -1i64;
	v60 = sub_14018B280(v59, 0);
	v71 = v60;
	sub_1407DB590(v60, v16, 4i64 * v53);
	v61 = 4i64 * v53;
	if (!is_mul_ok(v53, 4ui64))
		v61 = -1i64;
	v62 = sub_14018B280(v61, 0);
	v72 = v62;
	sub_1407DB590(v62, v13, 4i64 * v53);
	if (v53)
	{
		sub_1407BDD70((unsigned int*)&v70);
		v62 = v72;
		v60 = v71;
		v53 = v70;
	}
	sub_14079A660(a5, v68.m128_u32[0], v57, v69);
	sub_14079A880(a5, v53, v60, v62);
	sub_14018B900((__int64)v60, 0);
	sub_14018B900((__int64)v62, 0);
	sub_14018B900((__int64)v57, 0);
	sub_14018B900((__int64)v69, 0);
	if (v16)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	if (v13)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
	result = v67[0];
	if (v67[0])
		return (int*)(*(__int64(__fastcall**)(int*))(*((_QWORD*)v67[0] - 2) + 8i64))(v67[0] - 4);
	return result;
}
// 1407BBFA7: variable 'v7' is possibly undefined
// 140C54B1C: using guessed type int dword_140C54B1C;

