#include "../winhttp.h"

//----- (000000014079AA00) ----------------------------------------------------
void __fastcall sub_14079AA00(__int64 a1)
{
	__int64* i; // rcx
	__int64 v3; // rdx
	_QWORD* v4; // r8
	__int64 v5; // r8
	_QWORD* v6; // rcx
	_QWORD* v7; // rcx

	for (i = (__int64*)(a1 + 144); *i; *(_QWORD*)(v3 + 32) = 0i64)
	{
		*(_QWORD*)(*i + 16) = 0i64;
		v3 = *i;
		v4 = *(_QWORD**)(*i + 24);
		if (v4)
			*v4 = *(_QWORD*)(v3 + 32);
		v5 = *(_QWORD*)(v3 + 32);
		if (v5)
			*(_QWORD*)(v5 + 24) = *(_QWORD*)(v3 + 24);
		*(_QWORD*)(v3 + 24) = 0i64;
	}
	sub_140195D70(a1 + 8);
	*(_DWORD*)(a1 + 8) = 0;
	v6 = *(_QWORD**)(a1 + 24);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 32);
	v7 = *(_QWORD**)(a1 + 32);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
}

