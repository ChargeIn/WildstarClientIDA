#include "../winhttp.h"

//----- (000000014064C820) ----------------------------------------------------
__int64 __fastcall sub_14064C820(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	float v5; // xmm0_4

	v2 = sub_1406499E0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		v5 = *(float*)(v2 + 2724);
		*(_DWORD*)(v3 + 8) = 3;
		*(double*)v3 = v5;
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

