#include "../winhttp.h"

//----- (00000001400D1AF0) ----------------------------------------------------
void __fastcall sub_1400D1AF0(char* a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	bool v5; // r14
	__int64 v9; // rsi
	__int64 v10; // rcx
	char v11; // r8
	__m128 v12; // xmm6
	__m128* v13; // rax
	__m128 v14; // xmm7
	__m128 v15; // xmm6
	__m128* v16; // rax
	__m128 v17; // xmm7
	__m128 v18; // xmm7
	__m128 v19; // xmm6
	__m128* v20; // rax
	__int64 v21; // r9
	__m128 v22; // xmm6
	__m128* v23; // rax
	__m128 v24; // xmm7
	__m128 v25; // xmm7
	__int64 v26; // rax
	__int64 v27; // rsi
	unsigned int v28; // r15d
	WCHAR* v29; // rcx
	WCHAR v30; // ax
	bool v31; // zf
	char v32; // al
	char v33; // al
	__int64 v34; // rax
	int v35; // [rsp+48h] [rbp-C0h] BYREF
	int v36; // [rsp+4Ch] [rbp-BCh]
	__int64 v37; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v38; // [rsp+58h] [rbp-B0h]
	__m128 v39[4]; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v40[4]; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v41[4]; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v42[4]; // [rsp+128h] [rbp+20h] BYREF
	__m128 v43[4]; // [rsp+168h] [rbp+60h] BYREF
	WCHAR String[256]; // [rsp+1A8h] [rbp+A0h] BYREF

	v5 = 0;
	v38 = a4;
	v35 = 0;
	LODWORD(v37) = -1;
	if (a2 < 0x200)
		goto LABEL_35;
	v9 = *((_QWORD*)a1 + 4);
	if (sub_1400E6570((_DWORD*)v9, a2, a3, &v35, &v37))
	{
		if (*((float*)a1 + 162) <= 0.0)
			return;
		v10 = *((_QWORD*)a1 + 2);
		if (v10)
		{
			if (!sub_1400D1A60(v10))
				return;
		}
		v11 = a1[28];
		if ((v11 & 8) == 0 && v11 < 0 && v35 != 4)
			return;
		switch (v35)
		{
		case 1:
			if (v11 >= 0)
			{
				if (a1[656] < 0)
				{
					if (!*a5 || !sub_1400D1AC0((__int64)a1))
						goto LABEL_33;
					return;
				}
			}
			else
			{
				if (*a5)
					return;
				sub_1400C7F10((__int64)a1);
			}
			if (*a5)
				return;
			v18 = (__m128)xmmword_140B7A490;
			v19 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(
						_mm_cvtsi32_si128(**(_DWORD**)(*((_QWORD*)a1 + 4) + 2832i64)),
						_mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(
						_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 4) + 2832i64) + 4i64)),
						_mm_cvtsi32_si128(0))));
			v20 = sub_1400C96C0((__int64)a1, v42);
			v21 = 0i64;
			break;
		case 2:
			if (!*a5)
			{
				v22 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v9 + 2832)), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(
							_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v9 + 2832) + 4i64)),
							_mm_cvtsi32_si128(0))));
				v23 = sub_1400C96C0((__int64)a1, v40);
				v24 = _mm_add_ps(
					(__m128)xmmword_140B7A490,
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v23[1]),
							_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), *v23)),
						v23[3]));
				v35 = (int)v24.m128_f32[0];
				v36 = (int)_mm_shuffle_ps(v24, v24, 85).m128_f32[0];
				*a5 = (*(unsigned int(__fastcall**)(char*, _QWORD, int*))(*(_QWORD*)a1 + 328i64))(
					a1,
					(unsigned int)v37,
					&v35) == 0;
			}
			return;
		case 3:
			if (*a5)
				return;
			v18 = (__m128)xmmword_140B7A490;
			v19 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v9 + 2832)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(
						_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v9 + 2832) + 4i64)),
						_mm_cvtsi32_si128(0))));
			v20 = sub_1400C96C0((__int64)a1, v43);
			LOBYTE(v21) = 1;
			break;
		case 4:
			if (!*a5)
			{
				v15 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v9 + 2832)), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(
							_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v9 + 2832) + 4i64)),
							_mm_cvtsi32_si128(0))));
				v16 = sub_1400C96C0((__int64)a1, v39);
				v17 = _mm_add_ps(
					(__m128)xmmword_140B7A490,
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v16[1]),
							_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), *v16)),
						v16[3]));
				v35 = (int)v17.m128_f32[0];
				v36 = (int)_mm_shuffle_ps(v17, v17, 85).m128_f32[0];
				*a5 = (*(unsigned int(__fastcall**)(char*, int*))(*(_QWORD*)a1 + 312i64))(a1, &v35) == 0;
			}
			return;
		case 5:
			if (v11 < 0 || a1[656] >= 0)
			{
				if (!*a5)
				{
					v12 = _mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v9 + 2832)), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(
								_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v9 + 2832) + 4i64)),
								_mm_cvtsi32_si128(0))));
					v13 = sub_1400C96C0((__int64)a1, v41);
					v14 = _mm_add_ps(
						(__m128)xmmword_140B7A490,
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v13[1]),
								_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *v13)),
							v13[3]));
					v35 = (int)v14.m128_f32[0];
					v36 = (int)_mm_shuffle_ps(v14, v14, 85).m128_f32[0];
					*a5 = (*(unsigned int(__fastcall**)(char*, int*, _QWORD))(*(_QWORD*)a1 + 336i64))(
						a1,
						&v35,
						(unsigned int)SWORD1(a3)) == 0;
				}
				return;
			}
		LABEL_33:
			sub_1400CA0F0(a1);
			return;
		default:
			goto LABEL_34;
		}
		v25 = _mm_add_ps(
			v18,
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v20[1]),
					_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), *v20)),
				v20[3]));
		v35 = (int)v25.m128_f32[0];
		v36 = (int)_mm_shuffle_ps(v25, v25, 85).m128_f32[0];
		*a5 = (*(unsigned int(__fastcall**)(char*, _QWORD, int*, __int64))(*(_QWORD*)a1 + 320i64))(
			a1,
			(unsigned int)v37,
			&v35,
			v21) == 0;
		return;
	}
