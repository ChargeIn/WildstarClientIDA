#include "../winhttp.h"

//----- (00000001401703A0) ----------------------------------------------------
__int64 __fastcall sub_1401703A0(__int64 a1, signed int a2, int* a3, char a4)
{
	unsigned int v8; // ebp
	int v9; // ebx
	__int64 v11; // rdx
	int v12; // eax
	__int64 v13; // rcx
	char v14[4]; // [rsp+30h] [rbp-18h] BYREF
	int v15; // [rsp+34h] [rbp-14h] BYREF
	int v16[4]; // [rsp+38h] [rbp-10h] BYREF

	v8 = sub_1400D2120(a1, a2, a3, a4);
	if (!sub_140001D30(a1, a3) || a2)
		return v8;
	v14[0] = 0;
	v15 = -1;
	sub_14016E5E0(a1, v16, a3, v14, &v15);
	v9 = v16[0];
	if (v16[0] != 16)
	{
		if (v16[0] != -1)
		{
			if (v14[0])
			{
				if (v16[0] >= 0 && v16[0] < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
				{
					v11 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8i64 * v16[0]);
					if (v11)
					{
						if (*(_BYTE*)(v11 + 108))
							sub_14016E020(a1, v16);
						else
							sub_14016E090(a1, v16);
						*(_BYTE*)(a1 + 1368) = 1;
					}
				}
				v12 = *(_DWORD*)(a1 + 1568);
				*(_BYTE*)(a1 + 1368) = 1;
				if (v12 == -1)
					return 0i64;
				v16[0] = v9;
				v15 = v12;
				if (!sub_140170340(a1, &v15, v16))
					return 0i64;
			}
			else
			{
				v13 = a1;
			}
			v16[0] = v9;
			sub_14016E510(v13, v16, a4);
			*(_DWORD*)(a1 + 1572) = v9;
			return 0i64;
		}
		return v8;
	}
	if (a3[1] < *(_DWORD*)(a1 + 1372))
		sub_140170850(a1, a3);
	return 0i64;
}
// 1401704DF: variable 'v13' is possibly undefined
// 1401703A0: using guessed type char var_18[4];

