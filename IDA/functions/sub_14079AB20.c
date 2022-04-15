#include "../winhttp.h"

//----- (000000014079AB20) ----------------------------------------------------
void __fastcall sub_14079AB20(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // r8

	v2 = *(_QWORD**)(a2 + 24);
	if (v2)
		*v2 = *(_QWORD*)(a2 + 32);
	v3 = *(_QWORD*)(a2 + 32);
	if (v3)
		*(_QWORD*)(v3 + 24) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a2 + 24) = 0i64;
	*(_QWORD*)(a2 + 32) = 0i64;
	if (!*(_QWORD*)(a1 + 144) && *(int*)(a1 + 4) < 2)
	{
		*(_DWORD*)(a1 + 4) = 2;
		if (*(_QWORD*)(a1 + 88) || *(_QWORD*)(a1 + 96))
			sub_140195960(a1 + 8, 0, a1 + 80, 4);
	}
}

