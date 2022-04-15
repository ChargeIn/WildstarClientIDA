//----- (00000001404CA7C0) ----------------------------------------------------
void __fastcall sub_1404CA7C0(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rcx
	__int64 v8; // rax
	__m128* v9; // r8
	__int64 v10; // r9
	__m128 v11; // xmm4
	__m128 v12; // xmm5
	__m128* v13; // rdx
	float v14; // xmm6_4
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__m128 v17; // xmm1
	__m128 v18; // xmm2
	__m128* v19; // r8
	__m128* v20; // rdx
	int v21; // eax
	__int64 v22; // r12
	float v23; // xmm0_4
	__m128 v24; // xmm3
	int v25; // eax
	__m128 v26; // xmm2
	__m128 v27; // xmm1
	__m128 v28; // xmm2
	__m128 v29; // xmm0
	__m128 v30; // xmm1
	unsigned __int64 v31; // r14
	unsigned __int64 v32; // r13
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rdi
	__int64* v36; // rax
	__int64 v37; // r8
	bool v38; // zf
	__int64 v39; // r15
	__int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // [rsp+38h] [rbp-69h]
	__m128 v48; // [rsp+48h] [rbp-59h]
	__m128 v49; // [rsp+58h] [rbp-49h] BYREF
	__m128 v50; // [rsp+68h] [rbp-39h] BYREF
	int v51; // [rsp+78h] [rbp-29h] BYREF
	__int64 v52; // [rsp+7Ch] [rbp-25h]
	__int64 v53; // [rsp+88h] [rbp-19h]
	__int64 v54; // [rsp+90h] [rbp-11h]
	int v55; // [rsp+98h] [rbp-9h]
	__int128 v56; // [rsp+A0h] [rbp-1h]
	__int64 v57; // [rsp+108h] [rbp+67h] BYREF
	__int64 v58; // [rsp+110h] [rbp+6Fh] BYREF
	__int64 v59; // [rsp+118h] [rbp+77h]

	v59 = a3;
	v57 = a1;
	v4 = *(_QWORD*)(a3 + 64);
	v47 = qword_140C659F8;
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a3 + 64) = 0i64;
	}
	*(_DWORD*)(a3 + 80) = 0;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v9 = *(__m128**)(qword_140C65898 + 29096);
	v10 = v8;
	v11 = (__m128)COERCE_UNSIGNED_INT((float)*a2);
	v12 = (__m128)COERCE_UNSIGNED_INT((float)a2[1]);
	if (!v9)
		v9 = *(__m128**)(qword_140C65898 + 29088);
	v13 = *(__m128**)(qword_140C65898 + 29096);
	if (!v13)
		v13 = *(__m128**)(qword_140C65898 + 29088);
	v14 = 1.0;
	v15 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0i64), _mm_unpacklo_ps(v12, (__m128)0i64));
	v48.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] - (float)*(int*)v8) / (float)*(int*)(v8 + 8)) * 2.0) - 1.0;
	v48.m128_f32[1] = 1.0
		- (float)((float)((float)(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] - (float)*(int*)(v8 + 4))
			/ (float)*(int*)(v8 + 12))
			* 2.0);
	v48.m128_f32[2] = (float)(_mm_shuffle_ps(v15, v15, 170).m128_f32[0] - *(float*)(v8 + 16))
		/ (float)(*(float*)(v8 + 20) - *(float*)(v8 + 16));
	v16 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v9[19]),
				_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v9[18])),
			_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v9[20])),
		v9[21]);
	v17 = _mm_shuffle_ps(v16, v16, 255);
	v18 = _mm_div_ps(v16, _mm_shuffle_ps(v17, v17, 0));
	v50 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v13[11]),
				_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v13[10])),
			_mm_mul_ps(_mm_shuffle_ps(v18, v18, 170), v13[12])),
		v13[13]);
	v19 = *(__m128**)(qword_140C65898 + 29096);
	if (!v19)
		v19 = *(__m128**)(qword_140C65898 + 29088);
	v20 = *(__m128**)(qword_140C65898 + 29096);
	if (!v20)
		v20 = *(__m128**)(qword_140C65898 + 29088);
	v21 = *(_DWORD*)v8;
	v22 = 0i64;
	v51 = 4105;
	v52 = 24578i64;
	v53 = 0i64;
	v54 = 0i64;
	v55 = 0;
	v23 = (float)v21;
	v24 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0x3F800000u), _mm_unpacklo_ps(v12, (__m128)0i64));
	v25 = *(_DWORD*)(v10 + 8);
	*(_QWORD*)&v56 = 0i64;
	v58 = 0x3F80000000000000i64;
	v48.m128_f32[0] = (float)((float)((float)(v24.m128_f32[0] - v23) / (float)v25) * 2.0) - 1.0;
	v48.m128_f32[1] = 1.0
		- (float)((float)((float)(_mm_shuffle_ps(v24, v24, 85).m128_f32[0] - (float)*(int*)(v10 + 4))
			/ (float)*(int*)(v10 + 12))
			* 2.0);
	v48.m128_f32[2] = (float)(_mm_shuffle_ps(v24, v24, 170).m128_f32[0] - *(float*)(v10 + 16))
		/ (float)(*(float*)(v10 + 20) - *(float*)(v10 + 16));
	v26 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v19[19]),
				_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v19[18])),
			_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v19[20])),
		v19[21]);
	v27 = _mm_shuffle_ps(v26, v26, 255);
	v28 = _mm_div_ps(v26, _mm_shuffle_ps(v27, v27, 0));
	v29 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v20[10]);
	v30 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v20[11]), v29),
			_mm_mul_ps(_mm_shuffle_ps(v28, v28, 170), v20[12])),
		v20[13]);
	v57 = 0i64;
	v49 = v30;
	if ((*(int(__fastcall**)(_QWORD, __m128*, __m128*, __int64*, __int64*, int*))(**(_QWORD**)(qword_140C65898 + 29256)
		+ 432i64))(
			*(_QWORD*)(qword_140C65898 + 29256),
			&v50,
			&v49,
			&v58,
			&v57,
			&v51) < 0)
		goto LABEL_46;
	v31 = 0i64;
	v32 = (*(__int64 (**)(void))(*(_QWORD*)v57 + 16i64))();
	if (!v32)
		goto LABEL_46;
	do
	{
		v33 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v57 + 24i64))(v57, v31);
		v29.m128_f32[0] = (*(float(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
		if (v29.m128_f32[0] < v14)
		{
			v34 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v33 + 24i64))(v33);
			v35 = v34;
			if (v34 != a4 || !a4)
			{
				v36 = (__int64*)sub_1404CB280(v47, v34);
				if (!v36)
				{
					if (v35)
					{
						v38 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v35 + 24i64))(v35) == 0;
						goto LABEL_23;
					}
				LABEL_24:
					v22 = v33;
					*(double*)v29.m128_u64 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
					v14 = v29.m128_f32[0];
					goto LABEL_25;
				}
				if (!a4 || v36[36] != a4)
				{
					v37 = *v36;
					v58 = 0i64;
					if ((*(int(__fastcall**)(__int64*, __int64*))(v37 + 192))(v36, &v58) >= 0)
					{
						v38 = *(_QWORD*)(v58 + 288) == a4;
					LABEL_23:
						if (v38)
							goto LABEL_25;
					}
					goto LABEL_24;
				}
			}
		}
	LABEL_25:
		++v31;
	} while (v31 < v32);
	v39 = v59;
	if (v22)
	{
		*(_DWORD*)(v39 + 72) = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 40i64))(v22) + 168);
		*(_DWORD*)(v39 + 76) = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 40i64))(v22) + 172);
		v40 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 24i64))(v22);
		v41 = v40;
		if (v40
			&& ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v40 + 24i64))(v40) == 1
				|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v41 + 24i64))(v41)))
		{
			if (*(_QWORD*)(v39 + 64) != v41)
			{
				(**(void(__fastcall***)(__int64))v41)(v41);
				v42 = *(_QWORD*)(v39 + 64);
				if (v42)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42);
				*(_QWORD*)(v39 + 64) = v41;
			}
			sub_1404CADC0(*(double*)v29.m128_u64, v22, &v50, &v49, *(_QWORD*)(v39 + 64), (unsigned int*)v39);
			goto LABEL_45;
		}
		v43 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 40i64))(v22);
		v44 = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v43 + 172));
		if (v44)
		{
			v41 = *(_QWORD*)(v44 + 280);
			if (v41)
				goto LABEL_40;
		}
		v45 = sub_1405B1510(&qword_140C7DFB0);
		if (v45)
			v41 = *(_QWORD*)(v45 + 280);
		if (v41)
		{
		LABEL_40:
			if (*(_QWORD*)(v39 + 64) != v41)
			{
				(**(void(__fastcall***)(__int64))v41)(v41);
				v46 = *(_QWORD*)(v39 + 64);
				if (v46)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
				*(_QWORD*)(v39 + 64) = v41;
			}
			sub_1404CADC0(*(double*)v29.m128_u64, v22, &v50, &v49, 0i64, (unsigned int*)v39);
		LABEL_45:
			*(_DWORD*)(v39 + 80) = 1;
		}
	}
LABEL_46:
	if (v57)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v57 + 8i64))(v57);
}
// 1404CAD21: conditional instruction was optimized away because rbx.8!=0
// 1404CA924: variable 'v48' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

