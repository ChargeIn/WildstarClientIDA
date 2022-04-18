#include "../winhttp.h"

//----- (00000001403B9410) ----------------------------------------------------
__int64 __fastcall sub_1403B9410(__int64 a1, __int64 a2)
{
	int v4; // ebx
	unsigned int v5; // r11d
	__int64 v6; // r9
	unsigned int v7; // r11d
	unsigned int v8; // eax
	__int64 v9; // rcx
	int v10; // r11d
	unsigned int v11; // eax
	__int64 i; // rax
	int v13; // edx

	v4 = sub_1403BAD30(a1, *(_DWORD*)a2, *(_BYTE*)(a2 + 5));
	if (*(_DWORD*)(a2 + 8))
	{
		if (!sub_1403BB170(a1, v5))
			sub_1403BADB0(a1, v7, *(_BYTE*)(a2 + 5));
		v6 = *(unsigned __int8*)(a2 + 4);
		if ((_BYTE)v6)
			sub_1403BB200(a1, *(_DWORD*)a2, *(_BYTE*)(a2 + 5), v6);
	}
	else
	{
		sub_1403BAEA0(a1, v5, *(_BYTE*)(a2 + 5));
	}
	if (v4)
	{
		v8 = sub_1403BAD30(a1, *(_DWORD*)a2, *(_BYTE*)(a2 + 5));
		v6 = v8;
		if (v8 || (v11 = sub_1407A1440(v9, v10, 1u), (v6 = v11) != 0))
		{
			if (v4 != (_DWORD)v6)
			{
				for (i = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64); i; i = *(_QWORD*)(i + 136))
				{
					v13 = *(_DWORD*)(i + 4);
					if ((unsigned int)(v13 - 1) <= 1 && *(_DWORD*)(i + 8) == v4)
					{
						*(_DWORD*)(i + 8) = v6;
						if (v13 == 1)
							*(_DWORD*)(i + 12) = v6;
					}
				}
			}
		}
	}
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "AbilityBookChange", &unk_1409D10C6, v6);
	return 0i64;
}
// 1403B9448: variable 'v5' is possibly undefined
// 1403B9463: variable 'v7' is possibly undefined
// 1403B94A6: variable 'v9' is possibly undefined
// 1403B94A6: variable 'v10' is possibly undefined
// 1403B950E: variable 'v6' is possibly undefined

