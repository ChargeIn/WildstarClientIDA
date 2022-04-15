#include "../winhttp.h"

//----- (00000001400DE7C0) ----------------------------------------------------
__int64 __fastcall sub_1400DE7C0(_QWORD* a1)
{
	__int64 v2; // rdi
	float v3; // xmm1_4

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056C40(a1, 2u);
		*(float*)(v2 + 620) = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v3;
	}
	return 0i64;
}
// 140C3B438: using guessed type int dword_140C3B438;

