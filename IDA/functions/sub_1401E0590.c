//----- (00000001401E0590) ----------------------------------------------------
__int64 __fastcall sub_1401E0590(__int64* a1, unsigned int a2, __m128* a3)
{
	__int64* v6; // rax
	__int64 result; // rax
	float* v8; // rax
	float* v9; // rsi
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rdi
	__m128* v13; // rax
	__m128 v14; // xmm7
	__m128 v15; // xmm8
	__m128 v16; // xmm9
	__m128 v17; // xmm10
	__int64 v18; // rcx
	__int64 v19; // rbx
	unsigned int v20; // eax
	__int64 v21; // rbx
	unsigned int v22; // eax
	__int128* v23; // rax
	__int128 v24; // xmm1
	float v25; // xmm7_4
	BOOL v26; // ebx
	__int64 v27; // rax
	__m128 v28; // xmm1
	__m128 v29; // xmm6
	__m128 v30; // xmm0
	__int64 v31; // rax
	__m128* v32; // rax
	__m128 v33; // xmm1
	__m128 v34; // xmm0
	__int64* v35; // [rsp+20h] [rbp-E0h] BYREF
	__m128 v36; // [rsp+30h] [rbp-D0h]
	__m128 v37; // [rsp+40h] [rbp-C0h]
	__m128 v38; // [rsp+50h] [rbp-B0h]
	__m128 v39; // [rsp+60h] [rbp-A0h]
	__m128 v40; // [rsp+70h] [rbp-90h] BYREF
	__m128 v41; // [rsp+80h] [rbp-80h]
	__m128 v42; // [rsp+90h] [rbp-70h]
	__m128 v43; // [rsp+A0h] [rbp-60h]
	__int128 v44[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int128* v45; // [rsp+F0h] [rbp-10h] BYREF

	v6 = a1 + 192;
	if (!*((_DWORD*)a1 + 786))
		v6 = a1 + 205;
	result = *v6;
	if (result)
	{
		v8 = (float*)sub_14020A3A0(*(_DWORD*)(*(_QWORD*)(result + 24) + 16i64));
		v9 = v8;
		if (!v8 || v8[9] == 0.0 && v8[10] == 0.0 && v8[11] == 0.0)
			return 0i64;
		v10 = 20i64;
		if (*((_DWORD*)a1 + 786))
			v10 = 7i64;
		v11 = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD))(*a1 + 128))(a1, v10, a2);
		v12 = v11;
		if (!v11 || !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 848i64))(v11, 16i64))
			return 0i64;
		v13 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 880i64))(v12, 16i64);
		v14 = v13[3];
		v15 = *v13;
		v16 = v13[1];
		v17 = v13[2];
		v39 = v14;
		(*(void(__fastcall**)(__int64, __int64**))(*(_QWORD*)v12 + 952i64))(v12, &v35);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 976i64))(v12))
		{
			v18 = (__int64)v35;
			if (!v35)
			{
			LABEL_18:
				v25 = 1.0;
				v26 = a2 != 1;
				if (v18)
				{
					if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v18 + 848i64))(v18, (unsigned int)(v26 + 2)))
					{
						v27 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*v35 + 880))(
							v35,
							(unsigned int)(v26 + 2),
							0i64);
						v28 = *(__m128*)(v27 + 32);
						v29 = _mm_mul_ps(*(__m128*)v27, *(__m128*)v27);
						v41 = *(__m128*)(v27 + 16);
						v30 = *(__m128*)(v27 + 48);
						v42 = v28;
						v31 = *v35;
						v43 = v30;
						v32 = (__m128*)(*(__int64(__fastcall**)(__int64*))(v31 + 80))(v35);
						v33 = _mm_mul_ps(*v32, *v32);
						v25 = fsqrt(
							(float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
							+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0])
							/ fsqrt(
								(float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
								+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0]);
					}
					if (v35)
					{
						(*(void(__fastcall**)(__int64*))(*v35 + 8))(v35);
						v35 = 0i64;
					}
				}
				result = 1i64;
				a3->m128_f32[0] = v9[10] - v39.m128_f32[1];
				v34 = (__m128)v39.m128_u32[0];
				a3->m128_f32[1] = v9[11] - v39.m128_f32[2];
				a3->m128_f32[2] = v34.m128_f32[0] - v9[9];
				v34.m128_f32[0] = v25;
				*a3 = _mm_mul_ps(*a3, _mm_shuffle_ps(v34, v34, 0));
				return result;
			}
			v19 = *v35;
			v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 976i64))(v12);
			if ((*(unsigned int(__fastcall**)(__int64*, _QWORD))(v19 + 848))(v35, v20))
			{
				v21 = *v35;
				v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 976i64))(v12);
				v23 = (__int128*)(*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(v21 + 880))(v35, v22, 0i64);
				v44[0] = *v23;
				v44[1] = v23[1];
				v44[2] = v23[2];
				v24 = v23[3];
				v45 = v44;
				v44[3] = v24;
				sub_1401AFC20((__int64*)&v45, (double*)v40.m128_u64);
				v36 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v41),
							_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v40)),
						_mm_mul_ps(_mm_shuffle_ps(v15, v15, 170), v42)),
					_mm_mul_ps(_mm_shuffle_ps(v15, v15, 255), v43));
				v37 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v41),
							_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v40)),
						_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), v42)),
					_mm_mul_ps(_mm_shuffle_ps(v16, v16, 255), v43));
				v38 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v41),
							_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v40)),
						_mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), v42)),
					_mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v43));
				v39 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v14, v14, 85), v41),
							_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v40)),
						_mm_mul_ps(_mm_shuffle_ps(v14, v14, 170), v42)),
					_mm_mul_ps(_mm_shuffle_ps(v14, v14, 255), v43));
			}
		}
		v18 = (__int64)v35;
		goto LABEL_18;
	}
	return result;
}

