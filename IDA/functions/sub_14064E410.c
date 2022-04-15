#include "../winhttp.h"

//----- (000000014064E410) ----------------------------------------------------
__int64 __fastcall sub_14064E410(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	float v4; // xmm0_4
	__int64 v5; // rax
	float v6; // xmm0_4

	v2 = sub_1406499E0(a1);
	v3 = v2;
	if (v2)
	{
		v4 = (*(float(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 168i64))(v2, 1i64);
		v5 = *(_QWORD*)(a1 + 16);
		v6 = v4 - *(float*)(v3 + 2804);
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (float)(v6 * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