LABEL_34:
	LODWORD(a4) = v38;
LABEL_35:
	if ((a1[28] & 8) != 0)
	{
		v26 = *((_QWORD*)a1 + 4);
		if (v26)
		{
			if (*(char**)(v26 + 2880) == a1)
			{
				if (((a2 - 256) & 0xFFFFFFFB) == 0)
				{
					v27 = 256i64;
					v28 = WORD1(a4) & 0x1FF;
					if (v28 == 284)
						v28 = 28;
					if (!GetKeyNameTextW(a4, String, 256))
					{
						v29 = String;
						while (v27 != -2147483390)
						{
							v30 = *(WCHAR*)((char*)v29 + &unk_1409D2FAC - (_UNKNOWN*)String);
							if (!v30)
								break;
							*v29++ = v30;
							if (!--v27)
							{
								--v29;
								break;
							}
						}
						*v29 = 0;
					}
					if (*a5
						|| (v31 = sub_1400D4070(
							(__int64)a1,
							0xAu,
							a1,
							byte_1409D2EFC,
							String,
							v28,
							*(_DWORD*)(*((_QWORD*)a1 + 4) + 2876i64)) == 0,
							v32 = 0,
							!v31))
					{
						v32 = 1;
					}
					*a5 = v32;
				}
				if (a2 == 258)
				{
					if (a3 != 9)
					{
						if (a3 == 13)
						{
							if (*a5)
								return;
							v5 = sub_1400D4070((__int64)a1, 7u, a1, &unk_1409D0253) != 0;
							goto LABEL_70;
						}
						if (a3 != 27)
							return;
						if (*a5)
							goto LABEL_69;
						v33 = sub_1400D4070((__int64)a1, 9u, a1, &unk_1409D0257);
					LABEL_68:
						if (!v33)
						{
						LABEL_70:
							*a5 = v5;
							return;
						}
					LABEL_69:
						v5 = 1;
						goto LABEL_70;
					}
					if (!*((_QWORD*)a1 + 2) || !(*(unsigned __int8(__fastcall**)(char*))(*(_QWORD*)a1 + 56i64))(a1))
					{
						if (*a5)
							goto LABEL_69;
						v33 = sub_1400D4070((__int64)a1, 8u, a1, &unk_1409D0256);
						goto LABEL_68;
					}
					if (*a5)
						goto LABEL_69;
					v34 = sub_1400C83E0((__int64)a1, (*(_BYTE*)(*((_QWORD*)a1 + 4) + 2876i64) & 1) == 0);
					if (v34 && (char*)v34 != a1)
					{
						sub_1400E8C50(*(_QWORD**)(v34 + 32), (char*)v34);
						*a5 = 1;
					}
				}
			}
		}
	}
}
// 1400D1FB6: conditional instruction was optimized away because rsi.8!=0
// 1400D1EAF: variable 'v21' is possibly undefined
// 1409D2EFC: using guessed type _BYTE byte_1409D2EFC[96];
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 1400D1AF0: using guessed type __m128 var_330[4];
// 1400D1AF0: using guessed type __m128 var_2B0[4];
// 1400D1AF0: using guessed type __m128 var_370[4];
// 1400D1AF0: using guessed type __m128 var_2F0[4];
// 1400D1AF0: using guessed type __m128 anonymous_2[4];

