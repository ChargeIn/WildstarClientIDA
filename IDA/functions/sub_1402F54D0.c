#include "../winhttp.h"

//----- (00000001402F54D0) ----------------------------------------------------
__int64 __fastcall sub_1402F54D0(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = *(_DWORD*)(a1 + 44);
	if (v2 != 3)
	{
		if ((v2 & 1) == 0)
		{
			if (!(unsigned int)sub_1402EC500(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 16i64), a2))
				return 0i64;
			*(_DWORD*)(a1 + 44) |= 1u;
		}
		if ((*(_BYTE*)(a1 + 44) & 2) == 0)
		{
			v5 = *(_QWORD*)(a1 + 56);
			if (*(_QWORD*)(v5 + 40) && !(unsigned int)sub_14030D8A0(v5))
				return 0i64;
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 56i64);
			*(_DWORD*)(a1 + 44) |= 2u;
			*(_QWORD*)(a1 + 64) = v6;
		}
	}
	return 1i64;
}

