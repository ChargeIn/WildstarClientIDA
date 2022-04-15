#include "../winhttp.h"

//----- (000000014077BB50) ----------------------------------------------------
void __fastcall sub_14077BB50(__int64 a1, int a2)
{
	unsigned int v3; // ecx
	unsigned int v4; // eax
	__int64 v5; // r8
	unsigned int v6; // r9d
	__int64 v7; // rax

	if (*(_DWORD*)(a1 + 296))
	{
		v3 = *(_DWORD*)(a1 + 184);
		v4 = *(_DWORD*)(a1 + 216);
		if (v4 < v3)
		{
			v5 = v4;
			v6 = v4 + 1;
			v7 = *(_QWORD*)(a1 + 176);
			*(_DWORD*)(a1 + 216) = v6;
			if (a2 == *(_DWORD*)(v7 + 4 * v5))
			{
				if (v6 == v3)
				{
					sub_1407797A0(a1, 1, 3);
					sub_14077B860(a1);
				}
			}
			else
			{
				sub_1407797A0(a1, 1, 2);
				sub_140779660(a1, 0i64);
			}
		}
	}
}

