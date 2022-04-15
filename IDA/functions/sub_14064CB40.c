#include "../winhttp.h"

//----- (000000014064CB40) ----------------------------------------------------
__int64 __fastcall sub_14064CB40(__int64 a1)
{
	__int64 v2; // rax
	float v4; // xmm0_4
	__int64 v5; // rax

	v2 = sub_1406499E0(a1);
	if (v2)
	{
		v4 = sub_1404629D0(v2);
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = v4;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

