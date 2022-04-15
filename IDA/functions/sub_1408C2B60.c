#include "../winhttp.h"

//----- (00000001408C2B60) ----------------------------------------------------
__int64 __fastcall sub_1408C2B60(__int64 a1)
{
	int v1; // r9d
	__int64 result; // rax
	int v4; // edx

	v1 = *(_DWORD*)(a1 + 560);
	if (v1)
	{
		result = sub_1408C34E0(
			(_DWORD*)(a1 + 24),
			*(_QWORD*)(a1 + 16),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 512)),
			v1,
			*(_DWORD*)(a1 + 572));
		if ((_DWORD)result != 1)
			return result;
		sub_1408C3770(a1 + 24, *(float*)(a1 + 496));
		v4 = *(_DWORD*)(a1 + 480);
		if (v4)
			sub_1408ADE90(
				(float*)(a1 + 208),
				v4 - 1,
				*(_DWORD*)(a1 + 572),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 488)),
				*(float*)(a1 + 484),
				*(float*)(a1 + 492));
	}
	return 1i64;
}

