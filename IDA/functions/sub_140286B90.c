//----- (0000000140286B90) ----------------------------------------------------
__m128 __fastcall sub_140286B90(
	__int64 a1,
	void(__fastcall*** a2)(_QWORD),
	int* a3,
	unsigned __int64 a4,
	__m128* a5,
	int a6,
	__int64 a7,
	int a8)
{
	int v10; // eax
	_QWORD* v11; // rbx
	__int128 v12; // xmm6
	unsigned int v14[4]; // [rsp+60h] [rbp-38h] BYREF
	__m128 v15[2]; // [rsp+70h] [rbp-28h] BYREF

	*(_QWORD*)v14 = 0i64;
	v10 = sub_140283D30(a1, a2, a3, a4, 2, v14);
	v11 = *(_QWORD**)v14;
	v12 = 0i64;
	if (v10 >= 0)
	{
		v15[0] = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)0i64, (__m128) * (unsigned int*)(a7 + 12)));
		if ((int)sub_1402B98B0((__int64)a2, *(_QWORD**)v14, 0i64, a4, a5, a6, a7, (__int64)v15, a8, (float*)v14, 0i64) >= 0)
			v12 = v14[0];
	}
	if (v11)
		(*(void(__fastcall**)(_QWORD*))(*v11 + 8i64))(v11);
	return (__m128)v12;
}
// 140286B90: using guessed type unsigned int var_38[4];
// 140286B90: using guessed type __m128 var_28[2];

