#include "../winhttp.h"

//----- (000000014051E640) ----------------------------------------------------
__int64 __fastcall sub_14051E640(__int64 a1)
{
	__int64 v1; // rdx
	unsigned int v3; // ebx
	__int64 v4; // rax
	__int64 v5; // rcx
	int* v6; // rax
	int v7; // eax

	v1 = *(_QWORD*)(a1 + 16);
	v3 = 100;
	if (v1)
	{
		v4 = sub_1403ACBB0(qword_140C65898 + 160, v1);
		if (v4)
		{
			v5 = *(unsigned int*)(a1 + 24);
			if ((unsigned int)v5 < 8)
			{
				if (*(_DWORD*)(v4 + 4 * v5 + 188))
				{
					v6 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v4 + 4 * v5 + 188), 0i64);
					if (v6)
					{
						v7 = v6[2];
						if (v7 > 1)
						{
							if (v7 <= 3)
							{
								return 250;
							}
							else if (v7 <= 7)
							{
								return 1000i64;
							}
						}
					}
				}
			}
		}
	}
	return v3;
}
// 14051E688: conditional instruction was optimized away because ecx.4<8u
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

