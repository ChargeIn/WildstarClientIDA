#include "../winhttp.h"

//----- (00000001404A0D00) ----------------------------------------------------
bool __fastcall sub_1404A0D00(__int64 a1, __int64 a2, int a3, int a4)
{
	bool result; // al
	int v5; // ecx
	int v6; // r8d

	result = 0;
	if (a2)
	{
		v5 = *(_DWORD*)(a2 + 320);
		v6 = a3 - 1;
		if (v6)
		{
			if (v6 == 1)
				return v5 != a4;
		}
		else
		{
			return v5 == a4;
		}
	}
	return result;
}

