#include "../winhttp.h"

//----- (0000000140604F10) ----------------------------------------------------
void __fastcall sub_140604F10(__int64 a1, int a2, int a3)
{
	__int64 v3; // r9
	__int64 v6; // rax
	__int64 v7; // rdx
	unsigned __int8 v8; // r8
	__int64 v9; // rdx

	v3 = *(_QWORD*)(a1 + 64);
	if (v3)
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v6 && *(_DWORD*)(v6 + 20) || (*(_BYTE*)(v3 + 8) & 1) == 0)
		{
			sub_140604E20(a1, a1 + 80, 23);
		}
		else
		{
			v7 = *(_QWORD*)(qword_140C65898 + 120);
			if (v7)
			{
				if (*(_DWORD*)(v7 + 684))
				{
					sub_140604E20(a1, a1 + 80, 25);
				}
				else if (*(_DWORD*)(v7 + 56) == *(_DWORD*)(v3 + 56))
				{
					sub_140604E20(a1, a1 + 80, 26);
				}
				else
				{
					v8 = 0;
					if (*(_QWORD*)(v3 + 96))
						v9 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 8i64 * *(_QWORD*)(v3 + 104));
					else
						v9 = 0i64;
					if (*(_DWORD*)(v9 + 272))
					{
						if (*(_QWORD*)(v9 + 280))
							v8 = 1;
					}
					sub_1404274C0(*(_QWORD*)(qword_140C65898 + 29504), v8, a2, a3);
				}
			}
			else
			{
				sub_140604E20(a1, a1 + 80, 16);
			}
		}
	}
	else
	{
		sub_140604E20(a1, a1 + 80, 13);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

