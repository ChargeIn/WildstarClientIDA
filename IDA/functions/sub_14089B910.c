//----- (000000014089B910) ----------------------------------------------------
__int64 __fastcall sub_14089B910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	__int16 v7; // ax
	float v8; // xmm6_4
	float v9; // xmm7_4
	__m128i v10; // xmm0
	__int64 v11; // rax
	__int64 result; // rax

	*(_QWORD*)(a1 + 40) = a3;
	*(_DWORD*)(a1 + 8) = *a5;
	*(_DWORD*)(a1 + 12) = (a5[1] >> 21) & 7;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	*(_QWORD*)(a1 + 32) = a4;
	*(_WORD*)(a1 + 24) = v7;
	v8 = *(float*)(a4 + 16);
	v9 = *(float*)(a4 + 12);
	v10 = _mm_cvtsi32_si128(sub_1407DDB28());
	v11 = *(_QWORD*)(a1 + 32);
	*(float*)v10.m128i_i32 = (float)((float)(_mm_cvtepi32_ps(v10).m128_f32[0] * 0.000030518509) * (float)(v8 - v9)) + v9;
	*(_DWORD*)(a1 + 20) = v10.m128i_i32[0];
	*(float*)v10.m128i_i32 = *(float*)v10.m128i_i32 + *(float*)(v11 + 8);
	result = 1i64;
	*(_DWORD*)(a1 + 28) = v10.m128i_i32[0];
	if (*(float*)v10.m128i_i32 < 0.001)
		*(_DWORD*)(a1 + 28) = 981668463;
	return result;
}

