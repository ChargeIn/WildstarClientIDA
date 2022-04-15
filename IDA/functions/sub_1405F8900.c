#include "../winhttp.h"

//----- (00000001405F8900) ----------------------------------------------------
__int64 __fastcall sub_1405F8900(int a1)
{
	int v1; // ecx
	int v2; // ecx
	int v3; // ecx
	int v5; // ecx
	int v6; // ecx
	int v7; // ecx

	if (a1 <= 512)
	{
		if (a1 == 512)
			return 9i64;
		if (a1 > 16)
		{
			v5 = a1 - 32;
			if (!v5)
				return 5i64;
			v6 = v5 - 32;
			if (!v6)
				return 6i64;
			v7 = v6 - 64;
			if (!v7)
				return 7i64;
			if (v7 == 128)
				return 8i64;
		}
		else
		{
			if (a1 == 16)
				return 4i64;
			v1 = a1 - 1;
			if (!v1)
				return 0i64;
			v2 = v1 - 1;
			if (!v2)
				return 1i64;
			v3 = v2 - 2;
			if (!v3)
				return 2i64;
			if (v3 == 4)
				return 3i64;
		}
		return 206i64;
	}
	if (a1 <= 0x4000)
	{
		switch (a1)
		{
		case 0x4000:
			return 100i64;
		case 0x400:
			return 10i64;
		case 0x800:
			return 11i64;
		case 0x1000:
			return 12i64;
		case 0x2000:
			return 13i64;
		}
		return 206i64;
	}
	if (a1 == 0x8000)
		return 101i64;
	if (a1 == 0x10000)
		return 102i64;
	if (a1 != 0x20000)
		return 206i64;
	return 103i64;
}

