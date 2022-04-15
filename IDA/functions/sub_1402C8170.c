#include "../winhttp.h"

//----- (00000001402C8170) ----------------------------------------------------
_DWORD* __fastcall sub_1402C8170(__int64 a1)
{
	int* v2; // rdx
	__int64 v3; // rcx
	__m128i v4; // xmm1
	__m128i v5; // xmm1
	int v6; // eax
	__m128i v7; // xmm1
	__m128i v8; // xmm1
	int v9; // eax
	_DWORD* v10; // rax
	_DWORD* v11; // rax
	_DWORD* v12; // rax
	_DWORD* v13; // rax
	__m128i v14; // xmm1
	__m128i v15; // xmm1
	_DWORD* v16; // rdi
	_QWORD* v17; // rbx
	__int64 v18; // rbp
	_DWORD* result; // rax
	__int64 i; // rbx
	unsigned int v21; // [rsp+40h] [rbp+8h] BYREF
	char v22; // [rsp+48h] [rbp+10h] BYREF
	char v23; // [rsp+50h] [rbp+18h] BYREF

	v2 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned int*, __int64))(**(_QWORD**)(a1 + 1288) + 72i64))(
		*(_QWORD*)(a1 + 1288),
		0i64,
		&v21,
		2i64);
	if (v2)
	{
		v3 = v21;
		v4 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AF00), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v5 = _mm_packus_epi16(v4, v4);
		v6 = _mm_cvtsi128_si32(_mm_packus_epi16(v5, v5));
		v7 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7A710), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v8 = _mm_packus_epi16(v7, v7);
		*(int*)((char*)v2 + v21 + 4) = v6;
		*v2 = v6;
		v9 = _mm_cvtsi128_si32(_mm_packus_epi16(v8, v8));
		*(int*)((char*)v2 + v3) = v9;
		v2[1] = v9;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1288) + 80i64))(*(_QWORD*)(a1 + 1288), 0i64);
	}
	v10 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 1264) + 72i64))(
		*(_QWORD*)(a1 + 1264),
		0i64,
		&v22,
		2i64);
	if (v10)
	{
		*v10 = -16777216;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1264) + 80i64))(*(_QWORD*)(a1 + 1264), 0i64);
	}
	v11 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 1272) + 72i64))(
		*(_QWORD*)(a1 + 1272),
		0i64,
		&v22,
		2i64);
	if (v11)
	{
		*v11 = -1;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1272) + 80i64))(*(_QWORD*)(a1 + 1272), 0i64);
	}
	v12 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 1280) + 72i64))(
		*(_QWORD*)(a1 + 1280),
		0i64,
		&v22,
		2i64);
	if (v12)
	{
		*v12 = -8421505;
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1280) + 80i64))(*(_QWORD*)(a1 + 1280), 0i64);
	}
	v13 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 1296) + 72i64))(
		*(_QWORD*)(a1 + 1296),
		0i64,
		&v23,
		2i64);
	if (v13)
	{
		v14 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AC60), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v15 = _mm_packus_epi16(v14, v14);
		*v13 = _mm_cvtsi128_si32(_mm_packus_epi16(v15, v15));
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1296) + 80i64))(*(_QWORD*)(a1 + 1296), 0i64);
	}
	v16 = &unk_140C58B30;
	v17 = (_QWORD*)(a1 + 1304);
	v18 = 2i64;
	do
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(*(_QWORD*)*v17 + 72i64))(
			*v17,
			0i64,
			&v22,
			2i64);
		if (result)
		{
			*result = *v16;
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v17 + 80i64))(*v17, 0i64);
		}
		++v17;
		++v16;
		--v18;
	} while (v18);
	for (i = *(_QWORD*)(a1 + 48); i; i = *(_QWORD*)(i + 120))
		result = (_DWORD*)sub_1402C9930(i);
	return result;
}
// 140B7A710: using guessed type __int128 xmmword_140B7A710;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AC60: using guessed type __int128 xmmword_140B7AC60;
// 140B7AF00: using guessed type __int128 xmmword_140B7AF00;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

