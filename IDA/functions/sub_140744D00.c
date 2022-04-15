#include "../winhttp.h"

//----- (0000000140744D00) ----------------------------------------------------
__int64 __fastcall sub_140744D00(_QWORD* a1)
{
	unsigned int v2; // eax
	int v3; // edx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v4)
		v3 = sub_14079EF50(v4, v2);
	v5 = a1[2];
	result = 1i64;
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v3;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

