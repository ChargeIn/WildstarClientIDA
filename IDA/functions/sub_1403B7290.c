#include "../winhttp.h"

//----- (00000001403B7290) ----------------------------------------------------
__int64 __fastcall sub_1403B7290(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx

	if (*(_QWORD*)(a1 + 32))
		sub_140195D70(a1 + 16);
	sub_140195D70(a1 + 16);
	*(_DWORD*)(a1 + 16) = 0;
	v2 = *(_QWORD**)(a1 + 32);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 40);
	v3 = *(_QWORD**)(a1 + 40);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}

