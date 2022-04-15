#include "../winhttp.h"

//----- (00000001405BE210) ----------------------------------------------------
__int64 __fastcall sub_1405BE210(__int64 a1, unsigned int a2, int a3)
{
	__int64 result; // rax
	int v5; // ecx

	result = sub_140246480(a2);
	if (result)
	{
		v5 = *(_DWORD*)(result + 28);
		if (a3 != 100)
			return (unsigned int)(int)(float)((float)((float)a3 * 0.0099999998) * (float)v5);
		return (unsigned int)v5;
	}
	return result;
}

