#include "../winhttp.h"

//----- (000000014039DD70) ----------------------------------------------------
void __fastcall sub_14039DD70(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v4; // rax
	int v9; // ebx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // eax
	int v14; // eax
	int v15; // eax

	v4 = *(_QWORD*)(a1 + 25744);
	if (v4)
	{
		v9 = *(_DWORD*)(v4 + 264);
		if (v9)
		{
			v10 = sub_1403D90D0(a1, v9);
			if (v10)
			{
				v11 = *(_DWORD*)(v10 + 128);
				if (v11 != 20 && v11 != 23 && (unsigned int)(v11 - 24) > 1)
				{
					if (a2)
					{
						v12 = *(_QWORD*)(a2 + 112);
						if ((*(_BYTE*)(v12 + 264) & 1) != 0)
						{
							v13 = dword_140C44D30;
							if (*(_DWORD*)qword_140C63750 < dword_140C44D30)
								v13 = *(_DWORD*)qword_140C63750;
							if (!*((_BYTE*)&dword_140C44D40 + v13))
							{
								v14 = dword_140C44D70;
								if (*(_DWORD*)qword_140C63750 < dword_140C44D70)
									v14 = *(_DWORD*)qword_140C63750;
								if (*((_BYTE*)&dword_140C44D80 + v14))
								{
									sub_14039DAF0(a1);
								}
								else
								{
									v15 = *(_DWORD*)(v12 + 124);
									if (v15 != 4 && (unsigned int)(v15 - 7) > 1)
										sub_14046BB00(*(_QWORD*)(a1 + 25744), v9, a3, a4);
								}
							}
						}
					}
				}
			}
		}
	}
}
// 140C44D30: using guessed type int dword_140C44D30;
// 140C44D40: using guessed type int dword_140C44D40;
// 140C44D70: using guessed type int dword_140C44D70;
// 140C44D80: using guessed type int dword_140C44D80;
// 140C63750: using guessed type __int64 qword_140C63750;

