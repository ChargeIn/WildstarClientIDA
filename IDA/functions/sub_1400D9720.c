#include "../winhttp.h"

//----- (00000001400D9720) ----------------------------------------------------
__int64 __fastcall sub_1400D9720(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rax
	float v5; // xmm0_4
	__int64 v6; // rcx

	v2 = sub_1400D66A0(a1, 1u);
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 448);
	if (!v4)
		return 0i64;
	v5 = *(float*)(v4 + 20);
	v6 = a1[2];
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = v5;
	a1[2] += 16i64;
	return result;
}

