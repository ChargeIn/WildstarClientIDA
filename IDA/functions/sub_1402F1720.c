#include "../winhttp.h"

//----- (00000001402F1720) ----------------------------------------------------
__int64 __fastcall sub_1402F1720(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 96);
	if (v2)
		sub_1402F1720(v2, 1i64);
	v3 = *(_QWORD**)(a1 + 88);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 96);
	v4 = *(_QWORD*)(a1 + 96);
	if (v4)
		*(_QWORD*)(v4 + 88) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}

