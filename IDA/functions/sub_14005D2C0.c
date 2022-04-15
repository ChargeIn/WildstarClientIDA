#include "../winhttp.h"

//----- (000000014005D2C0) ----------------------------------------------------
__int64 __fastcall sub_14005D2C0(__int64 a1)
{
	__int64 i; // rsi
	__int64 v3; // rbx
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	int v7; // ecx
	__int64 v8; // rcx
	int v9; // eax
	int v10; // eax

	for (i = 0i64; *(_QWORD*)(a1 + 56); i += v8)
	{
		v3 = *(_QWORD*)(a1 + 56);
		v4 = *(unsigned __int8*)(v3 + 8);
		*(_BYTE*)(v3 + 9) |= 4u;
		v5 = v4 - 5;
		if (v5)
		{
			v6 = v5 - 1;
			if (v6)
			{
				v7 = v6 - 2;
				if (v7)
				{
					if (v7 == 1)
					{
						*(_QWORD*)(a1 + 56) = *(_QWORD*)(v3 + 104);
						sub_14005CE80(a1, v3);
						v8 = 4
							* (*(int*)(v3 + 80)
								+ *(int*)(v3 + 84)
								+ 30i64
								+ 2 * (*(int*)(v3 + 72) + *(int*)(v3 + 88) + 2 * (*(int*)(v3 + 76) + (__int64)*(int*)(v3 + 92))));
					}
					else
					{
						v8 = 0i64;
					}
				}
				else
				{
					*(_QWORD*)(a1 + 56) = *(_QWORD*)(v3 + 160);
					*(_QWORD*)(v3 + 160) = *(_QWORD*)(a1 + 64);
					*(_QWORD*)(a1 + 64) = v3;
					*(_BYTE*)(v3 + 9) &= ~4u;
					sub_14005D0D0(a1, v3);
					v8 = 16i64 * *(int*)(v3 + 88) + 8 * (5i64 * *(int*)(v3 + 92) + 23);
				}
			}
			else
			{
				*(_QWORD*)(a1 + 56) = *(_QWORD*)(v3 + 16);
				sub_14005CF80(a1, v3);
				v9 = *(unsigned __int8*)(v3 + 11);
				if (*(_BYTE*)(v3 + 10))
					v10 = 16 * v9 + 40;
				else
					v10 = 8 * v9 + 40;
				v8 = v10;
			}
		}
		else
		{
			*(_QWORD*)(a1 + 56) = *(_QWORD*)(v3 + 48);
			if ((unsigned int)sub_14005CCB0(a1, v3))
				*(_BYTE*)(v3 + 9) &= ~4u;
			v8 = 16 * (*(int*)(v3 + 56) + 4i64) + 40 * (1i64 << *(_BYTE*)(v3 + 11));
		}
	}
	return i;
}

