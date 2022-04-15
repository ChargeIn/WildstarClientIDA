#include "../winhttp.h"

//----- (00000001403B11B0) ----------------------------------------------------
__int64 __fastcall sub_1403B11B0(__int64 a1, __int64 a2, int* a3)
{
	int v7; // edi
	_DWORD* v8; // rbx
	int v9; // ebp
	unsigned int v10; // r8d
	char v11; // cl
	__int64 v12; // rax
	_DWORD* v13; // r8
	unsigned int v14; // r8d

	if (!a2)
		return 6i64;
	v7 = *a3;
	if ((*a3 & 0xFFFFFFF6) != 0 || v7 == 1)
		return 31i64;
	v8 = *(_DWORD**)(a2 + 64);
	if ((v8[85] & 0x100) != 0)
	{
		if (v7)
			goto LABEL_13;
		if ((unsigned int)(a3[1] - 17) > 0xD)
			return 31i64;
	}
	if (!v7)
	{
		v9 = a3[1];
		if ((unsigned int)(v9 - 17) <= 3 && (unsigned int)sub_1403B4DD0(a1) <= v9 - 17)
			return 31i64;
		if ((unsigned int)(v9 - 21) <= 9 && (unsigned int)sub_1403B4D60(a1) <= v9 - 21)
			return 31i64;
	}
LABEL_13:
	v10 = a3[1];
	v11 = v10;
	if ((unsigned int)(v7 - 8) <= 1)
		v11 = v10 % 0x11;
	if (((1 << v11) & v8[96]) == 0)
		return 31i64;
	v12 = *(_QWORD*)(a1 + 25744);
	if (!v12 || !*(_DWORD*)(v12 + 684) || !v7 && v10 - 16 <= 0xE)
	{
		if (v7 == 8)
		{
			if (!v8 || (v8[85] & 0x400) == 0 || !v8[96])
				return 31i64;
			return 0i64;
		}
		v13 = *(_DWORD**)(a2 + 72);
		if (v7 == 9)
		{
			if (!v13)
				v13 = v8 + 2;
			if (v8)
			{
				if ((v8[85] & 0x400) != 0 && v8[96])
				{
					v14 = sub_1403B4710(a1, v8, v13);
					if (v14 == 41 && a3[1] % 0x11u != 16)
						return 0i64;
					return v14;
				}
				return 31;
			}
		}
		else
		{
			if (!v13)
				v13 = v8 + 2;
			if (v8)
			{
				if ((v8[85] & 0x400) != 0 && v8[96])
					return sub_1403B4710(a1, v8, v13);
				return 31;
			}
		}
		return 6i64;
	}
	return 63i64;
}

