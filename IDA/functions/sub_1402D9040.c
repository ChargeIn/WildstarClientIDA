#include "../winhttp.h"

//----- (00000001402D9040) ----------------------------------------------------
__m128* __fastcall sub_1402D9040(__int64 a1, __int64 a2, __m128* a3, char a4)
{
	unsigned __int64 v7; // r10
	__int64 v8; // r9
	__int64 v9; // rdx
	__int8* v10; // rdi
	__int64 v11; // r8
	__m128* result; // rax
	__int32* v13; // rdi
	__int64 i; // rcx
	__m128 v15; // [rsp+20h] [rbp-38h] BYREF
	__m128 v16; // [rsp+30h] [rbp-28h] BYREF
	__m128 v17; // [rsp+40h] [rbp-18h] BYREF

	if ((a4 & 4) != 0)
	{
		v7 = *(unsigned int*)(a1 + 24);
		if (v7 > 4)
			v7 = 4i64;
		v8 = 0i64;
		if (!v7)
			goto LABEL_8;
		v9 = 0i64;
		v10 = &a3[2].m128_i8[4];
		v11 = (unsigned int)v7;
		v8 = (unsigned int)v7;
		do
		{
			result = *(__m128**)(a1 + 32);
			v10 += 4;
			v9 += 74i64;
			*((_DWORD*)v10 - 1) = result->m128_i32[v9 - 1];
			--v11;
		} while (v11);
		if (v7 < 4)
		{
		LABEL_8:
			result = 0i64;
			v13 = &a3[2].m128_i32[v8 + 1];
			for (i = 4 - v8; i; --i)
				*v13++ = 0;
		}
	}
	if ((a4 & 8) != 0)
	{
		sub_1402D8D20(&v15, *(unsigned __int8**)a2);
		sub_1402D8D20(&v17, *(unsigned __int8**)(a2 + 8));
		result = sub_1402D8D20(&v16, *(unsigned __int8**)(a2 + 16));
		a3[1] = _mm_add_ps(
			_mm_mul_ps(
				_mm_shuffle_ps((__m128) * (unsigned int*)(a2 + 36), (__m128) * (unsigned int*)(a2 + 36), 0),
				_mm_sub_ps(v16, v15)),
			_mm_add_ps(
				_mm_mul_ps(
					_mm_shuffle_ps((__m128) * (unsigned int*)(a2 + 32), (__m128) * (unsigned int*)(a2 + 32), 0),
					_mm_sub_ps(v17, v15)),
				v15));
	}
	return result;
}
// 1402D9040: using guessed type __m128 var_18;

