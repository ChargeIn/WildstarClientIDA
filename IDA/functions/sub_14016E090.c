//----- (000000014016E090) ----------------------------------------------------
char __fastcall sub_14016E090(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v4; // r8
	int v6; // [rsp+20h] [rbp-18h]

	LODWORD(v2) = *a2;
	if (*a2 >= 0 && (int)v2 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
	{
		v2 = *(_QWORD*)(a1 + 1416);
		v4 = *(_QWORD*)(v2 + 8i64 * *a2);
		if (v4)
		{
			*(_BYTE*)(v4 + 108) = 1;
			v6 = *a2;
			LOBYTE(v2) = sub_1400D4070(a1, 0x43u, (char*)a1, byte_1409DD4CC, v6);
			*(_BYTE*)(a1 + 1368) = 1;
		}
	}
	return v2;
}
// 1409DD4CC: using guessed type _BYTE byte_1409DD4CC[4];

