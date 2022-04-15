#include "../winhttp.h"

//----- (00000001403BB2B0) ----------------------------------------------------
__int64 __fastcall sub_1403BB2B0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
	unsigned int v4; // r10d
	bool v5; // cc
	unsigned __int8 v6; // r8
	__int64 v7; // rcx
	__int64 v9; // rcx

	v4 = 0;
	v5 = a3 <= a4;
	if (a3 >= a4)
	{
	LABEL_8:
		if (!v5 && a3 > 1u && a3 > (int)a4)
		{
			do
			{
				if (a3 <= 1u)
					break;
				v9 = a3--;
				v4 += *(_DWORD*)(*(_QWORD*)(a2 + 24) + 4 * v9);
			} while (a3 > (int)a4);
		}
		return v4;
	}
	if (!a3 || a4 <= 1u)
	{
		v5 = a3 <= a4;
		goto LABEL_8;
	}
	v6 = a3 + 1;
	if (v6 > (int)a4)
		return v4;
	do
	{
		v7 = v6++;
		v4 -= *(_DWORD*)(*(_QWORD*)(a2 + 24) + 4 * v7);
	} while (v6 <= (int)a4);
	return v4;
}

