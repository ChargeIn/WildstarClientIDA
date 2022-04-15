#include "../winhttp.h"

//----- (000000014038D560) ----------------------------------------------------
__int128* __fastcall sub_14038D560(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__m128 v5; // xmm1
	__m128* v6; // rax
	__m128 v7; // xmm0
	__int128* result; // rax
	__m128 v9; // [rsp+20h] [rbp-18h] BYREF

	if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(a1 + 48), a2, 0x40ui64))
	{
		*(_OWORD*)(a1 + 48) = *(_OWORD*)a2;
		*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 16);
		*(_OWORD*)(a1 + 80) = *(_OWORD*)(a2 + 32);
		*(_OWORD*)(a1 + 96) = *(_OWORD*)(a2 + 48);
		v4 = *(_QWORD*)(a1 + 32);
		v5 = _mm_mul_ps(*(__m128*)(a1 + 48), *(__m128*)(a1 + 48));
		*(float*)(a1 + 128) = 1.0
			/ fsqrt(
				(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
				+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0]);
		if (v4 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 944i64))(v4))
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 72i64))(*(_QWORD*)(a1 + 32), a1 + 48);
		if (!*(_QWORD*)(a1 + 1168))
		{
			if (*(_DWORD*)(a1 + 228))
				sub_140367870(*(_QWORD*)(a1 + 16), (float*)(a1 + 384));
			sub_14038B6D0((__m128*)a1);
		}
	}
	v6 = *(__m128**)(a2 + 64);
	if (v6)
		v7 = *v6;
	else
		v7 = _mm_add_ps(*(__m128*)(a1 + 96), (__m128)xmmword_140C77870);
	result = (__int128*)&v9;
	v9 = v7;
	*(__m128*)(a1 + 112) = v7;
	return result;
}
// 14038D64D: returning address of temporary local variable '%var_18'
// 140C77870: using guessed type __int128 xmmword_140C77870;

