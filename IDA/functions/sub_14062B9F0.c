//----- (000000014062B9F0) ----------------------------------------------------
__m128* sub_14062B9F0(__m128** a1, __int64 a2, float a3, ...)
{
	__int64 v3; // r14
	__m128* v5; // rcx
	__m128* v6; // rdx
	__m128* v7; // r9
	__m128* v8; // r8
	__int32 v9; // r14d
	__m128* v10; // rax
	__int64 v11; // rsi
	__int64 v12; // rax
	int v13; // eax
	float v14; // xmm0_4
	__int64 v15; // rax
	__m128* v16; // rcx
	__int64 v17; // rcx
	__m128* v18; // rbx
	int v19; // r15d
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rsi
	__int64 v23; // rcx
	__m128* v24; // rcx
	float v25; // xmm3_4
	__int32 v26; // xmm4_4
	__int32 v27; // xmm5_4
	float v28; // xmm0_4
	float v29; // xmm2_4
	float v30; // xmm3_4
	__m128 v31; // xmm1
	__m128 v32; // xmm0
	__m128* v33; // rax
	__int64 v34; // rcx
	__m128 v35; // xmm0
	int* v36; // rax
	unsigned __int64 v37; // rsi
	int v38; // ecx
	int v39; // eax
	__int64 v40; // rax
	float v41; // xmm6_4
	__m128* v42; // rax
	__m128 v43; // xmm8
	int v44; // eax
	__int64 v45; // rax
	float v46; // xmm6_4
	__m128 v47; // xmm6
	unsigned __int64 v48; // rsi
	__m128 v49; // xmm2
	__m128 v50; // xmm1
	__m128* v51; // rax
	__m128* v52; // rax
	__m128* result; // rax
	__m128 v54; // [rsp+38h] [rbp-31h] BYREF
	__m128 v55; // [rsp+48h] [rbp-21h] BYREF
	__int64 v56; // [rsp+88h] [rbp+1Fh]
	float v57; // [rsp+C8h] [rbp+5Fh] BYREF
	__int64 v58; // [rsp+D0h] [rbp+67h] BYREF
	va_list va; // [rsp+D0h] [rbp+67h]
	__m128* v60; // [rsp+D8h] [rbp+6Fh]
	__int64 v61; // [rsp+E0h] [rbp+77h]
	__int64 v62; // [rsp+E8h] [rbp+7Fh]
	va_list va1; // [rsp+F0h] [rbp+87h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v58 = va_arg(va1, _QWORD);
	v60 = va_arg(va1, __m128*);
	v61 = va_arg(va1, _QWORD);
	v62 = va_arg(va1, _QWORD);
	v57 = a3;
	v5 = a1[2];
	v56 = v3;
	(*(void(__fastcall**)(__m128*, _QWORD, _QWORD))(v5->m128_u64[0] + 48))(v5, (unsigned int)dword_140C636A8, 0i64);
	v6 = a1[1];
	v7 = v6;
	if (v6)
	{
		v8 = a1[1];
	}
	else
	{
		v7 = *a1;
		v8 = *a1;
	}
	if (!v6)
		v6 = *a1;
	v9 = 0;
	(*(void(__fastcall**)(__m128*, __m128*, __m128*, __int64*, _DWORD))(a1[2]->m128_u64[0] + 80))(
		a1[2],
		v6 + 6,
		v8 + 10,
		&v7[31].m128_i64[1],
		0);
	v10 = a1[1];
	if (v10 && v10[42].m128_i32[2])
	{
		v11 = qword_140C65898;
		v12 = *(_QWORD*)(qword_140C65898 + 29080);
		if (!v12 || !*(_DWORD*)(v12 + 36) && !*(_DWORD*)(v12 + 28) && !*(_QWORD*)(v12 + 496))
		{
			v13 = *(_DWORD*)(qword_140C65898 + 29816);
			*(_DWORD*)(qword_140C65898 + 29696) = 3;
			*(_DWORD*)(v11 + 29812) = v13;
			v14 = (**(float(__fastcall***)(__int64))(v11 + 29704))(v11 + 29704);
			v15 = *(_QWORD*)(v11 + 29704);
			v57 = v14;
			(*(void(__fastcall**)(__int64, float*))(v15 + 8))(v11 + 29704, &v57);
			sub_1400F9C30(v11 + 29704, 0.0, 1000.0 / (float)*(int*)(v11 + 29812));
			v11 = qword_140C65898;
		}
		v16 = a1[1];
		if (v16)
		{
			(*(void(__fastcall**)(__m128*, __int64))v16->m128_u64[0])(v16, 1i64);
			v11 = qword_140C65898;
		}
		v58 = 0i64;
		a1[1] = 0i64;
		LOBYTE(v58) = 3;
		sub_1403F4900(v11, 0x720u, (__int64)va);
		v17 = qword_140C65898;
		*(_DWORD*)(qword_140C65898 + 31136) = 0;
	}
	else
	{
		v17 = qword_140C65898;
	}
	v18 = v60;
	v19 = v62;
	if (v60)
	{
		if ((_DWORD)v62)
		{
			v20 = sub_1403D90D0(v17, v60[12].m128_i32[0]);
			if (v20)
			{
				if (*(_DWORD*)(v20 + 128) == 9)
				{
					v21 = sub_14047B6D0((__int64)v18);
					v22 = v21;
					if (v21)
					{
						v23 = *(_QWORD*)(v21 + 5864);
						if (v23)
						{
							if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v23 + 1072i64))(v23)
								|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v22 + 5864) + 1088i64))(*(_QWORD*)(v22 + 5864)))
							{
								v18 = (__m128*)v22;
							}
						}
					}
				}
			}
		}
		v24 = *a1;
		v25 = (*a1)[3].m128_f32[1];
		v26 = (*a1)[3].m128_i32[2];
		v27 = (*a1)[3].m128_i32[3];
		if (*((_DWORD*)a1 + 10) == v18->m128_i32[2] || v18[300].m128_f32[0] == *((float*)a1 + 12))
		{
			v28 = v18[300].m128_f32[0];
			if (v25 != v28)
			{
				v29 = v25 - v28;
				v54 = v24[34];
				v30 = v25 - (float)(v25 - v28);
				v54.m128_f32[1] = v24[34].m128_f32[1] + v29;
				v31 = v54;
				v24[34] = v54;
				v32 = (*a1)[35];
				(*a1)[35] = v31;
				v33 = *a1;
				v55 = v32;
				v33[3].m128_f32[1] = v30;
				v33[3].m128_i32[2] = v26;
				v33[3].m128_i32[3] = v27;
			}
		}
		else
		{
			v24[34] = 0i64;
			(*a1)[35] = 0i64;
			(*a1)[33] = 0i64;
			(*a1)[36] = 0i64;
		}
		v34 = v61;
		*((_DWORD*)a1 + 12) = v18[300].m128_i32[0];
		v35 = _mm_sub_ps(v18[286], *(__m128*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v34 + 24i64))(v34) + 48));
		v36 = (int*)qword_140C63750;
		*((__m128*)a1 + 5) = v35;
		v37 = v18[366].m128_u64[1];
		v38 = *v36;
		v39 = dword_140C4E7E0;
		if (v38 < dword_140C4E7E0)
			v39 = v38;
		if (byte_140C4E7F0[v39]
			&& v37
			&& (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v37 + 1088i64))(v18[366].m128_u64[1]))
		{
			v40 = *(_QWORD*)v37;
			v41 = v18[300].m128_f32[1];
			v54 = *((__m128*)a1 + 5);
			v54.m128_f32[1] = _mm_shuffle_ps(v54, v54, 85).m128_f32[0]
				+ (float)((*(float(__fastcall**)(unsigned __int64))(v40 + 1096))(v37) * v41);
		}
		else
		{
			v42 = *a1;
			v54 = *((__m128*)a1 + 5);
			v54.m128_f32[1] = *((float*)a1 + 21) + v42[41].m128_f32[2];
		}
		v43 = v54;
		v44 = dword_140C4E7A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4E7A0)
			v44 = *(_DWORD*)qword_140C63750;
		if (byte_140C4E7B0[v44]
			&& v37
			&& (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v37 + 1072i64))(v37))
		{
			v45 = *(_QWORD*)v37;
			v46 = v18[300].m128_f32[1];
			v54 = *((__m128*)a1 + 5);
			v54.m128_f32[1] = _mm_shuffle_ps(v54, v54, 85).m128_f32[0]
				+ (float)((*(float(__fastcall**)(unsigned __int64))(v45 + 1080))(v37) * v46);
			v47 = v54;
		}
		else
		{
			v47 = v54;
		}
		*((_DWORD*)a1 + 13) = v18[306].m128_i32[2];
		if (v19 && !*((_DWORD*)a1 + 11))
		{
			v48 = v18[366].m128_u64[1];
			if (v48
				&& (*(unsigned int(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v48 + 848i64))(
					v18[366].m128_u64[1],
					39i64)
				&& (*(unsigned int(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v48 + 848i64))(v48, 96i64))
			{
				(*(void(__fastcall**)(unsigned __int64, __m128*, __int64))(*(_QWORD*)v48 + 856i64))(v48, &v54, 39i64);
				(*(void(__fastcall**)(unsigned __int64, __m128*, __int64))(*(_QWORD*)v48 + 856i64))(v48, &v55, 96i64);
				v49 = _mm_sub_ps(v54, v55);
				v50 = _mm_mul_ps(v49, v49);
				(*a1)[42].m128_f32[2] = fsqrt(
					(float)(v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0])
					+ _mm_shuffle_ps(v50, v50, 170).m128_f32[0]);
				v9 = v18->m128_i32[2];
				goto LABEL_56;
			}
			(*a1)[42].m128_i32[2] = (*a1)[41].m128_i32[3];
		}
		v9 = v18->m128_i32[2];
	}
	else
	{
		v51 = a1[1];
		if (!v51)
			v51 = *a1;
		v43 = v51[13];
		*((_DWORD*)a1 + 13) = 0;
		v47 = v43;
	}
LABEL_56:
	v52 = *a1;
	*((_DWORD*)a1 + 10) = v9;
	if (!v52[5].m128_i32[1])
		v52[4] = v43;
	result = *a1;
	if (!(*a1)[5].m128_i32[1])
		result[38] = v47;
	*((_DWORD*)a1 + 11) = v19;
	return result;
}
// 14062BA1C: variable 'v3' is possibly undefined
// 140C4E7A0: using guessed type int dword_140C4E7A0;
// 140C4E7B0: using guessed type _BYTE[32];
// 140C4E7E0: using guessed type int dword_140C4E7E0;
// 140C4E7F0: using guessed type _BYTE[32];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14062B9F0: using guessed type __m128 var_60;

