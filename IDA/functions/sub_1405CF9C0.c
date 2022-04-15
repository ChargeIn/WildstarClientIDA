#include "../winhttp.h"

//----- (00000001405CF9C0) ----------------------------------------------------
void __fastcall sub_1405CF9C0(_DWORD* a1, __int64 a2, double a3, double a4)
{
	__int64 v5; // rcx

	if (a1[18])
	{
		a1[19] = 1;
	}
	else
	{
		v5 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
		if (v5)
		{
			if (*(_DWORD*)(v5 + 692))
				sub_1405D3380(v5, a2, a3, a4);
		}
		a1[19] = 0;
	}
}

