//----- (0000000140157FF0) ----------------------------------------------------
_BOOL8 __fastcall sub_140157FF0(__int64 a1, __m128* a2, __int64 a3, __m128* a4, __int64 a5)
{
	__int64 v9; // rax
	__m128 v10; // xmm2
	float v11; // xmm3_4
	int v13[8]; // [rsp+30h] [rbp-48h] BYREF
	__m128 v14; // [rsp+50h] [rbp-28h] BYREF
	__m128 v15; // [rsp+60h] [rbp-18h]

	*a4 = 0i64;
	a4->m128_f32[1] = (float)(*(float*)(a3 + 20) - a2->m128_f32[1]) + 10.0;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v10 = _mm_add_ps(a2[1], *a4);
	LODWORD(v9) = *(_DWORD*)(v9 + 8);
	v14 = _mm_add_ps(*a2, *a4);
	v15 = v10;
	v11 = (float)(int)v9;
	if (*(float*)(a3 + 16) <= (float)(int)v9)
		v11 = *(float*)(a3 + 16);
	v13[0] = *(_DWORD*)a3;
	*(float*)&v13[1] = v14.m128_f32[1] + 10.0;
	*(float*)&v13[4] = v11;
	v13[5] = v15.m128_i32[1];
	return sub_140158420(a1, (__int128*)&v14, (float*)v13, a4->m128_f32, a5);
}
// 140C65670: using guessed type __int64 qword_140C65670;

