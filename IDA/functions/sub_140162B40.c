//----- (0000000140162B40) ----------------------------------------------------
__int64 __fastcall sub_140162B40(__int64 a1)
{
	int v2; // ecx
	int v3; // ebp
	int v4; // edi
	int v5; // edx
	int v7; // [rsp+20h] [rbp-38h]
	__int64 v8; // [rsp+20h] [rbp-38h]
	int v9; // [rsp+28h] [rbp-30h]
	__int64 v10; // [rsp+28h] [rbp-30h]
	int v11; // [rsp+30h] [rbp-28h]
	int v12; // [rsp+38h] [rbp-20h]
	int v13; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 1036);
	if (v2 > 0 && (*(_BYTE*)(a1 + 664) & 8) == 0)
	{
		v3 = v2;
		v4 = *(_DWORD*)(a1 + 1032);
		v12 = v2 + 1;
		v11 = v4 + 1;
		v9 = v2;
		v13 = 1;
		v7 = v4 + 1;
		sub_1400D4070(a1, 0x2Cu, (char*)a1, "iiiii>b", v7, v9, v11, v12, 0i64, &v13);
		if (v13)
		{
			v5 = *(_DWORD*)(a1 + 1036);
			*(_DWORD*)(a1 + 1032) = v4;
			*(_DWORD*)(a1 + 1040) = v4;
			sub_1401603F0(a1, v5);
			LODWORD(v10) = v3;
			LODWORD(v8) = v4 + 1;
			sub_1400D4070(a1, 0x2Du, (char*)a1, byte_1409DC944, v8, v10, 0i64);
		}
	}
	return 0i64;
}
// 140162C0C: variable 'v8' is possibly undefined
// 140162C0C: variable 'v10' is possibly undefined
// 1409DC944: using guessed type _BYTE byte_1409DC944[24];

