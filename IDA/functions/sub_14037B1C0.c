//----- (000000014037B1C0) ----------------------------------------------------
__int64 __fastcall sub_14037B1C0(__int64* a1, __int64 a2, _OWORD* a3, __m128* a4, int a5, __int64 a6)
{
	unsigned int v7; // eax
	int v8; // ecx
	__int64 v9; // rax
	__m128 v10; // xmm0
	__int64 v11; // rax
	_WORD* v12; // rdx
	unsigned int v13; // esi
	int v14; // edi
	float v15; // xmm1_4
	double v16; // xmm6_8
	__m128 v17; // xmm0
	__m128 v18; // xmm10
	__m128 v19; // xmm12
	__m128 v20; // xmm13
	__m128 v21; // xmm11
	float v22; // xmm8_4
	float v23; // xmm9_4
	float v24; // xmm7_4
	__int32 v25; // eax
	_WORD* v26; // rdx
	__m128 v27; // xmm6
	__m128 v28; // xmm7
	__m128 v29; // xmm8
	__int128 v30; // xmm9
	__int64 v31; // rcx
	_WORD* v32; // rdx
	__int64 v33; // rcx
	__int64* v34; // rcx
	__int64 v35; // rax
	__int64 v37; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v38; // [rsp+60h] [rbp-A8h] BYREF
	__m128 v39; // [rsp+68h] [rbp-A0h]
	__m128 v40; // [rsp+78h] [rbp-90h]
	__m128 v41; // [rsp+88h] [rbp-80h]
	__m128 v42; // [rsp+98h] [rbp-70h]
	__int128 v43; // [rsp+A8h] [rbp-60h] BYREF
	__int128 v44; // [rsp+B8h] [rbp-50h]
	__m128 v45; // [rsp+C8h] [rbp-40h]
	__m128 v46; // [rsp+D8h] [rbp-30h]
	__m128 v47; // [rsp+E8h] [rbp-20h]
	__int128 v48; // [rsp+F8h] [rbp-10h]
	__int128 v49; // [rsp+188h] [rbp+80h]
	int v50; // [rsp+198h] [rbp+90h]
	int v51; // [rsp+19Ch] [rbp+94h]
	int v52; // [rsp+1A4h] [rbp+9Ch]
	int v53; // [rsp+1A8h] [rbp+A0h]
	int v54; // [rsp+1ACh] [rbp+A4h]
	int v55; // [rsp+1B4h] [rbp+ACh]
	int v56; // [rsp+1B8h] [rbp+B0h]
	__int64 v57; // [rsp+1C8h] [rbp+C0h]
	__int64 v58; // [rsp+1D0h] [rbp+C8h]

	*a1 = a2;
	a1[10] = *(_QWORD*)a6;
	a1[11] = *(_QWORD*)(a6 + 8);
	*((_DWORD*)a1 + 24) = *(_DWORD*)(a6 + 16);
	a1[13] = *(_QWORD*)(a6 + 24);
	*((_DWORD*)a1 + 28) = *(_DWORD*)(a6 + 32);
	*((_DWORD*)a1 + 29) = *(_DWORD*)(a6 + 36);
	*((_DWORD*)a1 + 30) = *(_DWORD*)(a6 + 40);
	*((_OWORD*)a1 + 8) = *(_OWORD*)(a6 + 48);
	*((_DWORD*)a1 + 36) = *(_DWORD*)(a6 + 64);
	*((_DWORD*)a1 + 37) = *(_DWORD*)(a6 + 68);
	*((_DWORD*)a1 + 38) = *(_DWORD*)(a6 + 72);
	*((_DWORD*)a1 + 39) = *(_DWORD*)(a6 + 76);
	*((_DWORD*)a1 + 40) = *(_DWORD*)(a6 + 80);
	*((_DWORD*)a1 + 41) = *(_DWORD*)(a6 + 84);
	*((_DWORD*)a1 + 42) = *(_DWORD*)(a6 + 88);
	*((_DWORD*)a1 + 43) = *(_DWORD*)(a6 + 92);
	v7 = *((_DWORD*)a1 + 36);
	v8 = 1;
	if (v7 > 1)
		v8 = v7;
	v9 = *a1;
	*((_DWORD*)a1 + 36) = v8;
	*((_DWORD*)a1 + 6) = *(_DWORD*)(v9 + 880);
	*((_OWORD*)a1 + 2) = *a3;
	v10 = *a4;
	*((__m128*)a1 + 3) = *a4;
	v11 = *a1;
	v12 = (_WORD*)a1[13];
	*((_DWORD*)a1 + 16) = a5;
	v13 = *(_DWORD*)(v11 + 160);
	if (v13 < (int)*(float*)(v11 + 164))
		v13 = (int)*(float*)(v11 + 164);
	v38 = 0i64;
	if (!v12
		|| !*v12
		|| (v14 = (*(__int64(__fastcall**)(__int64, _WORD*, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			v12,
			v13,
			1i64,
			1,
			21,
			0,
			0,
			&v38),
			v14 >= 0))
	{
		v15 = *((float*)a1 + 38);
		*(_QWORD*)&v16 = *((unsigned int*)a1 + 16);
		v10.m128_f32[0] = v15;
		v17 = _mm_shuffle_ps(v10, v10, 0);
		v18 = _mm_mul_ps((__m128)xmmword_140C78410, v17);
		v17.m128_f32[0] = v15;
		v19 = _mm_mul_ps((__m128)xmmword_140C78430, _mm_shuffle_ps(v17, v17, 0));
		v20 = (__m128)xmmword_140C78440;
		v21 = _mm_mul_ps((__m128)xmmword_140C78420, (__m128)xmmword_140B7B240);
		v22 = sub_1408FE3D0(0.0);
		v23 = sub_1408FC950(0.0);
		v24 = sub_1408FE3D0(v16);
		v17.m128_f32[0] = sub_1408FC950(v16);
		v39.m128_i32[3] = 0;
		v40.m128_i32[3] = 0;
		v41.m128_i32[3] = 0;
		v39.m128_f32[2] = -v24;
		v39.m128_f32[0] = v23 * v17.m128_f32[0];
		v39.m128_f32[1] = v22 * v17.m128_f32[0];
		v40.m128_f32[0] = (float)((float)(v23 * v24) * v22) - (float)(v22 * v23);
		v40.m128_f32[1] = (float)((float)(v22 * v24) * v22) + (float)(v23 * v23);
		v41.m128_f32[0] = (float)(v22 * v22) + (float)((float)(v23 * v24) * v23);
		v40.m128_f32[2] = v17.m128_f32[0] * v22;
		v41.m128_f32[2] = v17.m128_f32[0] * v23;
		v41.m128_f32[1] = (float)((float)(v22 * v24) * v23) - (float)(v23 * v22);
		v25 = *((_DWORD*)a1 + 8);
		v26 = (_WORD*)a1[10];
		v27 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v40), _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v39)),
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 170), v41)),
			_mm_mul_ps(_mm_shuffle_ps(v18, v18, 255), v20));
		v28 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v40), _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v39)),
				_mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), v41)),
			_mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v20));
		v29 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v40), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v39)),
				_mm_mul_ps(_mm_shuffle_ps(v19, v19, 170), v41)),
			_mm_mul_ps(_mm_shuffle_ps(v19, v19, 255), v20));
		v42 = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 85), v40), _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v39)),
				_mm_mul_ps(_mm_shuffle_ps(v20, v20, 170), v41)),
			_mm_mul_ps(_mm_shuffle_ps(v20, v20, 255), v20));
		v42.m128_i32[0] = v25;
		*(unsigned __int64*)((char*)v42.m128_u64 + 4) = *(__int64*)((char*)a1 + 36);
		v30 = (__int128)v42;
		if (v26 && *v26)
		{
			v37 = 0i64;
			v14 = (*(__int64(__fastcall**)(__int64, _WORD*, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				v26,
				v13,
				1i64,
				1,
				0,
				0,
				0,
				&v37);
			if (v14 < 0)
				goto LABEL_31;
			sub_1407E4830((int*)&v43, 0i64, 0x130ui64);
			v50 = 1065353216;
			v45 = v27;
			v51 = 1065353216;
			v52 = 1065353216;
			v43 = xmmword_140B7B590;
			v44 = xmmword_140B7AC50;
			v46 = v28;
			v47 = v29;
			v48 = v30;
			v49 = xmmword_140B7B240;
			if (!v38)
				v52 = 0;
			v53 = 1048576000;
			v54 = 1056964608;
			v57 = v37;
			v31 = *a1;
			v55 = 1088;
			v56 = 3;
			v58 = v38;
			v14 = (*(__int64(__fastcall**)(__int64, __int128*, __int64*))(*(_QWORD*)v31 + 224i64))(v31, &v43, a1 + 1);
			if (v14 < 0)
			{
			LABEL_31:
				if (v37)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
				goto LABEL_28;
			}
			if (v37)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
		}
		v32 = (_WORD*)a1[11];
		if (!v32 || !*v32)
		{
		LABEL_24:
			v34 = (__int64*)(*a1 + 4832);
			if (!a1[22])
			{
				a1[22] = (__int64)v34;
				a1[23] = *v34;
				*v34 = (__int64)a1;
				v35 = a1[23];
				if (v35)
					*(_QWORD*)(v35 + 176) = a1 + 23;
			}
			v14 = 0;
			goto LABEL_28;
		}
		v37 = 0i64;
		v14 = (*(__int64(__fastcall**)(__int64, _WORD*, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			v32,
			v13,
			1i64,
			1,
			0,
			0,
			0,
			&v37);
		if (v14 >= 0)
		{
			sub_1407E4830((int*)&v43, 0i64, 0x130ui64);
			v50 = 1065353216;
			v45 = v27;
			v51 = 1065353216;
			v52 = 1065353216;
			v43 = xmmword_140B7B590;
			v44 = xmmword_140B7AC50;
			v46 = v28;
			v47 = v29;
			v48 = v30;
			v49 = xmmword_140B7B240;
			if (!v38)
				v52 = 0;
			v53 = 1048576000;
			v54 = 1056964608;
			v57 = v37;
			v33 = *a1;
			v55 = 1088;
			v56 = 12;
			v58 = v38;
			v14 = (*(__int64(__fastcall**)(__int64, __int128*, __int64*))(*(_QWORD*)v33 + 224i64))(v33, &v43, a1 + 2);
			if (v14 >= 0)
			{
				if (v37)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
				goto LABEL_24;
			}
		}
		goto LABEL_31;
	}
LABEL_28:
	if (v38)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
	return (unsigned int)v14;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140B7B590: using guessed type __int128 xmmword_140B7B590;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

