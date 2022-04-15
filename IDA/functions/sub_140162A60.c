#include "../winhttp.h"

//----- (0000000140162A60) ----------------------------------------------------
__int64 __fastcall sub_140162A60(__int64 a1)
{
	int v2; // ecx
	int v3; // edi
	int v4; // esi
	int v5; // ebp
	__int64 v7; // [rsp+20h] [rbp-38h]
	__int64 v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 1032);
	if (v2 < *(_DWORD*)(a1 + 1160) - 1)
	{
		v3 = v2 + 1;
		v4 = *(_DWORD*)(a1 + 1036) + 1;
		v5 = v2 + 2;
		v9 = 1;
		sub_1400D4070(a1, 0x2Cu, (char*)a1, "iiiii>b", v2 + 2, v4, v2 + 1, v4, 0i64, &v9);
		if (v9)
		{
			*(_DWORD*)(a1 + 1032) = v3;
			*(_DWORD*)(a1 + 1040) = v3;
			sub_140160280(a1, v3);
			LODWORD(v8) = v4;
			LODWORD(v7) = v5;
			sub_1400D4070(a1, 0x2Du, (char*)a1, byte_1409DC844, v7, v8, 0i64);
		}
	}
	return 0i64;
}
// 140162B21: variable 'v7' is possibly undefined
// 140162B21: variable 'v8' is possibly undefined
// 1409DC844: using guessed type _BYTE byte_1409DC844[40];

