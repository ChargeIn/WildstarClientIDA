#include "../winhttp.h"

//----- (00000001407823F0) ----------------------------------------------------
__m128* __fastcall sub_1407823F0(__int64 a1, __int64 a2, int a3, __m128* a4)
{
	__m128* result; // rax
	int v6; // [rsp+20h] [rbp-38h]
	int v7; // [rsp+28h] [rbp-30h]
	__m128 v8; // [rsp+40h] [rbp-18h] BYREF

	result = sub_140784B60(a1 + 56, &v8, a3, (__int64)a4, v6, v7, a1);
	*a4 = *result;
	return result;
}
// 14078240A: variable 'v6' is possibly undefined
// 14078240A: variable 'v7' is possibly undefined
// 1407823F0: using guessed type __m128 var_18;

