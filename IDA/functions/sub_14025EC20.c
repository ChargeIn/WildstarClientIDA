#include "../winhttp.h"

//----- (000000014025EC20) ----------------------------------------------------
__int64 __fastcall sub_14025EC20(__int64 a1, __int64 a2)
{
	int v4; // eax
	int v5; // ecx
	int v6; // r10d

	sub_14025E420(a1);
	sub_14025E8C0(a1, a2);
	v4 = 0;
	v5 = *(_DWORD*)(a1 + 48);
	v6 = 0;
	if (v5 == 8)
	{
		v4 = 1;
		v6 = 1;
	}
	else if (v5 == 12)
	{
		v4 = 1;
	}
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2184),
		v6
		+ 2
		* ((*(_QWORD*)(a2 + 776) != 0i64)
			+ 6 * ((v5 == 17) + 2 * ((unsigned int)(*(float*)(a1 + 332) == 0.0) + 2 * v4))));
}
// 140C65670: using guessed type __int64 qword_140C65670;

