#include "../winhttp.h"

//----- (00000001404A0F90) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A0F90(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r11
	unsigned int v12; // r8d
	__int64 v13; // rdx
	__int64 v14; // rdx

	if (!qword_140C65B90)
		return 0i64;
	if (!a2)
		return 0i64;
	v7 = sub_140246480(a4);
	if (!v7)
		return 0i64;
	v9 = sub_1405BE150(v8, *(_DWORD*)(v7 + 4));
	if (!v9)
		return 0i64;
	v12 = *(_DWORD*)(v9 + 12);
	if ((*(_BYTE*)(a2 + 332) & 1) != 0)
	{
		if (v12)
		{
			do
			{
				v13 = v12 - 1;
				v10 = 6 * v13;
				if (*(_DWORD*)(a2 + 352) >= *(_DWORD*)(v9 + 48 * v13 + 52))
					return sub_1404A2090(v10, a3, v12, *(_DWORD*)(v11 + 8));
				--v12;
			} while ((_DWORD)v13);
		}
	}
	else if (v12)
	{
		do
		{
			v14 = v12 - 1;
			v10 = 6 * v14;
			if (*(_DWORD*)(a2 + 348) >= *(_DWORD*)(v9 + 48 * v14 + 52))
				return sub_1404A2090(v10, a3, v12, *(_DWORD*)(v11 + 8));
			--v12;
		} while ((_DWORD)v14);
	}
	v12 = 1;
	return sub_1404A2090(v10, a3, v12, *(_DWORD*)(v11 + 8));
}
// 1404A0FCF: variable 'v8' is possibly undefined
// 1404A105F: variable 'v10' is possibly undefined
// 1404A104F: variable 'v11' is possibly undefined
// 140C65B90: using guessed type __int64 qword_140C65B90;

