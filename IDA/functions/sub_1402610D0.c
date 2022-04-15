//----- (00000001402610D0) ----------------------------------------------------
__int64 __fastcall sub_1402610D0(__int64 a1, __int64 a2, __m128* a3, __int64 a4)
{
	__int64 v4; // rax
	__int64 v9; // rdx
	__int64 v10; // r8
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // xmm1
	__int64 v14; // r8
	__int64 result; // rax
	__int128 v16[2]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 148) = 6;
	(*(void (**)(void))(v4 + 72))();
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
	sub_14025EC20(a1, a2);
	if (a4)
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(qword_140C65670, a4, 0i64);
	v9 = *(unsigned int*)(a1 + 2408);
	v10 = *(_DWORD*)(a1 + 2412) | 0x80u;
	if (a3)
	{
		v11 = *(__m128*)(a1 + 1744);
		v12 = _mm_sub_ps(*(__m128*)(a1 + 1760), v11);
		v13 = _mm_mul_ps(a3[1], v12);
		v16[0] = (__int128)_mm_add_ps(_mm_mul_ps(*a3, v12), v11);
		v16[1] = (__int128)_mm_add_ps(v13, v11);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			(unsigned int)v9 | 0x80,
			v10);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			1i64,
			1i64,
			1i64,
			2);
		result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, __int128*, _QWORD))(*(_QWORD*)qword_140C65670
			+ 664i64))(
				qword_140C65670,
				0xFFFFFFFFi64,
				v14,
				a1 + 1736,
				v16,
				0i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 424i64))(qword_140C65670, v9, v10);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
			qword_140C65670,
			1i64,
			1i64,
			1i64,
			2);
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670
			+ 664i64))(
				qword_140C65670,
				0xFFFFFFFFi64,
				*(_QWORD*)qword_140C65670,
				a1 + 1736,
				a1 + 1744,
				0i64);
	}
	if (a4)
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
			qword_140C65670,
			0i64,
			0i64);
	return result;
}
// 1402611DD: variable 'v14' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

