#include "../winhttp.h"

//----- (0000000140779D40) ----------------------------------------------------
__int64 __fastcall sub_140779D40(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 result; // rax
	int v6; // eax
	__int64 v7; // rcx

	result = sub_1407798C0(a1, a2, a3);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 176) = 0;
		v6 = *(_DWORD*)(a2 + 8);
		if (v6)
		{
			*(float*)(a1 + 180) = 1.0 / (float)v6;
			*(float*)(a1 + 184) = (float)((float)*(int*)(a2 + 24) / (float)*(int*)(a2 + 8)) * 0.001;
		}
		else
		{
			*(_DWORD*)(a1 + 180) = 981668463;
			*(_DWORD*)(a1 + 184) = 981668463;
		}
		if (qword_140C65898)
		{
			v7 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v7)
			{
				Apollo_LUAEvent(v7, "SetProgressClickTimes", "iiii", 0i64, 0, 0, 0);
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ProgressClickWindowDisplay", byte_1409EC1B4, 1i64);
			}
		}
		return 0i64;
	}
	return result;
}
// 1409EC1B4: using guessed type _BYTE byte_1409EC1B4[32];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65898: using guessed type __int64 qword_140C65898;

