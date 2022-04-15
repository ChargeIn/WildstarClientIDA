#include "../winhttp.h"

//----- (0000000140790530) ----------------------------------------------------
unsigned __int64 __fastcall sub_140790530(__int64 a1, __int64 a2, int a3)
{
	bool v3; // sf
	__int64 v4; // r8
	unsigned __int64 v6; // rdi

	v3 = a3 - 49 < 0;
	v4 = (unsigned int)(a3 - 49);
	if (v3 || (int)v4 >= *(_DWORD*)(a1 + 24) || *(_QWORD*)(a1 + 16i64 * (int)v4 + 40) == -1i64)
		sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aInvalidCapture, v4);
	v6 = *(_QWORD*)(a1 + 16i64 * (int)v4 + 40);
	if (*(_QWORD*)(a1 + 8) - a2 < v6
		|| (unsigned int)sub_1407E6AF0(
			*(unsigned __int64**)(a1 + 16 * ((int)v4 + 2i64)),
			a2,
			*(_QWORD*)(a1 + 16i64 * (int)v4 + 40)))
	{
		return 0i64;
	}
	else
	{
		return v6 + a2;
	}
}

