#include "../winhttp.h"

//----- (00000001402F6820) ----------------------------------------------------
int* __fastcall sub_1402F6820(__m128* a1, void(__fastcall*** a2)(_QWORD, _QWORD*))
{
	unsigned __int64 v2; // rax
	unsigned int v4; // ebx
	int* result; // rax
	int v7; // eax
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // r14
	__int64 v11; // rbp
	__int64 v12; // r13
	__int64 v13; // r15
	unsigned int* v14; // rsi
	__m128* v15; // rbx
	__int64 v16; // r8
	void(__fastcall * *v17)(_QWORD, _QWORD*); // rax
	__m128 v18; // xmm0
	__int64 v19; // rsi
	unsigned int i; // r15d
	unsigned int j; // ebx
	unsigned __int64 v22; // rcx
	unsigned __int16 v23; // cx
	unsigned __int64 v24; // rax
	__int64 v25; // rax
	_OWORD* v26; // rcx
	unsigned int v27; // [rsp+20h] [rbp-58h] BYREF
	int v28[2]; // [rsp+28h] [rbp-50h]
	int v29; // [rsp+30h] [rbp-48h] BYREF
	char v30[12]; // [rsp+34h] [rbp-44h] BYREF
	unsigned int v31; // [rsp+80h] [rbp+8h] BYREF
	int v32; // [rsp+90h] [rbp+18h]
	char v33; // [rsp+98h] [rbp+20h] BYREF

	v2 = a1->m128_u64[0];
	v4 = 0;
	v29 = 0;
	if (!(*(unsigned int(__fastcall**)(__m128*, int*, _QWORD))(v2 + 16))(a1, &v29, 0i64))
	{
		result = sub_14018B280(40i64, 0);
		if (result)
			return (int*)sub_1402EFCA0(result, (__int64)a1, a2);
		return result;
	}
	if (a2)
	{
		v28[0] = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, _QWORD, int*))(*a2)[4])(
			a2,
			8i64,
			0i64,
			&v29);
		v7 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, _QWORD, char*))(*a2)[4])(
			a2,
			9i64,
			0i64,
			v30);
		v8 = 0i64;
		v28[1] = v7;
		v9 = a1[4].m128_u64[0];
		v32 = 0;
		if (!*(_DWORD*)(v9 + 496))
			goto LABEL_31;
		while (1)
		{
			v10 = *(_QWORD*)(a1[4].m128_u64[0] + 504);
			v11 = 48 * v8;
			v12 = a1[69].m128_u64[0] + 96 * v8;
			v13 = 2i64;
			v14 = (unsigned int*)(48 * v8 + v10 + 24);
			v15 = (__m128*)(v12 + 16);
			do
			{
				v16 = *v14;
				v17 = *a2;
				if ((unsigned int)(*(_DWORD*)(v10 + v11 + 20) - 3) <= 1)
				{
					if (((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, __int64, unsigned int*))v17[4])(
						a2,
						4i64,
						v16,
						&v31)
						|| ((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, _QWORD, unsigned int*))(*a2)[4])(
							a2,
							3i64,
							*v14,
							&v31))
					{
						*v15 = _mm_mul_ps(
							_mm_mul_ps(
								_mm_cvtepi32_ps(
									_mm_shuffle_epi32(
										_mm_unpacklo_epi16(
											_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v31), 0), (__m128i)0i64),
											(__m128i)0i64),
										198)),
								(__m128)xmmword_140B7AB70),
							(__m128)xmmword_140B7B2F0);
					}
					else
					{
						*v15 = (__m128)xmmword_140B7B240;
					}
					v18 = 0i64;
				}
				else
				{
					if (((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, __int64, unsigned int*))v17[4])(
						a2,
						3i64,
						v16,
						&v31))
					{
						*v15 = _mm_mul_ps(
							_mm_mul_ps(
								_mm_cvtepi32_ps(
									_mm_shuffle_epi32(
										_mm_unpacklo_epi16(
											_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v31), 0), (__m128i)0i64),
											(__m128i)0i64),
										198)),
								(__m128)xmmword_140B7AB70),
							(__m128)xmmword_140B7B2F0);
					}
					else
					{
						*v15 = (__m128)xmmword_140B7B240;
					}
					v18 = 0i64;
					if (((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, _QWORD, unsigned int*))(*a2)[4])(
						a2,
						4i64,
						*v14,
						&v31))
					{
						v15[2] = _mm_mul_ps(
							_mm_mul_ps(
								_mm_cvtepi32_ps(
									_mm_shuffle_epi32(
										_mm_unpacklo_epi16(
											_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v31), 0), (__m128i)0i64),
											(__m128i)0i64),
										198)),
								(__m128)xmmword_140B7AB70),
							(__m128)xmmword_140B7B2F0);
						v15[2].m128_i32[3] = 1065353216;
						goto LABEL_19;
					}
				}
				v15[2] = v18;
			LABEL_19:
				++v14;
				++v15;
				--v13;
			} while (v13);
			v19 = 0i64;
			for (i = 8; i <= 9; ++i)
			{
				if (v28[v19])
				{
					*(_BYTE*)(v12 + v19 + 88) = v30[4 * v19 - 4];
				}
				else
				{
					for (j = 0; j < *(_DWORD*)(v10 + v11 + 32); ++j)
					{
						v22 = a1[4].m128_u64[0];
						if ((unsigned int)*(unsigned __int16*)(*(_QWORD*)(v10 + v11 + 40) + 296i64 * j) < *(_DWORD*)(v22 + 448))
						{
							v23 = *(_WORD*)(*(_QWORD*)(v22 + 456)
								+ 32i64 * *(unsigned __int16*)(*(_QWORD*)(v10 + v11 + 40) + 296i64 * j));
							if (v23)
							{
								if (((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), _QWORD, _QWORD, char*))(*a2)[4])(
									a2,
									i,
									v23,
									&v33))
								{
									*(_BYTE*)(v19 + v12 + 88) = v33;
								}
							}
						}
					}
				}
				++v19;
			}
			v24 = a1[4].m128_u64[0];
			v8 = (unsigned int)(v32 + 1);
			v32 = v8;
			if ((unsigned int)v8 >= *(_DWORD*)(v24 + 496))
			{
			LABEL_31:
				result = (int*)((__int64(__fastcall*)(void(__fastcall***)(_QWORD, _QWORD*), __int64, __int64, unsigned int*))(*a2)[4])(
					a2,
					7i64,
					0xFFFFFFFFi64,
					&v27);
				if ((_DWORD)result)
				{
					a1[16] = _mm_mul_ps(
						_mm_cvtepi32_ps(
							_mm_shuffle_epi32(
								_mm_unpacklo_epi16(
									_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(v27), 0), (__m128i)0i64),
									(__m128i)0i64),
								198)),
						(__m128)xmmword_140B7AB70);
					a1[16].m128_i32[3] = 1065353216;
				}
				else
				{
					a1[16] = 0i64;
				}
				return result;
			}
		}
	}
	result = (int*)a1[4].m128_u64[0];
	if (result[124])
	{
		do
		{
			v25 = 2i64;
			v26 = (_OWORD*)(a1[69].m128_u64[0] + 96i64 * v4 + 48);
			do
			{
				*(v26 - 2) = xmmword_140B7B240;
				*v26++ = 0i64;
				--v25;
			} while (v25);
			result = (int*)a1[4].m128_u64[0];
			++v4;
		} while (v4 < result[124]);
	}
	return result;
}
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 1402F6820: using guessed type char var_44[12];

