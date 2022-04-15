#include "../winhttp.h"

//----- (000000014007D9C0) ----------------------------------------------------
__int64 __fastcall sub_14007D9C0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 8));
		if ((int)result >= 0)
		{
			result = sub_140336040(a1, *(unsigned __int16**)(a2 + 16));
			if ((int)result >= 0)
			{
				result = sub_1400A7110(a1, *(_DWORD*)(a2 + 24), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_1400A7110(a1, *(_DWORD*)(a2 + 28), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_1400A7110(a1, *(_DWORD*)(a2 + 32), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_1400A7110(a1, *(_DWORD*)(a2 + 36), 0x20ui64);
							if ((int)result >= 0)
								return sub_1400A7110(a1, *(_DWORD*)(a2 + 40), 0x20ui64);
						}
					}
				}
			}
		}
	}
	return result;
}

