#include "../winhttp.h"

//----- (00000001405CC9A0) ----------------------------------------------------
void __fastcall sub_1405CC9A0(unsigned __int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // rbx
	__int64 v5; // rcx

	if (*(_DWORD*)(a1 + 24))
	{
		v4 = *(_QWORD*)(a1 + 632);
		while (v4)
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 24);
			if (*(_DWORD*)(v5 + 12))
				sub_1405CC920(v5);
		}
	}
	else
	{
		sub_1405CCB20(a1, a2, a3, a4);
	}
}

