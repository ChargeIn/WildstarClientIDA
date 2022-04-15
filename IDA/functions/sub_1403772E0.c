//----- (00000001403772E0) ----------------------------------------------------
__int64 __fastcall sub_1403772E0(__int64 a1, _OWORD* a2)
{
	__int64 v2; // rsi
	__int64 result; // rax
	__int128 v6; // xmm0
	__int64 v7; // rcx
	__m128 v8; // xmm1
	__int64 v9[10]; // [rsp+20h] [rbp-68h] BYREF

	v2 = a1 + 176;
	result = sub_1407E6AF0((unsigned __int64*)(a1 + 176), (__int64)a2, 0x40ui64);
	if ((_DWORD)result)
	{
		*(_OWORD*)v2 = *a2;
		v6 = a2[1];
		v9[0] = (__int64)a2;
		*(_OWORD*)(v2 + 16) = v6;
		*(_OWORD*)(v2 + 32) = a2[2];
		*(_OWORD*)(v2 + 48) = a2[3];
		sub_1401AFC20(v9, (double*)(a1 + 240));
		v7 = *(_QWORD*)(a1 + 48);
		v8 = _mm_mul_ps(*(__m128*)v2, *(__m128*)v2);
		*(float*)(a1 + 304) = 1.0
			/ fsqrt(
				(float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
				+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0]);
		result = (*(__int64(__fastcall**)(__int64, _OWORD*))(*(_QWORD*)v7 + 128i64))(v7, a2);
		if (*(_DWORD*)(a1 + 1056))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 24i64))(*(_QWORD*)(a1 + 48));
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 16i64))(*(_QWORD*)(a1 + 48));
		}
		if (*(_DWORD*)(a1 + 76))
			return sub_140377640((__m128*)a1);
	}
	return result;
}
// 1403772E0: using guessed type __int64 var_68[10];

