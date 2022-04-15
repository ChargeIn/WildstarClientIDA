#include "../winhttp.h"

//----- (0000000140265780) ----------------------------------------------------
__int64 __fastcall sub_140265780(_WORD* a1, _DWORD* a2, int a3)
{
	_DWORD* v3; // r9
	unsigned __int64 v5; // r11
	unsigned int v6; // edx
	unsigned int v7; // edx
	__int64 result; // rax
	unsigned int v9; // edx
	unsigned int v10; // edx
	int v11; // [rsp+10h] [rbp+10h]

	v3 = a2;
	v5 = (unsigned __int64)&a2[4 * a3];
	if ((unsigned __int64)a2 < v5)
	{
		do
		{
			if (a1)
			{
				v6 = *v3 & 0x7FFFFFFF;
				if (v6 >= 0x33800000)
				{
					if (v6 > 0x387FEFFF)
					{
						if (v6 > 0x47FFEFFF)
							LOWORD(v7) = 17407;
						else
							v7 = (v6 - 939520000) >> 13;
					}
					else
					{
						result = v6 >> 23;
						v7 = (((*v3 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v7) = 0;
				}
				*a1 = HIWORD(*v3) & 0x8000 | v7;
				v11 = v3[1];
				v9 = v11 & 0x7FFFFFFF;
				if ((v11 & 0x7FFFFFFFu) >= 0x33800000)
				{
					if (v9 > 0x387FEFFF)
					{
						if (v9 > 0x47FFEFFF)
							LOWORD(v10) = 17407;
						else
							v10 = (v9 - 939520000) >> 13;
					}
					else
					{
						result = v9 >> 23;
						v10 = (((v11 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v10) = 0;
				}
				a1[1] = HIWORD(v11) & 0x8000 | v10;
			}
			v3 += 4;
			a1 += 2;
		} while ((unsigned __int64)v3 < v5);
	}
	return result;
}

