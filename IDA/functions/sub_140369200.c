#include "../winhttp.h"

//----- (0000000140369200) ----------------------------------------------------
__int64 __fastcall sub_140369200(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD**)(a1 + 200);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 208);
	v3 = *(_QWORD*)(a1 + 208);
	if (v3)
		*(_QWORD*)(v3 + 200) = *(_QWORD*)(a1 + 200);
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}

