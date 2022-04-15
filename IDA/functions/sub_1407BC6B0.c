//----- (00000001407BC6B0) ----------------------------------------------------
float __fastcall sub_1407BC6B0(__m128* a1, __m128* a2)
{
	__m128* v4; // rcx
	__m128* v5; // rdx
	int v6; // r8d
	__m128 v8; // [rsp+20h] [rbp-18h] BYREF

	sub_1407B6330((__int64)a1);
	v8 = v4[4];
	sub_1407B64C0((__int64)v4, &v8, v5, v6);
	sub_1407B74E0((__int64)a1);
	v8 = _mm_sub_ps(*a2, a1[4]);
	if ((unsigned int)sub_1407B80B0(a1, &v8))
		sub_1407B93E0((__int64)a1);
	else
		a1[72].m128_i32[0] = 0;
	return a1[72].m128_f32[0];
}
// 1407BC6C5: variable 'v4' is possibly undefined
// 1407BC6D9: variable 'v5' is possibly undefined
// 1407BC6D9: variable 'v6' is possibly undefined
// 1407BC6B0: using guessed type __m128 var_18;

