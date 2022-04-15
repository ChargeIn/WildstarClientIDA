#include "../winhttp.h"

//----- (0000000140162D20) ----------------------------------------------------
__int64 __fastcall sub_140162D20(__int64 a1)
{
	int v2; // ecx
	int v3; // edi
	int v4; // edx
	int v6; // [rsp+20h] [rbp-38h]
	__int64 v7; // [rsp+20h] [rbp-38h]
	int v8; // [rsp+28h] [rbp-30h]
	__int64 v9; // [rsp+28h] [rbp-30h]
	int v10; // [rsp+30h] [rbp-28h]
	int v11; // [rsp+38h] [rbp-20h]
	int v12; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 1036);
	if (v2 > 0 && (*(_BYTE*)(a1 + 664) & 8) == 0)
	{
		v11 = v2 + 1;
		v3 = *(_DWORD*)(a1 + 1032);
		v10 = v3 + 1;
		v8 = 1;
		v6 = v3 + 1;
		v12 = 1;
		sub_1400D4070(a1, 0x2Cu, (char*)a1, "iiiii>b", v6, v8, v10, v11, 0i64, &v12);
		if (v12)
		{
			v4 = *(_DWORD*)(a1 + 1036);
			*(_DWORD*)(a1 + 1032) = v3;
			*(_DWORD*)(a1 + 1040) = v3;
			sub_1401603F0(a1, v4);
			LODWORD(v9) = 1;
			LODWORD(v7) = v3 + 1;
			sub_1400D4070(a1, 0x2Du, (char*)a1, byte_1409DC904, v7, v9, 0i64);
		}
	}
	return 0i64;
}
// 140162DED: variable 'v7' is possibly undefined
// 140162DED: variable 'v9' is possibly undefined
// 1409DC904: using guessed type _BYTE byte_1409DC904[32];

