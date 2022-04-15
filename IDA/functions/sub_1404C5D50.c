//----- (00000001404C5D50) ----------------------------------------------------
__int64 __fastcall sub_1404C5D50(unsigned int* a1, __int64 a2)
{
	unsigned int v2; // xmm0_4
	__int64 v3; // rdx
	unsigned __int64 v5; // [rsp+20h] [rbp-A8h]
	__int128 v6; // [rsp+30h] [rbp-98h]
	__m128 v7; // [rsp+40h] [rbp-88h] BYREF
	__int128 v8[6]; // [rsp+50h] [rbp-78h] BYREF

	*(_QWORD*)&v6 = a1 + 36;
	*((_QWORD*)&v6 + 1) = &v7;
	v2 = a1[43];
	v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a1[40], (__m128)a1[42]), _mm_unpacklo_ps((__m128)a1[41], (__m128)0i64));
	v8[1] = v6;
	LODWORD(v5) = v2;
	v8[0] = v5;
	sub_1401B0590((int*)v8, a2);
	return v3;
}
// 1404C5DC7: variable 'v5' is possibly undefined
// 1404C5DD1: variable 'v3' is possibly undefined

