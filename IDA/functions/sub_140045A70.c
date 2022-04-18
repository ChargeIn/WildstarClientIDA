#include "../winhttp.h"

//----- (0000000140045A70) ----------------------------------------------------
__int64 __fastcall sub_140045A70(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
	int v4; // eax
	__int64 v6; // rax
	unsigned int v7; // r8d
	unsigned int v8; // r8d
	unsigned int v9; // r8d
	unsigned int v10; // r8d
	unsigned int v11; // r8d
	__int64 v12; // rax
	int v13; // [rsp+20h] [rbp-18h]

	v4 = *(_DWORD*)(a1 + 168);
	if (v4 == 3)
		return 1i64;
	if (v4 == 5)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 176);
	if (v6 && a2 == *(_DWORD*)(v6 + 152))
	{
		if (a3 > 0x715)
		{
			v10 = a3 - 1815;
			if (!v10)
				return 0i64;
			v11 = v10 - 74;
			if (v11)
			{
				if (v11 != 64)
					return 1i64;
				return sub_1400461E0(a1, a4);
			}
			else
			{
				return sub_140045E30(a1, a4);
			}
		}
		else
		{
			if (a3 == 1813)
				return 0i64;
			v7 = a3 - 231;
			if (!v7)
				return 0i64;
			v8 = v7 - 643;
			if (v8)
			{
				v9 = v8 - 119;
				if (v9)
					return v9 != 435;
				v13 = *(_DWORD*)a4;
				Apollo_LUAEvent(*(_QWORD*)(a1 + 72), "RealmBroadcast", byte_1409D10FC, *(_QWORD*)(a4 + 8), v13);
				return 0i64;
			}
			else
			{
				return sub_1400465C0(a1, (int*)a4);
			}
		}
	}
	else
	{
		v12 = *(_QWORD*)(a1 + 184);
		if (!v12 || a2 != *(_DWORD*)(v12 + 152))
			return 0i64;
		if (a3 != 3)
			return 1i64;
		return sub_140046340(a1);
	}
}
// 1409D10FC: using guessed type _BYTE byte_1409D10FC[3];

