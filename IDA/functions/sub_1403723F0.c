#include "../winhttp.h"

//----- (00000001403723F0) ----------------------------------------------------
__int64 __fastcall sub_1403723F0(__int64 a1)
{
	unsigned __int32 v2; // edi
	_QWORD* v3; // rcx
	__int64 v4; // rax

	v2 = _InterlockedIncrement((volatile signed __int32*)(a1 + 8));
	if (v2 == 1)
	{
		sub_1401984D0(a1 + 40);
		v3 = *(_QWORD**)(a1 + 88);
		if (v3)
			*v3 = *(_QWORD*)(a1 + 96);
		v4 = *(_QWORD*)(a1 + 96);
		if (v4)
			*(_QWORD*)(v4 + 88) = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(a1 + 88) = 0i64;
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	return v2;
}

