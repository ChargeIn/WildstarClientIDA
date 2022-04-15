//----- (0000000140178E80) ----------------------------------------------------
__int64 __fastcall sub_140178E80(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	bool v4; // zf
	__int64 v5; // rcx
	__int32* v6; // rax
	__m128 v7; // xmm0
	__int32 v8; // xmm1_4
	__m128* v9; // rcx
	__int32 v10; // xmm7_4
	_DWORD* v11; // rax
	int v12; // edi
	__int64 v13; // r14
	__int64 v14; // rbx
	__m128 v15; // xmm6
	__int32 v16; // eax
	__int64 v17; // rcx
	_QWORD* v18; // rcx
	__m128* v19; // r8
	int v20; // xmm0_4
	int v21; // r15d
	__int64 v22; // r14
	__int64 v23; // r12
	unsigned int v24; // ecx
	unsigned int v25; // edx
	unsigned int v26; // r8d
	unsigned int v27; // eax
	__int64 v28; // rax
	__m128i v29; // xmm1
	unsigned __int64 v30; // rax
	__int128* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	int v34; // ebx
	__int64 v35; // rdi
	__int64 v36; // rax
	__m128 v37; // [rsp+48h] [rbp-39h] BYREF
	__m128 v38; // [rsp+58h] [rbp-29h] BYREF
	int v39; // [rsp+68h] [rbp-19h]
	char v40; // [rsp+6Ch] [rbp-15h]
	int v41; // [rsp+70h] [rbp-11h]
	int v42; // [rsp+74h] [rbp-Dh]
	__m128 v43; // [rsp+78h] [rbp-9h] BYREF
	__m128 v44; // [rsp+88h] [rbp+7h]

	result = *(_QWORD*)(a1 + 1216);
	if (*(_QWORD*)(a1 + 1208) != result)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
		v3 = *(_QWORD*)(a1 + 608);
		if (v3)
		{
			v4 = v3 == -48;
			v5 = v3 + 48;
			v6 = (__int32*)(v5 + 8);
			if (v4)
				v6 = 0i64;
			v43.m128_i32[2] = *v6;
			v43.m128_u64[0] = (unsigned __int64)off_140B54E00;
			v44.m128_i32[0] = *(_DWORD*)(v5 + 16);
			v44.m128_i8[4] = *(_BYTE*)(v5 + 20);
			v7 = (__m128) * (unsigned int*)(v5 + 24);
			v44.m128_i32[2] = *(_DWORD*)(v5 + 24);
			v8 = *(_DWORD*)(v5 + 28);
			v9 = &v43;
			v44.m128_i32[3] = v8;
		}
		else
		{
			v7 = 0i64;
			v41 = 1065353216;
			v38.m128_i32[2] = dword_140C636A8;
			v39 = 1065353216;
			v42 = 0;
			v40 = 0;
			v9 = &v38;
			v38.m128_u64[0] = (unsigned __int64)off_140B54E00;
		}
		*(double*)v7.m128_u64 = (*(double(__fastcall**)(__m128*))v9->m128_u64[0])(v9);
		v10 = v7.m128_i32[0];
		v11 = sub_1400CB3D0(a1, &v43);
		v44 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11[2] - *v11), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11[3] - v11[1]), _mm_cvtsi32_si128(0))));
		v43 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(qword_140C77760), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(qword_140C77760)), _mm_cvtsi32_si128(0))));
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 96i64))(qword_140C65680, &v43);
		v12 = 0;
		if ((int)((__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3) > 0)
		{
			v13 = 0i64;
			v14 = 0i64;
			v15 = _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, v7));
			do
			{
				if (v12 <= (int)((__int64)(*(_QWORD*)(a1 + 1248) - *(_QWORD*)(a1 + 1240)) >> 4))
				{
					v17 = *(_QWORD*)(a1 + 1240);
					v37.m128_u64[0] = *(_QWORD*)(v14 + v17);
					v37.m128_i32[2] = *(_DWORD*)(v14 + v17 + 8);
					v16 = *(_DWORD*)(v14 + v17 + 12);
				}
				else
				{
					v37.m128_u64[0] = xmmword_140C784D0;
					v37.m128_i32[2] = DWORD2(xmmword_140C784D0);
					v16 = HIDWORD(xmmword_140C784D0);
				}
				v37.m128_i32[3] = v16;
				if (*(_QWORD*)(v13 + *(_QWORD*)(a1 + 1208)) == a1)
				{
					v18 = *(_QWORD**)(a1 + 1024);
					v38 = v15;
					if (v18)
					{
						v19 = &v38;
						*(float*)&v20 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036);
					LABEL_17:
						sub_140103CF0(v18, (unsigned int*)&v37, v19, 0, v20);
					}
				}
				else
				{
					v18 = *(_QWORD**)(a1 + 1072);
					v43 = v15;
					if (v18)
					{
						v19 = &v43;
						*(float*)&v20 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1080)) * *(float*)(a1 + 1084);
						goto LABEL_17;
					}
				}
				++v12;
				v14 += 16i64;
				v13 += 8i64;
			} while (v12 < (int)((__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3));
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v21 = 0;
		if ((int)((__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3) > 0)
		{
			v22 = 0i64;
			v23 = 0i64;
			do
			{
				if (v21 <= (int)((__int64)(*(_QWORD*)(a1 + 1248) - *(_QWORD*)(a1 + 1240)) >> 4))
				{
					v28 = *(_QWORD*)(a1 + 1240);
					v24 = *(_DWORD*)(a1 + 1152) + *(_DWORD*)(v22 + v28);
					v25 = *(_DWORD*)(a1 + 1156) + *(_DWORD*)(v22 + v28 + 4);
					v26 = *(_DWORD*)(v22 + v28 + 8) - *(_DWORD*)(a1 + 1160);
					v27 = *(_DWORD*)(v22 + v28 + 12) - *(_DWORD*)(a1 + 1164);
				}
				else
				{
					v24 = xmmword_140C784D0;
					v25 = DWORD1(xmmword_140C784D0);
					v26 = DWORD2(xmmword_140C784D0);
					v27 = HIDWORD(xmmword_140C784D0);
				}
				v29 = _mm_cvtsi32_si128(v27);
				v30 = *(unsigned int*)(a1 + 708);
				v43 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(0))));
				v44 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(v29, _mm_cvtsi32_si128(0))));
				if (v30 >= *(_QWORD*)(qword_140C63678 + 48))
					v31 = *(__int128**)(qword_140C63678 + 40);
				else
					v31 = (__int128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v30);
				v32 = *(_QWORD*)(a1 + 1208);
				v37 = (__m128) * v31;
				if (*(_QWORD*)(v23 + v32) != a1)
					v37 = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B650), (__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
				v33 = *(_QWORD*)(a1 + 696);
				v34 = *(_DWORD*)(a1 + 704);
				v37.m128_i32[3] = v10;
				v35 = *(_QWORD*)(v33 + 96);
				v36 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v23 + v32) + 112i64))(*(_QWORD*)(v23 + v32));
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __m128*, int, __m128*, int))(*(_QWORD*)qword_140C65680
					+ 264i64))(
						qword_140C65680,
						v35,
						v36,
						-1i64,
						&v43,
						v34,
						&v37,
						1);
				++v21;
				v22 += 16i64;
				v23 += 8i64;
			} while (v21 < (int)((__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3));
		}
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return result;
}
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B650: using guessed type __int128 xmmword_140B7B650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C784D0: using guessed type __int128 xmmword_140C784D0;
// 140178E80: using guessed type __m128 var_50;

