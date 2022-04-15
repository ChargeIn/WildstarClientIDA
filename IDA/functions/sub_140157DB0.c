//----- (0000000140157DB0) ----------------------------------------------------
__int64 __fastcall sub_140157DB0(__int64 a1, __m128* a2, __int64 a3, __m128* a4, __int64 a5)
{
	__int64 v9; // rcx
	int v10; // eax
	__m128 v11; // xmm2
	float v13; // xmm1_4
	int v14; // xmm0_4
	int v15[8]; // [rsp+30h] [rbp-48h] BYREF
	__int128 v16[2]; // [rsp+50h] [rbp-28h] BYREF

	*a4 = 0i64;
	a4->m128_f32[0] = (float)(*(float*)(a3 + 16) - a2->m128_f32[0]) + 10.0;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v10 = *(_DWORD*)(v9 + 8);
	v11 = _mm_add_ps(a2[1], *a4);
	v16[0] = (__int128)_mm_add_ps(*a2, *a4);
	v16[1] = (__int128)v11;
	if ((float)(v11.m128_f32[0] + 10.0) > (float)v10)
		return 0i64;
	v13 = (float)*(int*)(v9 + 12);
	if (*(float*)(a3 + 20) <= v13)
		v13 = *(float*)(a3 + 20);
	*(float*)v15 = *(float*)v16 - 10.0;
	v14 = *(_DWORD*)(a3 + 4);
	v15[4] = v11.m128_i32[0];
	v15[1] = v14;
	*(float*)&v15[5] = v13;
	return sub_1401580E0(a1, (__int64)v16, (__int64)v15, &a4->m128_f32[1], a5);
}
// 140C65670: using guessed type __int64 qword_140C65670;

