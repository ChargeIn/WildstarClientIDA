#include "../winhttp.h"

//----- (00000001401A4970) ----------------------------------------------------
__int64 __fastcall sub_1401A4970(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx

	*(_QWORD*)a1 = &off_140B5EA08;
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		*(_QWORD*)(*(_QWORD*)(a1 + 8) - 4848i64) = v2;
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	sub_140195D70(a1 + 24);
	*(_DWORD*)(a1 + 24) = 0;
	v3 = *(_QWORD**)(a1 + 40);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 48);
	v4 = *(_QWORD**)(a1 + 48);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}
// 140B5EA08: using guessed type __int64 (__fastcall *off_140B5EA08)();

