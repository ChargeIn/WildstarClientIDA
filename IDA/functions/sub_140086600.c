#include "../winhttp.h"

//----- (0000000140086600) ----------------------------------------------------
__int64 __fastcall sub_140086600(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 8));
		if ((int)result >= 0)
		{
			result = sub_140085E30(a1, a2 + 16);
			if ((int)result >= 0)
				return sub_1400A7250(a1, *(_DWORD*)(a2 + 48) != 0, 1ui64);
		}
	}
	return result;
}

