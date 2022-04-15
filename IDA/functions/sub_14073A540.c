#include "../winhttp.h"

//----- (000000014073A540) ----------------------------------------------------
__int64 __fastcall sub_14073A540(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v6; // rsi
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		v6 = sub_140214E00(*(_DWORD*)(a2 + 16));
		if (v6)
		{
			v7 = sub_140059170(a1, 0x20ui64);
			*(_DWORD*)v7 = *(_DWORD*)(v6 + 12);
			v8 = *(_DWORD*)(v6 + 16);
			*(_DWORD*)(v7 + 8) = a3;
			*(_QWORD*)(v7 + 16) = a2;
			*(_QWORD*)(v7 + 24) = v6;
			*(_DWORD*)(v7 + 4) = v8 & 0x20;
			v9 = a1[4];
			v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.MatchMakingEntry", 0x15ui64);
			v11 = a1[2];
			v13 = v10;
			v14 = 4;
			sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}

