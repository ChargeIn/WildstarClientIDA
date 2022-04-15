//----- (0000000140162980) ----------------------------------------------------
__int64 __fastcall sub_140162980(__int64 a1)
{
	int v1; // eax
	int v3; // esi
	int v4; // edi
	int v6; // [rsp+20h] [rbp-38h]
	__int64 v7; // [rsp+20h] [rbp-38h]
	__int64 v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+60h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 1032);
	if (v1)
	{
		v3 = *(_DWORD*)(a1 + 1036) + 1;
		v4 = v1 - 1;
		v6 = *(_DWORD*)(a1 + 1032);
		v9 = 1;
		sub_1400D4070(a1, 0x2Cu, (char*)a1, "iiiii>b", v6, v3, v1 + 1, v3, 0i64, &v9);
		if (v9)
		{
			*(_DWORD*)(a1 + 1032) = v4;
			*(_DWORD*)(a1 + 1040) = v4;
			sub_140160280(a1, v4);
			LODWORD(v8) = v3;
			LODWORD(v7) = v4 + 1;
			sub_1400D4070(a1, 0x2Du, (char*)a1, byte_1409DC7F4, v7, v8, 0i64);
		}
	}
	return 0i64;
}
// 140162A38: variable 'v7' is possibly undefined
// 140162A38: variable 'v8' is possibly undefined
// 1409DC7F4: using guessed type _BYTE byte_1409DC7F4[80];

