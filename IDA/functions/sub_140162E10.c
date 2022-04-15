#include "../winhttp.h"

//----- (0000000140162E10) ----------------------------------------------------
__int64 __fastcall sub_140162E10(__int64 a1)
{
	int v2; // ecx
	int v3; // ebp
	int v4; // edi
	int v5; // edx
	__int64 v7; // [rsp+20h] [rbp-38h]
	__int64 v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 1036);
	if (v2 < *(_DWORD*)(a1 + 1144) && (*(_BYTE*)(a1 + 664) & 8) == 0)
	{
		v3 = *(_DWORD*)(a1 + 1144);
		v4 = *(_DWORD*)(a1 + 1032);
		v9 = 1;
		sub_1400D4070(a1, 0x2Cu, (char*)a1, "iiiii>b", v4 + 1, v3, v4 + 1, v2 + 1, 0i64, &v9);
		if (v9)
		{
			v5 = *(_DWORD*)(a1 + 1036);
			*(_DWORD*)(a1 + 1032) = v4;
			*(_DWORD*)(a1 + 1040) = v4;
			sub_1401603F0(a1, v5);
			LODWORD(v8) = v3;
			LODWORD(v7) = v4 + 1;
			sub_1400D4070(a1, 0x2Du, (char*)a1, byte_1409DC924, v7, v8, 0i64);
		}
	}
	return 0i64;
}
// 140162EE2: variable 'v7' is possibly undefined
// 140162EE2: variable 'v8' is possibly undefined
// 1409DC924: using guessed type _BYTE byte_1409DC924[32];

