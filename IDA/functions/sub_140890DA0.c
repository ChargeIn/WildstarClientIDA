#include "../winhttp.h"

//----- (0000000140890DA0) ----------------------------------------------------
void __fastcall sub_140890DA0(__int64 a1, __int64 a2)
{
	_DWORD** v4; // rbp
	_DWORD* i; // rbx
	_DWORD* v6; // rcx
	__int64 v7; // r8
	unsigned __int64 v8; // rsi
	_DWORD* v9; // rcx

	if (*(_QWORD*)(a1 + 64))
		sub_140890DA0();
	v4 = *(_DWORD***)(a1 + 216);
	if (v4)
	{
		for (i = *v4; i != v4[1]; i += 6)
		{
			v6 = *(_DWORD**)a2;
			while (v6 != *(_DWORD**)(a2 + 8))
			{
				if (*v6 == *i)
				{
					v7 = *(_QWORD*)(a2 + 8);
					if ((unsigned int)((v7 - *(_QWORD*)a2) / 24) > 1)
					{
						*v6 = *(_DWORD*)(v7 - 24);
						v6[1] = *(_DWORD*)(v7 - 20);
						v6[2] = *(_DWORD*)(v7 - 16);
						v6[3] = *(_DWORD*)(v7 - 12);
						v6[4] = *(_DWORD*)(v7 - 8);
						v6[5] = *(_DWORD*)(v7 - 4);
					}
					*(_QWORD*)(a2 + 8) -= 24i64;
				}
				else
				{
					v6 += 6;
				}
			}
			v8 = (unsigned int)((*(_DWORD*)(a2 + 8) - *(_DWORD*)a2) / 24);
			if ((v8 < *(unsigned int*)(a2 + 16) || sub_140890F10(a2, 2)) && v8 < *(unsigned int*)(a2 + 16))
			{
				v9 = *(_DWORD**)(a2 + 8);
				*(_QWORD*)(a2 + 8) = v9 + 6;
				if (v9)
				{
					*v9 = *i;
					v9[1] = i[1];
					v9[2] = i[2];
					v9[3] = i[3];
					v9[4] = i[4];
					v9[5] = i[5];
				}
			}
		}
	}
}

