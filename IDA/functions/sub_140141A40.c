//----- (0000000140141A40) ----------------------------------------------------
__int64 __fastcall sub_140141A40(__int64 a1, __m128* a2)
{
	__int64 v2; // rbx
	__int64* v5; // rsi
	float* v6; // rax
	float v7; // xmm0_4
	__int64 v9; // rax
	__int128 v10[2]; // [rsp+20h] [rbp-48h] BYREF
	__m128 v11[2]; // [rsp+40h] [rbp-28h] BYREF

	v2 = 0i64;
	if (!*(_QWORD*)(a1 + 816))
		return 0i64;
	while (1)
	{
		v5 = *(__int64**)(*(_QWORD*)(a1 + 808) + 8 * v2);
		(*(void(__fastcall**)(__int64*, __m128*))(*v5 + 16))(v5, v11);
		v6 = (float*)(*(__int64(__fastcall**)(__int64*, __int128*))(*v5 + 16))(v5, v10);
		if (a2->m128_f32[0] >= *v6 && a2->m128_f32[0] < v6[4])
		{
			v7 = a2->m128_f32[1];
			if (v7 >= v6[1] && v7 < v6[5])
				break;
		}
		if ((unsigned __int64)++v2 >= *(_QWORD*)(a1 + 816))
			return 0i64;
	}
	v9 = *v5;
	v10[0] = (__int128)_mm_sub_ps(*a2, v11[0]);
	return (*(__int64(__fastcall**)(__int64*, __int128*))(v9 + 48))(v5, v10);
}
// 140141A40: using guessed type __m128 var_28[2];

