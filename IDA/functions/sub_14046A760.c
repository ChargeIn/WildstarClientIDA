#include "../winhttp.h"

//----- (000000014046A760) ----------------------------------------------------
__int64 __fastcall sub_14046A760(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // r10
	int v6; // r9d
	float** v8; // r8
	float* v9; // rdx
	int v10; // ecx
	int v11; // ecx
	int v12; // ecx
	unsigned int v13; // eax

	v3 = *(_QWORD*)(a1 + 5656);
	v6 = a3;
	if (!v3)
		return a3;
	v8 = *(float***)(a1 + 5648);
	do
	{
		v9 = *v8;
		if (*(_DWORD*)*v8 == 3 && a2 == *((_DWORD*)v9 + 1))
		{
			v10 = *((_DWORD*)v9 + 2);
			if (v10)
			{
				v11 = v10 - 1;
				if (v11)
				{
					v12 = v11 - 1;
					if (v12)
					{
						if (v12 == 1)
							v6 = (int)v9[3];
					}
					else
					{
						v6 += (int)v9[3];
					}
				}
				else
				{
					v6 = (int)(float)((float)v6 * v9[3]);
				}
			}
			else
			{
				v13 = (int)(float)((float)(int)a3 * v9[3]);
				if (v13 > a3)
					v13 = a3;
				v6 = v13;
			}
		}
		++v8;
		--v3;
	} while (v3);
	return (unsigned int)v6;
}

