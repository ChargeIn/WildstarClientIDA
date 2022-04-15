#include "../winhttp.h"

//----- (00000001404539A0) ----------------------------------------------------
__m128 __fastcall sub_1404539A0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, float a6, float a7)
{
	__int128 v7; // xmm7
	__int128 v8; // xmm6
	float v9; // xmm0_4
	__int128 v10; // xmm0
	__m128 result; // xmm0

	v8 = (unsigned int)dword_140DC293C;
	v7 = LODWORD(a7);
	*(float*)&v8 = (float)(*(float*)&dword_140DC293C / (float)a3) * *(float*)&dword_140DC2940;
	v9 = (float)(*(float*)&dword_140DC2944 - *(float*)&dword_140DC294C) / *(float*)&v8;
	if (a7 >= v9)
	{
		*(float*)&v7 = a7 - v9;
		v10 = v7;
		*(float*)&v10 = (float)(*(float*)&v7 / (float)(*(float*)&dword_140DC2948 + *(float*)&v7))
			* (float)(*(float*)&dword_140C45858 * 0.5);
		*(float*)&v10 = sub_1408FC950(*(double*)&v10) * (float)(*(float*)&v7 * *(float*)&v8);
		v8 = v10;
		*(float*)&v8 = *(float*)&v10 + *(float*)&dword_140DC2944;
	}
	else
	{
		*(float*)&v8 = (float)(*(float*)&v8 * a7) + *(float*)&dword_140DC294C;
	}
	result = 0i64;
	*(float*)&v8 = (float)(*(float*)&v8 * 0.0099999998) + a6;
	result.m128_f32[0] = (float)dword_140DC2950 * 0.0099999998;
	if (*(float*)&v8 <= result.m128_f32[0])
		return (__m128)v8;
	return result;
}
// 140C45858: using guessed type int dword_140C45858;
// 140DC293C: using guessed type int dword_140DC293C;
// 140DC2940: using guessed type int dword_140DC2940;
// 140DC2944: using guessed type int dword_140DC2944;
// 140DC2948: using guessed type int dword_140DC2948;
// 140DC294C: using guessed type int dword_140DC294C;
// 140DC2950: using guessed type int dword_140DC2950;

