#include "../winhttp.h"

//----- (00000001408FBA30) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408FBA30(__m128* a1, __int32 a2, int a3)
{
	unsigned __int64 result; // rax
	int v4; // xmm0_4

	a1[18].m128_i32[0] = a2;
	switch (a2)
	{
	case 1:
		a1[1].m128_u64[1] = 0i64;
		a1[2].m128_u64[0] = 0i64;
		a1[2].m128_u64[1] = 0i64;
		a1[3].m128_u64[0] = 0i64;
		a1[3].m128_u64[1] = 0i64;
		a1[4].m128_u64[0] = 0i64;
		a1[4].m128_u64[1] = 0i64;
		a1[5].m128_u64[0] = 0i64;
		a1[1].m128_u64[0] = 0i64;
		result = (unsigned int)a3;
		a1->m128_f32[3] = 1.0 - (float)(251.32742 / (float)a3);
		break;
	case 3:
		return sub_1408A8E90(
			a1 + 7,
			*(float*)&dword_140C1ABB4,
			*(float*)&dword_140C1ABB8,
			*(float*)&dword_140C1ABBC,
			*(float*)&dword_140C1ABAC,
			*(float*)&dword_140C1ABB0);
	case 2:
		v4 = dword_140C1ABA8;
		a1[6].m128_i32[0] = -1082214318;
		a1[5].m128_i32[3] = v4;
		break;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C1ABA8: using guessed type int dword_140C1ABA8;
// 140C1ABAC: using guessed type int dword_140C1ABAC;
// 140C1ABB0: using guessed type int dword_140C1ABB0;
// 140C1ABB4: using guessed type int dword_140C1ABB4;
// 140C1ABB8: using guessed type int dword_140C1ABB8;
// 140C1ABBC: using guessed type int dword_140C1ABBC;

