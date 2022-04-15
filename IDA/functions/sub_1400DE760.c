#include "../winhttp.h"

//----- (00000001400DE760) ----------------------------------------------------
__int64 __fastcall sub_1400DE760(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	float v4; // xmm0_4

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = a1[2];
		v4 = (float)(180.0 / *(float*)&dword_140C3C018) * *(float*)(result + 620);
		*(_DWORD*)(v3 + 8) = 3;
		result = 1i64;
		*(double*)v3 = v4;
		a1[2] += 16i64;
	}
	return result;
}
// 140C3C018: using guessed type int dword_140C3C018;

