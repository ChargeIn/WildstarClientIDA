//----- (00000001406D4370) ----------------------------------------------------
__int64 __fastcall sub_1406D4370(_QWORD* a1, int* a2, int a3)
{
	_DWORD* v6; // rbp
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r15
	unsigned int v10; // r14d
	__int64 v11; // rdx
	unsigned int v12; // r10d
	unsigned int v13; // edx
	_QWORD* v14; // rcx
	unsigned __int16 v15; // bp
	unsigned __int16 v16; // bp
	__m128i v17; // xmm1
	__int64 v18; // rcx
	unsigned int v19; // eax
	const wchar_t* v20; // rdx
	__int64 v21; // r14
	unsigned __int64 v22; // rbx
	_QWORD* v23; // rax
	__int64 v24; // rbp
	__int64 v25; // rcx
	__int64 v26; // rcx
	unsigned int* v27; // rdi
	__int64 v28; // r8
	int v29; // r9d
	__int64 v31; // rcx
	_QWORD* v32; // rcx
	unsigned int v33; // ebp
	unsigned int v34; // r8d
	__m128i si128; // xmm1
	__int64 v36; // rcx
	__int64 v37; // rcx
	int v38; // eax
	__int64 v39; // r14
	_QWORD* v40; // rax
	int v41; // ecx
	__int64 v42; // rsi
	__m128 v43; // [rsp+30h] [rbp-58h] BYREF
	__int64 v44; // [rsp+40h] [rbp-48h] BYREF
	__int64 v45; // [rsp+48h] [rbp-40h]
	int v46; // [rsp+90h] [rbp+8h] BYREF
	int v47; // [rsp+94h] [rbp+Ch]

	if ((*((_BYTE*)a1 + 28) & 0x40) != 0 && *(_DWORD*)(a1[4] + 2876i64) == 1)
	{
		v6 = (_DWORD*)(*(__int64 (**)(void))(*a1 + 664i64))();
		if (!v6)
			return 0i64;
		v7 = a1[4];
		if (*(_QWORD*)(v7 + 3384))
		{
			if (*(_BYTE*)(v7 + 3376))
			{
				v8 = *(_QWORD*)(v7 + 3488);
				v9 = (unsigned __int8)v8;
				v47 = (unsigned __int8)v8;
				v10 = BYTE1(v8);
				v46 = BYTE1(v8);
				v11 = sub_1403AC780(qword_140C65898 + 160, &v46);
				if (a3 <= 0)
				{
					if (v10 != v6[3])
						return 0i64;
					if ((_DWORD)v9 != v6[4])
						return 0i64;
					v32 = *(_QWORD**)(v7 + 3440);
					if (*(_QWORD*)(v7 + 3448) - (_QWORD)v32 != 16i64
						|| *v32 != 0x70536D6574494444i64
						|| v32[1] != 0x6B6361745374696Ci64)
					{
						return 0i64;
					}
					v33 = *(unsigned __int16*)(v7 + 3490);
					v34 = 1;
					if (*(_DWORD*)(v11 + 120))
						v34 = *(_DWORD*)(v11 + 120);
					if (v34 <= v33)
						return 0i64;
					v16 = v33 + 1;
					si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
					v36 = qword_140C63678;
					*(_QWORD*)(v7 + 3488) = v9 | ((((unsigned __int64)v16 << 8) | (unsigned __int8)v46) << 8);
					v43 = _mm_mul_ps(
						_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
						(__m128)xmmword_140B7AB70);
					v19 = sub_140141F10(v36, &v43);
					v20 = L"%d";
				LABEL_18:
					v21 = a1[87];
					v22 = v19;
					v23 = sub_14018EFA0(&v44, (__int64)v20, v16);
					v24 = a1[4];
					v25 = *(_QWORD*)(v24 + 3472);
					if (v25)
					{
						(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v25 + 56i64))(v25, v23[1], -1i64);
						(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v24 + 3472) + 40i64))(
							*(_QWORD*)(v24 + 3472),
							*(_QWORD*)(v21 + 96));
					}
					else
					{
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
							qword_140C65680,
							*(_QWORD*)(v21 + 96),
							v23[1],
							-1i64,
							v24 + 3472);
					}
					v26 = qword_140C63678;
					v27 = (unsigned int*)(v24 + 3464);
					if ((int*)(v24 + 3464) != &v46)
					{
						sub_1401429A0(qword_140C63678, *v27);
						v26 = qword_140C63678;
						*v27 = v22;
						if (v22 < *(_QWORD*)(v26 + 48))
						{
							v28 = *(_QWORD*)(v26 + 40);
							v29 = *(_DWORD*)(32 * v22 + v28 + 16);
							if ((unsigned int)(v29 - 1) <= 0xFFFFFFFD)
								*(_DWORD*)(32 * v22 + v28 + 16) = v29 + 1;
						}
					}
					*(_DWORD*)(v24 + 3480) = 10;
					if (v45)
					{
						sub_14018B900(v45, 0);
						v26 = qword_140C63678;
					}
					sub_1401429A0(v26, v22);
					return 0i64;
				}
				v12 = v6[3];
				v13 = v6[4];
				if (__PAIR64__(v9, v10) != __PAIR64__(v13, v12)
					|| (v14 = *(_QWORD**)(v7 + 3440), *(_QWORD*)(v7 + 3448) - (_QWORD)v14 != 16i64)
					|| *v14 != 0x70536D6574494444i64
					|| v14[1] != 0x6B6361745374696Ci64)
				{
					if ((*(unsigned int(__fastcall**)(_QWORD*, int*))(*a1 + 352i64))(a1, a2) == 2)
					{
						(*(void(__fastcall**)(_QWORD*, int*))(*a1 + 344i64))(a1, a2);
						sub_1400E9B10((_QWORD*)a1[4]);
					}
					return 0i64;
				}
				if (v10 == v12
					&& (_DWORD)v9 == v13
					&& *(_QWORD*)(v7 + 3448) - (_QWORD)v14 == 16i64
					&& *v14 == 0x70536D6574494444i64
					&& v14[1] == 0x6B6361745374696Ci64)
				{
					v15 = *(_WORD*)(v7 + 3490);
					if (v15 <= 1u)
					{
						v31 = *(_QWORD*)(v7 + 3384);
						if (!v31 || !(*(unsigned __int8(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v31 + 376i64))(v31, 0i64))
							sub_1400E9A00((_QWORD*)v7);
						return 0i64;
					}
					v16 = v15 - 1;
					v17 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
					v18 = qword_140C63678;
					*(_QWORD*)(v7 + 3488) = v9 | ((((unsigned __int64)v16 << 8) | (unsigned __int8)v46) << 8);
					v43 = _mm_mul_ps(
						_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v17, (__m128i)0i64), (__m128i)0i64), 198)),
						(__m128)xmmword_140B7AB70);
					v19 = sub_140141F10(v18, &v43);
					v20 = L"%d";
					goto LABEL_18;
				}
				return 0i64;
			}
			if (*(_QWORD*)(v7 + 3384))
				return 0i64;
		}
		if (a3 < 0
			&& ((*(unsigned __int8(__fastcall**)(_QWORD*))(*a1 + 568i64))(a1)
				|| (*(unsigned __int8(__fastcall**)(_QWORD*))(*a1 + 576i64))(a1)
				|| (*(unsigned __int8(__fastcall**)(_QWORD*))(*a1 + 584i64))(a1)))
		{
			v38 = v6[2];
			if (v38 == 2 || (unsigned int)(v38 - 5) <= 1)
			{
				v46 = v6[3];
				v47 = v6[4];
				if (!sub_14053BC30(v37, (__int64)&v46))
				{
					v39 = sub_1403AC780(qword_140C65898 + 160, v6 + 3);
					v40 = sub_14018EFA0(&v44, (__int64)L"%d", 1i64);
					v41 = v6[3];
					if (v41 < 300)
						v42 = *((unsigned __int8*)v6 + 16) | ((unsigned __int64)(unsigned __int8)v41 << 8) | 0x10000;
					else
						v42 = -1i64;
					sub_1406D4D50(
						(__int64)a1,
						1,
						(int*)&qword_140B3C258,
						*(__m128i**)(*(_QWORD*)(v39 + 64) + 488i64),
						v42,
						v40[1]);
					if (v45)
						sub_14018B900(v45, 0);
					a1[262] = v6;
				}
			}
		}
		return 0i64;
	}
	return sub_1400D2660((__int64)a1, a2, a3);
}
// 1406D44EA: conditional instruction was optimized away because r14d.4<100u
// 1406D4722: conditional instruction was optimized away because r14d.4<100u
// 1406D4808: variable 'v37' is possibly undefined
// 140B3BA30: using guessed type wchar_t aD_69[3];
// 140B3BA38: using guessed type wchar_t aD_68[3];
// 140B3BA40: using guessed type wchar_t aD_67[3];
// 140B3C258: using guessed type __int64 qword_140B3C258;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;

