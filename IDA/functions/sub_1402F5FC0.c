//----- (00000001402F5FC0) ----------------------------------------------------
__int64 __fastcall sub_1402F5FC0(__int64 a1, _OWORD* a2)
{
	__int64 result; // rax
	__m128 v5; // xmm2
	__m128 v6; // xmm1

	result = sub_1407E6AF0((unsigned __int64*)(a1 + 80), (__int64)a2, 0x40ui64);
	if ((_DWORD)result)
	{
		*(_OWORD*)(a1 + 80) = *a2;
		*(_OWORD*)(a1 + 96) = a2[1];
		*(_OWORD*)(a1 + 112) = a2[2];
		*(_OWORD*)(a1 + 128) = a2[3];
		v5 = *(__m128*)(a1 + 80);
		*(_DWORD*)(a1 + 1408) &= ~8u;
		v6 = _mm_mul_ps(v5, v5);
		v6.m128_f32[0] = fsqrt(
			(float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0])
			+ _mm_shuffle_ps(v6, v6, 170).m128_f32[0]);
		*(_DWORD*)(a1 + 144) = v6.m128_i32[0];
		*(float*)(a1 + 148) = 1.0 / v6.m128_f32[0];
	}
	return result;
}

