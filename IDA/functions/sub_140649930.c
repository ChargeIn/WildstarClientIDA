#include "../winhttp.h"

//----- (0000000140649930) ----------------------------------------------------
__int64 __fastcall sub_140649930(_QWORD* a1, __int64 a2)
{
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		v5 = sub_140059170(a1, 0x30ui64);
		*(_DWORD*)v5 = *(_DWORD*)(a2 + 8);
		*(_QWORD*)(v5 + 32) = 0i64;
		*(_DWORD*)(v5 + 40) = 0;
		*(_OWORD*)(v5 + 16) = 0i64;
		v6 = a1[4];
		v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Unit", 9ui64);
		v8 = a1[2];
		v9 = v7;
		v10 = 4;
		sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v9, v8);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}

