#include "../winhttp.h"

//----- (00000001400AF9B0) ----------------------------------------------------
__int64 __fastcall sub_1400AF9B0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_14006BD80(a1, *(float*)a2);
	if ((int)result >= 0)
	{
		result = sub_14006BD80(a1, *(float*)(a2 + 4));
		if ((int)result >= 0)
		{
			result = sub_14006BD80(a1, *(float*)(a2 + 8));
			if ((int)result >= 0)
			{
				result = sub_14006BD80(a1, *(float*)(a2 + 12));
				if ((int)result >= 0)
				{
					result = sub_14006BD80(a1, *(float*)(a2 + 16));
					if ((int)result >= 0)
					{
						result = sub_14006BD80(a1, *(float*)(a2 + 20));
						if ((int)result >= 0)
						{
							result = sub_14006BD80(a1, *(float*)(a2 + 24));
							if ((int)result >= 0)
							{
								result = sub_14006BD80(a1, *(float*)(a2 + 28));
								if ((int)result >= 0)
								{
									result = sub_14006BD80(a1, *(float*)(a2 + 32));
									if ((int)result >= 0)
										return sub_1400A7110(a1, *(_DWORD*)(a2 + 36), 0x20ui64);
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}

