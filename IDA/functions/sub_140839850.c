#include "../winhttp.h"

//----- (0000000140839850) ----------------------------------------------------
void __fastcall sub_140839850(__int64 a1, int a2, __int64 a3)
{
	int v3; // edx
	int v4; // eax
	int v5; // eax

	if (*(_QWORD*)(a1 + 104) == a3 || !a3)
	{
		if (a2)
		{
			v3 = a2 - 1;
			if (v3)
			{
				if (v3 == 1)
				{
					v4 = *(_DWORD*)(a1 + 200);
					if (v4)
					{
						v5 = v4 - 1;
						*(_DWORD*)(a1 + 200) = v5;
						if (!v5 && *(_DWORD*)(a1 + 96) != 1)
							sub_140839AD0(a1, 0, 4);
					}
				}
			}
			else if (*(_DWORD*)(a1 + 96))
			{
				++* (_DWORD*)(a1 + 200);
			}
		}
		else
		{
			*(_DWORD*)(a1 + 96) = 0;
			*(_DWORD*)(a1 + 200) = 0;
			*(_DWORD*)(a1 + 176) = 0;
		}
	}
}

