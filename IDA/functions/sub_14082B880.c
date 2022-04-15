#include "../winhttp.h"

//----- (000000014082B880) ----------------------------------------------------
void __fastcall sub_14082B880(__int64 a1, __int64 a2)
{
	_QWORD* i; // rbx
	__int64 v5; // rcx
	_QWORD* j; // rbx
	__int64 v7; // rcx

	for (i = *(_QWORD**)(a1 + 96); i; i = (_QWORD*)*i)
	{
		v5 = *(_QWORD*)(i[2] + 8i64);
		if (*(_WORD*)(v5 + 60) == 1283)
			sub_140857420(v5, a2);
	}
	for (j = *(_QWORD**)(a1 + 144); j; j = (_QWORD*)*j)
	{
		v7 = *(_QWORD*)(j[2] + 8i64);
		if (*(_WORD*)(v7 + 60) == 1283)
			sub_140857420(v7, a2);
	}
}

