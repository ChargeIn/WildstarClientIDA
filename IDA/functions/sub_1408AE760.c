#include "../winhttp.h"

//----- (00000001408AE760) ----------------------------------------------------
void __fastcall sub_1408AE760(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	unsigned int a4,
	__m128* a5,
	_OWORD* a6,
	unsigned int a7,
	char a8,
	float a9,
	__m128* a10)
{
	__int64 v12; // rsi
	__int64 v13; // rbx

	v12 = a4;
	v13 = 28i64 * a4;
	if (*(_BYTE*)(v13 + a2 + 2288))
	{
		sub_1408AD540(a2 + 944i64 * a4, a1, a7, a8, a3, (__int64)a5, a9, a10);
		if (*(_DWORD*)(v13 + a2 + 2264))
			sub_1408AE4A0((float*)(116 * v12 + a2 + 1888), a5->m128_f32, a7, a3);
		sub_1408A6050(
			a6,
			a5,
			COERCE_DOUBLE(1065353216i64),
			COERCE_DOUBLE(1065353216i64),
			*(float*)(v13 + a2 + 2360),
			*(float*)(v13 + a2 + 2284),
			a7);
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;

