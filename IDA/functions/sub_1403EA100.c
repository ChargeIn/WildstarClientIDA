//----- (00000001403EA100) ----------------------------------------------------
__int64 __fastcall sub_1403EA100(__int64 a1)
{
	__m128 v1; // xmm0
	__int64 result; // rax
	__int64 v4; // rbx
	int v5; // eax
	float(__fastcall * *v6)(_QWORD); // rax
	float v7; // xmm0_4
	__int64 v8; // rax
	__int64 v9; // rax
	signed int v10; // r14d
	signed int v11; // r15d
	double(__fastcall * *v12)(__int64); // rax
	_QWORD* v13; // rcx
	int v14; // ebx
	int v15; // esi
	float v16; // xmm1_4
	float v17; // xmm7_4
	float v18; // xmm1_4
	__m128 v19; // xmm0
	__m128 v20; // xmm9
	__int64 v21; // rcx
	_QWORD* v22; // rcx
	__m128 v23; // xmm6
	_QWORD* v24; // rcx
	__m128 v25; // xmm6
	int v26; // eax
	__int64 v27; // rdx
	__int16* v28; // rbx
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rdx
	int v32; // ecx
	int v33; // ecx
	int v34; // eax
	__int64 v35; // rdx
	__int64 v36; // [rsp+50h] [rbp-B0h] BYREF
	int v37; // [rsp+58h] [rbp-A8h]
	int v38; // [rsp+5Ch] [rbp-A4h]
	__m128 v39; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v40; // [rsp+70h] [rbp-90h] BYREF
	__m128 v41; // [rsp+80h] [rbp-80h]
	__int128 v42; // [rsp+90h] [rbp-70h] BYREF
	__int128 v43; // [rsp+A0h] [rbp-60h] BYREF
	int v44; // [rsp+120h] [rbp+20h] BYREF

	result = *(unsigned int*)(a1 + 29696);
	if ((_DWORD)result || *(_DWORD*)(a1 + 29768))
	{
		if ((_DWORD)result == 1)
		{
			v4 = a1 + 29704;
			if ((**(float(__fastcall***)(__int64))v4)(v4) == 1.0)
			{
				*(_DWORD*)(a1 + 29696) = 2;
				if (*(float*)(v4 + 24) != 1.0
					|| (v1 = _mm_cvtpd_ps(_mm_and_pd((__m128d)0i64, (__m128d)xmmword_140B7B510)),
						v1.m128_f32[0] != *(float*)(v4 + 28)))
				{
					v5 = dword_140C636A8;
					*(_QWORD*)(v4 + 24) = 1065353216i64;
					*(_DWORD*)(v4 + 16) = 1065353216;
					*(_DWORD*)(v4 + 8) = v5;
				}
				v6 = *(float(__fastcall***)(_QWORD))v4;
				v44 = 1065353216;
				((void(__fastcall*)(__int64, int*))v6[1])(v4, &v44);
				*(_DWORD*)(a1 + 29780) = dword_140C636A8 + *(_DWORD*)(a1 + 29808);
			}
		}
		else if ((_DWORD)result == 2)
		{
			if (*(_DWORD*)(a1 + 29808) != 0x7FFFFFFF && dword_140C636A8 - *(_DWORD*)(a1 + 29780) >= 0)
			{
				*(_DWORD*)(a1 + 29696) = 3;
				v7 = (**(float(__fastcall***)(__int64))(a1 + 29704))(a1 + 29704);
				v8 = *(_QWORD*)(a1 + 29704);
				v44 = LODWORD(v7);
				(*(void(__fastcall**)(__int64, int*))(v8 + 8))(a1 + 29704, &v44);
				v1 = (__m128)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 29812));
				sub_1400F9C30(a1 + 29704, 0.0, 1000.0 / v1.m128_f32[0]);
			}
		}
		else if ((_DWORD)result == 3 && (**(float(__fastcall***)(__int64))(a1 + 29704))(a1 + 29704) == 0.0)
		{
			sub_14053B770(a1, 0);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 23i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 128i64))(qword_140C65680);
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v10 = *(_DWORD*)(v9 + 8);
		v11 = *(_DWORD*)(v9 + 12);
		if (*(_DWORD*)(a1 + 29696))
		{
			v36 = 0i64;
			v37 = v10;
			v12 = *(double(__fastcall***)(__int64))(a1 + 29704);
			v38 = v11;
			*(double*)v1.m128_u64 = (*v12)(a1 + 29704);
			v39 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 29792), (__m128) * (unsigned int*)(a1 + 29800)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 29796), v1));
			v13 = *(_QWORD**)(qword_140C63650 + 1848);
			if (v13)
				sub_140103CF0(
					v13,
					(unsigned int*)&v36,
					&v39,
					0,
					COERCE_INT(
						(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
						* *(float*)(qword_140C63650 + 1860)));
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 23i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 128i64))(qword_140C65680);
		if (!*(_DWORD*)(a1 + 29768))
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		*(_DWORD*)(a1 + 29772) = 1065353216;
		v14 = 0;
		v15 = 0;
		v16 = (float)v10;
		v17 = (float)v11;
		if ((float)((float)v10 / (float)v11) <= 1.7777778)
			v14 = (v11 - (int)(float)(v16 * 0.5625)) / 2;
		else
			v15 = (v10 - (int)(float)(v17 * 1.7777778)) / 2;
		if (v15 <= v14)
		{
			v19 = (__m128)COERCE_UNSIGNED_INT((float)v14);
			if (v19.m128_f32[0] < (float)(v17 * 0.079999998))
				v14 = (int)(float)(v17 * 0.079999998);
		}
		else
		{
			v18 = v16 * 0.050000001;
			v19 = (__m128)COERCE_UNSIGNED_INT((float)v15);
			if (v19.m128_f32[0] < v18)
				v15 = (int)v18;
		}
		if (!*(_DWORD*)(a1 + 29696))
		{
			v14 = (int)(float)((**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736) * (float)v14);
			if (!*(_DWORD*)(a1 + 29696))
				v15 = (int)(float)((**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736) * (float)v15);
		}
		if (!*(_DWORD*)(a1 + 29776) && (**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736) == 0.0)
			*(_DWORD*)(a1 + 29768) = 0;
		v20 = (__m128)0x3F800000u;
		if (*(_DWORD*)(a1 + 29696) && (**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736) < 1.0)
		{
			*(double*)v19.m128_u64 = (**(double(__fastcall***)(__int64))(a1 + 29704))(a1 + 29704);
			v20 = v19;
		}
		if ((v21 = *(unsigned int*)(a1 + 29696), (((_DWORD)v21 - 1) & 0xFFFFFFFD) != 0)
			|| (_DWORD)v21 == 1 && (**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736) >= 1.0
			|| *(_DWORD*)(a1 + 29696) == 3 && (**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736) >= 1.0)
		{
			if (v14 > 0)
			{
				v36 = 0i64;
				v37 = v10;
				v38 = v14;
				v22 = *(_QWORD**)(qword_140C63650 + 1848);
				v23 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)0i64, v20));
				v39 = v23;
				if (v22)
					sub_140103CF0(
						v22,
						(unsigned int*)&v36,
						&v39,
						0,
						COERCE_INT(
							(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
							* *(float*)(qword_140C63650 + 1860)));
				v38 = v11;
				v40 = v23;
				HIDWORD(v36) = v11 - v14;
				v21 = *(_QWORD*)(qword_140C63650 + 1848);
				if (v21)
					sub_140103CF0(
						(_QWORD*)v21,
						(unsigned int*)&v36,
						&v40,
						0,
						COERCE_INT(
							(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
							* *(float*)(qword_140C63650 + 1860)));
				*(float*)(a1 + 29772) = v17 / (float)(v17 - (float)((float)v14 * 2.0));
			}
			if (v15 > 0)
			{
				v36 = 0i64;
				v37 = v15;
				v38 = v11;
				v24 = *(_QWORD**)(qword_140C63650 + 1848);
				v25 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)0i64, v20));
				v42 = (__int128)v25;
				if (v24)
					sub_140103CF0(
						v24,
						(unsigned int*)&v36,
						(__m128*) & v42,
						0,
						COERCE_INT(
							(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
							* *(float*)(qword_140C63650 + 1860)));
				v37 = v10;
				v43 = (__int128)v25;
				LODWORD(v36) = v10 - v15;
				v21 = *(_QWORD*)(qword_140C63650 + 1848);
				if (v21)
					sub_140103CF0(
						(_QWORD*)v21,
						(unsigned int*)&v36,
						(__m128*) & v43,
						0,
						COERCE_INT(
							(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
							* *(float*)(qword_140C63650 + 1860)));
			}
		}
		else
		{
			v43 = xmmword_140C777D0;
		}
		if (*(_DWORD*)(a1 + 29776))
		{
			v21 = *(_QWORD*)(a1 + 29832);
			if (v21)
			{
				LODWORD(v43) = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v21 + 216i64))(v21, &v43))
				{
					v21 = *(unsigned int*)qword_140C63750;
					v26 = dword_140C45F00;
					if ((int)v21 < dword_140C45F00)
						v26 = *(_DWORD*)qword_140C63750;
					if (*((_BYTE*)&dword_140C45F10 + v26) || *(_DWORD*)(a1 + 29848))
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 128i64))(qword_140C65680);
						v27 = *(_QWORD*)(a1 + 29832);
						v40 = 0i64;
						v43 = xmmword_140C777D0;
						v41 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0))));
						v42 = xmmword_140B7B240;
						v41.m128_f32[1] = _mm_shuffle_ps(v41, v41, 85).m128_f32[0] + -10.0;
						(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
							qword_140C65680,
							v27,
							0i64,
							-1i64,
							&v40,
							25,
							&v42,
							&v43,
							1);
					}
				}
			}
		}
		if (*(_QWORD*)(a1 + 29504) && !*(_QWORD*)(a1 + 29840))
		{
			v28 = sub_14034BDD0(v21, 753788);
			v29 = sub_1400E58C0(*(_QWORD*)(a1 + 29504), (int*)L"Subtitle");
			(*(void(__fastcall**)(__int64, _QWORD, __int16*, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				*(_QWORD*)(v29 + 96),
				v28,
				-1i64,
				a1 + 29840);
		}
		if (!*(_DWORD*)(a1 + 29776))
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		v30 = *(_QWORD*)(a1 + 29840);
		if (!v30)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		LODWORD(v43) = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v30 + 216i64))(v30, &v43))
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		v31 = *(_QWORD*)(a1 + 29080);
		if (!*(_DWORD*)(v31 + 24))
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		v32 = *(_DWORD*)(v31 + 12);
		if (!v32)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		v33 = v32 - 1;
		if (v33)
		{
			if (v33 == 1)
				goto LABEL_74;
		}
		else if (*(_QWORD*)(**(_QWORD**)(a1 + 29080) + 8i64))
		{
		LABEL_74:
			v34 = dword_140C45D90;
			if (*(_DWORD*)qword_140C63750 < dword_140C45D90)
				v34 = *(_DWORD*)qword_140C63750;
			if (byte_140C45DA0[v34])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 128i64))(qword_140C65680);
				v35 = *(_QWORD*)(a1 + 29840);
				v43 = xmmword_140C777D0;
				v40 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140B7B5F0);
				v41 = _mm_add_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B5F0);
				v42 = xmmword_140B7B240;
				(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
					qword_140C65680,
					v35,
					0i64,
					-1i64,
					&v40,
					18,
					&v42,
					&v43,
					1);
			}
		}
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return result;
}
// 1403EA31A: variable 'v1' is possibly undefined
// 1403EA83E: variable 'v21' is possibly undefined
// 140AF7EB8: using guessed type wchar_t aSubtitle[9];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140B7B5F0: using guessed type __int128 xmmword_140B7B5F0;
// 140C45D90: using guessed type int dword_140C45D90;
// 140C45DA0: using guessed type _BYTE[32];
// 140C45F00: using guessed type int dword_140C45F00;
// 140C45F10: using guessed type int dword_140C45F10;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

