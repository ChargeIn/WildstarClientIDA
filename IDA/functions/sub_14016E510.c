//----- (000000014016E510) ----------------------------------------------------
char __fastcall sub_14016E510(__int64 a1, int* a2, char a3)
{
	int v6; // eax
	char result; // al
	int v8; // ecx
	int v9; // [rsp+20h] [rbp-28h]
	__int64 v10; // [rsp+20h] [rbp-28h]
	__int64 v11; // [rsp+20h] [rbp-28h]
	int v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+28h] [rbp-20h]
	int v14; // [rsp+50h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1 + 664) & 1) == 0)
	{
		v6 = *(_DWORD*)(a1 + 1568);
		v14 = 1;
		v12 = v6;
		v9 = *a2;
		result = sub_1400D4070(a1, 0x41u, (char*)a1, "ii>b", v9, v12, &v14);
		if (v14)
		{
			v8 = *a2;
			LODWORD(v13) = *(_DWORD*)(a1 + 1568);
			*(_DWORD*)(a1 + 1568) = *a2;
			LODWORD(v10) = v8;
			result = sub_1400D4070(a1, 0x42u, (char*)a1, byte_1409DD50C, v10, v13);
			if (a3)
			{
				LODWORD(v11) = *(_DWORD*)(a1 + 1568);
				return sub_1400D4070(a1, 0x45u, (char*)a1, byte_1409DD4EC, v11);
			}
		}
	}
	return result;
}
// 14016E59B: variable 'v10' is possibly undefined
// 14016E59B: variable 'v13' is possibly undefined
// 14016E5C1: variable 'v11' is possibly undefined
// 1409DD4EC: using guessed type _BYTE byte_1409DD4EC[4];
// 1409DD50C: using guessed type _BYTE byte_1409DD50C[4];

