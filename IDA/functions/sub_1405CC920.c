#include "../winhttp.h"

//----- (00000001405CC920) ----------------------------------------------------
__int64 __fastcall sub_1405CC920(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	sub_1400B6120(*(_QWORD*)a1 + 640i64, a1 + 8);
	sub_140578050((__int64*)qword_140C65B78, *(_DWORD*)(a1 + 8), 0);
	v2 = *(_QWORD**)(a1 + 16);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 24);
	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
		*(_QWORD*)(v3 + 16) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

