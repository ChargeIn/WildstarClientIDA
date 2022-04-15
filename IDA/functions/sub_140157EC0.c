//----- (0000000140157EC0) ----------------------------------------------------
_BOOL8 __fastcall sub_140157EC0(__int64 a1, __m128* a2, __int64 a3, __m128* a4, __int64 a5)
{
	__int64 v9; // rcx
	int v10; // eax
	__m128 v11; // xmm2
	float v12; // xmm2_4
	float v14; // xmm1_4
	int v15; // xmm0_4
	int v16[8]; // [rsp+30h] [rbp-58h] BYREF
	__int128 v17[2]; // [rsp+50h] [rbp-38h] BYREF

	*a4 = 0i64;
	a4->m128_f32[1] = (float)(*(float*)(a3 + 4) - a2[1].m128_f32[1]) - 10.0;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v10 = *(_DWORD*)(v9 + 12);
	v11 = _mm_add_ps(a2[1], *a4);
	v17[0] = (__int128)_mm_add_ps(*a2, *a4);
	v17[1] = (__int128)v11;
	v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
	if ((float)(v12 + 10.0) > (float)v10 || (float)(*((float*)v17 + 1) - 10.0) < 0.0)
		return 0i64;
	v14 = (float)*(int*)(v9 + 8);
	if (*(float*)(a3 + 16) <= v14)
		v14 = *(float*)(a3 + 16);
	v15 = *(_DWORD*)a3;
	*(float*)&v16[5] = v12 - 10.0;
	v16[0] = v15;
	v16[1] = DWORD1(v17[0]);
	*(float*)&v16[4] = v14;
	return sub_140158420(a1, v17, (float*)v16, a4->m128_f32, a5);
}
// 140C65670: using guessed type __int64 qword_140C65670;

