#include "../winhttp.h"

//----- (0000000140865AF0) ----------------------------------------------------
__int64 __fastcall sub_140865AF0(
	__int64 a1,
	__int64 a2,
	int a3,
	unsigned int a4,
	float a5,
	unsigned __int64 a6,
	__int64 a7)
{
	float v9; // xmm0_4

	v9 = sub_1408364E0(qword_140C61BB0, a2, a6, a4).m128_f32[0];
	sub_140865420(a1, a3, a5 - v9, a6, a7);
	return 1i64;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

