//----- (00000001407E3080) ----------------------------------------------------
__int64 __fastcall sub_1407E3080(UINT a1)
{
	UINT OEMCP; // eax
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+30h] [rbp-18h]
	char v6; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v4, 0i64);
	dword_140C603EC = 0;
	switch (a1)
	{
	case 0xFFFFFFFE:
		dword_140C603EC = 1;
		OEMCP = GetOEMCP();
	LABEL_5:
		a1 = OEMCP;
		break;
	case 0xFFFFFFFD:
		dword_140C603EC = 1;
		OEMCP = GetACP();
		goto LABEL_5;
	case 0xFFFFFFFC:
		dword_140C603EC = 1;
		a1 = *(_DWORD*)(v4 + 4);
		break;
	}
	if (v6)
		*(_DWORD*)(v5 + 200) &= ~2u;
	return a1;
}
// 140C603EC: using guessed type int dword_140C603EC;

