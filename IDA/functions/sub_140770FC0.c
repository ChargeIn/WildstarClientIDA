#include "../winhttp.h"

//----- (0000000140770FC0) ----------------------------------------------------
__m128* __fastcall sub_140770FC0(__m128* a1, __m128* a2, double a3, float a4, __int64 a5)
{
	__m128* v7; // rax
	__m128* result; // rax
	__m128 v9; // [rsp+40h] [rbp-48h] BYREF
	char v10[16]; // [rsp+50h] [rbp-38h] BYREF

	a1[1] = *(__m128*)(*(__int64(__fastcall**)(__m128*, __m128*))(a1->m128_u64[0] + 16))(a1, &v9);
	v7 = (__m128*)(*(__int64(__fastcall**)(__m128*, char*))(a1->m128_u64[0] + 16))(a1, v10);
	result = sub_1407711C0(&v9, v7, a2, a3, LODWORD(a4), a5, (__m128*)a1[21].m128_i32, &a1[21].m128_f32[1]);
	a1[20] = v9;
	return result;
}
// 140770FC0: using guessed type char var_38[16];

