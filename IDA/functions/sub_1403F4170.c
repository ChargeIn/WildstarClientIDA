//----- (00000001403F4170) ----------------------------------------------------
__int64 __fastcall sub_1403F4170(__int64 a1, __int64 a2)
{
	char* v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // edx
	__int64 v7; // rcx
	__m128 v9; // [rsp+20h] [rbp-18h] BYREF

	v4 = sub_1400BD5D0(a1 + 32560, a2);
	if (v4)
		*(_DWORD*)v4 = *(_DWORD*)(a2 + 16);
	else
		sub_1400BD4A0(a1 + 32560, (int*)a2, (int*)(a2 + 16));
	sub_140496CA0(v5, (_DWORD*)a2);
	v6 = *(_DWORD*)a2;
	v7 = *(_QWORD*)(a1 + 29504);
	v9 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 4), (__m128) * (unsigned int*)(a2 + 12)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 8), (__m128)0i64));
	sub_140430F80(v7, v6, v9.m128_f32);
	return 0i64;
}
// 1403F41B5: variable 'v5' is possibly undefined
// 1403F4170: using guessed type __m128 var_18;

