#include "../winhttp.h"

//----- (0000000140341A20) ----------------------------------------------------
__int64 __fastcall sub_140341A20(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // rdx
	_QWORD* v6; // rdx
	__int64 v7; // rdx

	v2 = *(_QWORD**)(a1 + 80);
	if (!v2)
		return 2147500037i64;
	while (*v2 != a2)
	{
		v2 = (_QWORD*)v2[3];
		if (!v2)
			return 2147500037i64;
	}
	v4 = (_QWORD*)v2[4];
	if (v4)
		*v4 = v2[5];
	v5 = v2[5];
	if (v5)
		*(_QWORD*)(v5 + 32) = v2[4];
	v2[4] = 0i64;
	v2[5] = 0i64;
	v6 = (_QWORD*)v2[2];
	if (v6)
		*v6 = v2[3];
	v7 = v2[3];
	if (v7)
		*(_QWORD*)(v7 + 16) = v2[2];
	v2[2] = 0i64;
	v2[3] = 0i64;
	sub_14018B900((__int64)v2, 0);
	return 0i64;
}

