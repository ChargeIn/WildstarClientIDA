#include "../winhttp.h"

//----- (000000014032AB60) ----------------------------------------------------
__int64 __fastcall sub_14032AB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rdx

	v4 = *(_QWORD*)(*(_QWORD*)(a3 + 64) + 24i64);
	v5 = *(_QWORD*)(*(_QWORD*)(a4 + 64) + 24i64);
	if (v4 >= v5)
		return v4 > v5;
	else
		return 0xFFFFFFFFi64;
}

