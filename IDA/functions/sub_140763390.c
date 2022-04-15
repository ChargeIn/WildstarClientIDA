#include "../winhttp.h"

//----- (0000000140763390) ----------------------------------------------------
__int64 __fastcall sub_140763390(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rcx
	float v4; // xmm0_4
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 2648))
		v2 = sub_140195F70(qword_140C65898 + 2632);
	else
		v2 = 0;
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	v4 = (float)v2;
	result = 1i64;
	*(double*)v3 = (float)(v4 * 0.001);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

