//----- (00000001406C6DB0) ----------------------------------------------------
void __fastcall sub_1406C6DB0(__int64 a1)
{
	__int64* v2; // rax
	__int64* v3; // rsi
	__int64 v4; // rax
	signed int v5; // eax
	__int64 v6; // rax
	__int64 v7; // r15
	int* v8; // r12
	int* v9; // r14
	__int64 v10; // r15
	int* v11; // rbx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rax
	__m128* v15; // rax
	int v16; // edx
	int v17; // r8d
	__int64 v18; // rax
	float v19; // xmm6_4
	__int64 v20; // rax
	unsigned __int64 v21; // r8
	__m128* v22; // r8
	_QWORD* v23; // rcx
	__int64 v24; // rdx
	unsigned __int64 v25; // r8
	__m128* v26; // r8
	_QWORD* v27; // rcx
	_QWORD* v28; // rcx
	__int128 v29; // [rsp+40h] [rbp-79h] BYREF
	int* v30; // [rsp+50h] [rbp-69h]
	__int64 v31; // [rsp+58h] [rbp-61h]
	__m128 v32; // [rsp+60h] [rbp-59h] BYREF
	__m128 v33; // [rsp+70h] [rbp-49h]
	__m128 v34; // [rsp+80h] [rbp-39h] BYREF
	__m128 v35; // [rsp+90h] [rbp-29h]
	__m128 v36; // [rsp+A0h] [rbp-19h] BYREF
	__m128 v37; // [rsp+B0h] [rbp-9h]
	__m128 v38[2]; // [rsp+C0h] [rbp+7h] BYREF

	v2 = (__int64*)sub_1406C5440(a1);
	v3 = v2;
	if (v2)
	{
		(*(void(__fastcall**)(__int64*))(*v2 + 120))(v2);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v4 = *(_QWORD*)(a1 + 664);
		if ((v4 & 4) != 0 || (v4 & 0x2000) != 0)
		{
			v5 = sub_1406C69B0(a1);
			if (v5 >= 0)
				sub_1406C5F80(a1, v5);
		}
		v6 = (*(__int64(__fastcall**)(__int64*))(*v3 + 120))(v3);
		v7 = *(_QWORD*)(v6 + 112);
		v8 = *(int**)(v6 + 104);
		v9 = 0i64;
		*((_QWORD*)&v29 + 1) = 0i64;
		v10 = (v7 - (__int64)v8) >> 1;
		v31 = 0i64;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v9 = sub_14018B280(2 * (v10 + 1), 0);
			*((_QWORD*)&v29 + 1) = v9;
			v31 = (__int64)v9 + 2 * v10 + 2;
		}
		sub_1407DB590(v9, v8, 2 * v10);
		v11 = (int*)((char*)v9 + 2 * v10);
		v30 = v11;
		if (v11)
			*(_WORD*)v11 = 0;
		if (v9 != v11)
			goto LABEL_14;
		v12 = (*(__int64(__fastcall**)(__int64*))(*v3 + 120))(v3) + 64;
		if ((__int128*)v12 != &v29)
		{
			sub_14001C480((__int64)&v29, *(int**)(v12 + 8), *(int**)(v12 + 16));
			v11 = v30;
			v9 = (int*)*((_QWORD*)&v29 + 1);
		}
		if (v9 != v11)
		{
		LABEL_14:
			sub_1406C5D70(a1, &v34);
			v13 = *(_QWORD*)(a1 + 3072);
			v35 = _mm_sub_ps(
				v35,
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 3096)), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 3100)), _mm_cvtsi32_si128(0)))));
			v29 = xmmword_140B7B240;
			(*(void(__fastcall**)(__int64, _QWORD, int*, __int64, __m128*, int, __int128*, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					*(_QWORD*)(v13 + 96),
					v9,
					-1i64,
					&v34,
					2,
					&v29,
					1);
		}
		v14 = (*(__int64(__fastcall**)(__int64*))(*v3 + 120))(v3);
		if (*(_QWORD*)(v14 + 104) != *(_QWORD*)(v14 + 112)
			&& *(float*)((*(__int64(__fastcall**)(__int64*))(*v3 + 120))(v3) + 140) > 0.0)
		{
			v15 = sub_1406C5D70(a1, v38);
			v16 = (int)v15[1].m128_f32[0];
			v17 = (int)v15[1].m128_f32[1];
			v32.m128_i32[0] = (int)v15->m128_f32[0];
			v32.m128_u64[1] = __PAIR64__(v17, v16);
			v32.m128_i32[1] = (int)v15->m128_f32[1];
			sub_14014E8D0(a1 + 2960, &v29, (unsigned int*)&v32);
			v18 = *v3;
			v37 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(DWORD2(v29)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v29)), _mm_cvtsi32_si128(0))));
			v35 = v37;
			v36 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(DWORD1(v29)), _mm_cvtsi32_si128(0))));
			v34 = v36;
			v19 = _mm_shuffle_ps(v37, v37, 85).m128_f32[0] - _mm_shuffle_ps(v36, v36, 85).m128_f32[0];
			v20 = (*(__int64(__fastcall**)(__int64*))(v18 + 120))(v3);
			v34.m128_f32[1] = v35.m128_f32[1] - (float)((float)(1.0 - *(float*)(v20 + 140)) * v19);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			v21 = *(unsigned int*)(a1 + 2952);
			if (v21 >= *(_QWORD*)(qword_140C63678 + 48))
				v22 = *(__m128**)(qword_140C63678 + 40);
			else
				v22 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v21);
			v23 = *(_QWORD**)(a1 + 2184);
			if (v23)
				sub_140103E60(
					v23,
					&v36,
					v22,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2192)) * *(float*)(a1 + 2196)));
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 64i64))(
				qword_140C65680,
				2i64,
				v22);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, &v34);
			v25 = *(unsigned int*)(a1 + 2956);
			if (v25 >= *(_QWORD*)(qword_140C63678 + 48))
				v26 = *(__m128**)(qword_140C63678 + 40);
			else
				v26 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v25);
			v27 = *(_QWORD**)(a1 + 2232);
			if (v27)
				sub_140103E60(
					v27,
					&v36,
					v26,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2240)) * *(float*)(a1 + 2244)));
			(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)qword_140C65680 + 72i64))(
				qword_140C65680,
				v24,
				v26);
		}
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*v3 + 120))(v3) + 176))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
			sub_1406C5D70(a1, &v32);
			v32 = _mm_sub_ps(v32, (__m128)xmmword_140B7B380);
			v33 = _mm_add_ps(v33, (__m128)xmmword_140B7B380);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v32);
			v28 = *(_QWORD**)(a1 + 2424);
			v29 = xmmword_140B7B240;
			if (v28)
				sub_140103E60(
					v28,
					&v32,
					(__m128*) & v29,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2432)) * *(float*)(a1 + 2436)));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		}
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
}
// 1406C712C: variable 'v22' is possibly undefined
// 1406C71A2: variable 'v24' is possibly undefined
// 1406C71A2: variable 'v26' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B380: using guessed type __int128 xmmword_140B7B380;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 1406C6DB0: using guessed type __m128 var_50[2];

