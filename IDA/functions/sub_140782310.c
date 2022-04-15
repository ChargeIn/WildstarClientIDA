//----- (0000000140782310) ----------------------------------------------------
_DWORD* __fastcall sub_140782310(__int64 a1, __int64 a2, int a3, __m128* a4)
{
	_DWORD* result; // rax
	int v6[6]; // [rsp+30h] [rbp-18h] BYREF

	result = sub_140783690(a1 + 56, v6, a3, *(_DWORD*)(a2 + 3412), 0i64, 0i64);
	*a4 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)(unsigned int) * result, (__m128)(unsigned int)result[2]),
		_mm_unpacklo_ps((__m128)(unsigned int)result[1], (__m128)0i64));
	return result;
}
// 140782310: using guessed type int var_18[6];

