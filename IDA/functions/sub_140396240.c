#include "../winhttp.h"

//----- (0000000140396240) ----------------------------------------------------
__int64 __fastcall sub_140396240(_QWORD* a1, __m128* a2)
{
	__m128* v5; // rdx
	__int64 v6; // r9
	__int64 result; // rax
	__int64 v8; // rcx
	__m128 v9[4]; // [rsp+30h] [rbp-A8h] BYREF
	__m128* v10[10]; // [rsp+70h] [rbp-68h] BYREF

	if (a1[4])
	{
		v5 = *(__m128**)(a1[2] + 16i64);
		v10[0] = a2;
		v10[1] = v5 + 68;
		sub_1401AFB10(v10, v9);
		result = (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v6 + 88i64))(v6, v9);
	}
	v8 = a1[5];
	if (v8)
		return (*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v8 + 72i64))(v8, a2);
	return result;
}
// 1403962AE: variable 'v6' is possibly undefined
// 140396240: using guessed type __m128 var_A8[4];

