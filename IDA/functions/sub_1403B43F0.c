#include "../winhttp.h"

//----- (00000001403B43F0) ----------------------------------------------------
__int64 __fastcall sub_1403B43F0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rdx
	int v4; // ecx
	int v5; // ecx
	bool v6; // zf

	v3 = *(_QWORD*)(a1 + 112);
	v4 = *(_DWORD*)(v3 + 244);
	if (v4)
	{
		v5 = v4 - 1;
		if (v5)
		{
			if (v5 != 1)
				return 0i64;
			if (a3[329] || a3[333] && (*(_DWORD*)(v3 + 268) & 0x4000000) == 0)
				return 92i64;
			v6 = a3[336] == 0;
		}
		else
		{
			if (a3[328] || a3[332] && (*(_DWORD*)(v3 + 268) & 0x4000000) == 0)
				return 92i64;
			v6 = a3[335] == 0;
		}
		if (!v6 && (*(_DWORD*)(v3 + 268) & 0x4000000) != 0)
			return 92i64;
	}
	else if (a3[327]
		|| a3[331] && (*(_DWORD*)(v3 + 268) & 0x4000000) == 0
		|| a3[334] && (*(_DWORD*)(v3 + 268) & 0x4000000) != 0)
	{
		return 92i64;
	}
	return 0i64;
}

