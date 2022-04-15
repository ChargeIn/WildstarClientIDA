#include "../winhttp.h"

//----- (00000001403A1940) ----------------------------------------------------
__int64 __fastcall sub_1403A1940(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx

	sub_140195D70(a1 + 8);
	*(_DWORD*)(a1 + 8) = 0;
	v2 = *(_QWORD**)(a1 + 24);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD**)(a1 + 32);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}

