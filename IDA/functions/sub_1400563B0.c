#include "../winhttp.h"

//----- (00000001400563B0) ----------------------------------------------------
__int64 __fastcall sub_1400563B0(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx

	v2 = a1 + 24;
	*(_QWORD*)(v2 - 24) = 0i64;
	*(_QWORD*)(v2 - 16) = 0i64;
	*(_QWORD*)(v2 - 8) = 0i64;
	sub_140195D70(v2);
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

