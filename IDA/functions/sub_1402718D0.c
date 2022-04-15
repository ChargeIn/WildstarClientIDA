#include "../winhttp.h"

//----- (00000001402718D0) ----------------------------------------------------
__int64 __fastcall sub_1402718D0(__int64 a1, int a2, float a3)
{
	float v4; // xmm0_4
	__int64 result; // rax

	v4 = (float)a2 * *(float*)(a1 + 7708);
	if (*(_DWORD*)(a1 + 8528) != LODWORD(v4))
	{
		*(float*)(a1 + 8528) = v4;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			195i64);
	}
	if (*(_DWORD*)(a1 + 8448) != LODWORD(a3))
	{
		*(float*)(a1 + 8448) = a3;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			175i64);
	}
	return result;
}

