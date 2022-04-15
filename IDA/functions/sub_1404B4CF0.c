#include "../winhttp.h"

//----- (00000001404B4CF0) ----------------------------------------------------
__int64 __fastcall sub_1404B4CF0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD**)(a1 + 248);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 256);
	v3 = *(_QWORD*)(a1 + 256);
	if (v3)
		*(_QWORD*)(v3 + 248) = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}

