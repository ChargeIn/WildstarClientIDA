#include "../winhttp.h"

//----- (00000001403A2290) ----------------------------------------------------
__int64 __fastcall sub_1403A2290(__int64 a1, int a2)
{
	__int64 v5; // rbx
	int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // r10
	__int64 v15; // r10

	if (!a2)
		return 0i64;
	v5 = sub_1403D90D0(a1, a2);
	if (!v5)
		return 0i64;
	v6 = 0;
	if (*(_QWORD*)(a1 + 25744))
	{
		if (a2 == *(_DWORD*)(*(_QWORD*)(a1 + 25744) + 8i64))
			return 0i64;
	}
	v7 = *(_QWORD*)(a1 + 120);
	if (v7)
	{
		LOBYTE(v6) = a2 == *(_DWORD*)(v7 + 8);
		if (v6)
			return 0i64;
	}
	v8 = sub_1405B3F90(v5);
	if (!*(_QWORD*)(v8 + 5872) && !*(_QWORD*)(v8 + 5880))
		return 0i64;
	v9 = sub_1405B3F90(v5);
	v10 = *(_QWORD*)(v9 + 5872);
	if (!v10)
		v10 = *(_QWORD*)(v9 + 5880);
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 256i64))(v10))
		return 0i64;
	if (*(_QWORD*)(v5 + 24) || (v11 = *(_DWORD*)(v5 + 128), v11 == 20) || v11 == 23)
	{
		if ((unsigned int)sub_14046C6A0(v5))
			return 0i64;
		if ((dword_140DC21D8 & 1) != 0)
		{
			v13 = dword_140DC21DC;
		}
		else
		{
			dword_140DC21D8 |= 1u;
			v12 = sub_140200220(0x303u);
			if (v12)
			{
				v13 = *(_DWORD*)(v12 + 4);
				dword_140DC21DC = v13;
			}
			else
			{
				v13 = 1;
				dword_140DC21DC = 1;
			}
		}
		if (!v13 && *(int*)(v5 + 84) > 1)
		{
			v14 = *(_QWORD*)(a1 + 120);
			if (v14)
			{
				if ((unsigned int)sub_14045BED0(v5, *(_DWORD*)(v14 + 8)) || !(unsigned int)sub_14045A950(v15, a2))
					return 0i64;
			}
		}
	}
	if (*(_DWORD*)(a1 + 25820) && a2 == *(_DWORD*)(a1 + 25800))
		return 2i64;
	return 1i64;
}
// 1403A23DE: variable 'v15' is possibly undefined
// 140DC21D8: using guessed type int dword_140DC21D8;
// 140DC21DC: using guessed type int dword_140DC21DC;

