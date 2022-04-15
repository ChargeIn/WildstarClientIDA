#include "../winhttp.h"

//----- (0000000140378CC0) ----------------------------------------------------
__int64 __fastcall sub_140378CC0(__int64 a1)
{
	__m128* v1; // rbx
	__m128 i; // xmm6
	unsigned __int64 v4; // rcx
	__int64 v5; // rcx
	__m128* v6; // rax
	__int64 result; // rax
	unsigned __int64 v8; // rbx
	unsigned __int64 j; // rsi
	__m128 v10; // [rsp+20h] [rbp-38h] BYREF
	char v11[16]; // [rsp+30h] [rbp-28h] BYREF

	v1 = *(__m128**)(a1 + 40);
	for (i = (__m128)xmmword_140B7B240; v1; v1 = (__m128*)v1[2].m128_u64[1])
	{
		v4 = v1[1].m128_u64[1];
		i = _mm_mul_ps(v1[9], i);
		if (v4)
			i = _mm_mul_ps(
				*(__m128*)(*(__int64(__fastcall**)(unsigned __int64, __m128*))(*(_QWORD*)v4 + 264i64))(v4, &v10),
				i);
	}
	v5 = *(_QWORD*)(a1 + 24);
	v10 = _mm_mul_ps(*(__m128*)(a1 + 144), i);
	if (v5)
	{
		v6 = (__m128*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v5 + 264i64))(v5, v11);
		v10 = _mm_mul_ps(*v6, v10);
	}
	(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 48) + 160i64))(*(_QWORD*)(a1 + 48), &v10);
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v8 = 0i64;
	for (j = result; v8 < j; ++v8)
	{
		result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
			*(_QWORD*)(a1 + 48),
			v8);
		if (result)
			result = sub_140378DC0(result, &v10);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140378CC0: using guessed type char var_28[16];

