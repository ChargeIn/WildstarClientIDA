#include "../winhttp.h"

//----- (000000014046ECC0) ----------------------------------------------------
__int64 __fastcall sub_14046ECC0(_DWORD* a1)
{
	__int64 result; // rax
	int v2; // eax
	int v3; // eax
	int v4; // eax
	unsigned int v5; // edx
	int v6; // eax

	result = (unsigned int)a1[1251];
	if ((_DWORD)result)
		return result;
	if ((int)a1[21] <= 1)
	{
		if (!a1[171] && !a1[1237])
		{
			v3 = a1[1291];
			if ((v3 & 4) != 0 && (v3 & 0x10) != 0)
			{
				v4 = a1[1224];
				if (v4 >= 0)
				{
					if (v4 <= 1)
						return (unsigned int)(a1[1215] != 0) + 153;
					if (v4 == 3)
					{
						v5 = 153;
						if (a1[1233] == 37)
							return 7851;
						return v5;
					}
					if (v4 == 5)
					{
						result = 282i64;
						if (a1[1233] == 37)
							return 5614i64;
						return result;
					}
				}
				result = 152i64;
				if (a1[1233] == 37)
					return 1589i64;
				return result;
			}
		}
		v6 = a1[1224];
		if (v6 >= 0)
		{
			if (v6 <= 1)
				return (unsigned int)(a1[1215] != 0) + 7671;
			if (v6 == 3)
				return 7671i64;
			if (v6 == 5)
				return 7670i64;
		}
		return 7669i64;
	}
	else
	{
		v2 = a1[1224];
		if (v2 < 0)
			return 5643i64;
		if (v2 <= 1)
		{
			return (unsigned int)(a1[1215] != 0) + 5643;
		}
		else
		{
			if (v2 != 3)
			{
				if (v2 == 5)
					return 7797i64;
				return 5643i64;
			}
			return 7796i64;
		}
	}
}

