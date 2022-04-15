//----- (00000001405FB670) ----------------------------------------------------
__int64 __fastcall sub_1405FB670(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rsi
	__int64 v6; // rcx
	int v7; // ebx
	__int64 v8; // rcx
	unsigned int v9; // eax
	int v10; // r8d
	unsigned int v11; // ebx
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rcx
	__int64(__fastcall * *v15)(); // [rsp+48h] [rbp+10h] BYREF

	v4 = sub_1405A8A40(a1, *a2);
	if (!v4)
		return 2685075457i64;
	v7 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v4 + 8));
	if (!*(_QWORD*)(v4 + 104))
		sub_1407241F0(v6, v4);
	sub_1405FBDC0(a1, v4, a2[1], a2[2]);
	sub_140551170(v4, *a2, v7);
	if (v7 != 5 || a2[1] != 5)
	{
		v9 = a2[1];
		v10 = (v9 & 0xFFFFFFF9) == 0 && v9 != 2;
		sub_14043C490(v8, *a2, v10);
		v11 = *a2;
		sub_1405FCCB0(*(_QWORD*)qword_140C65B80);
		v15 = off_140B66F70;
		sub_14043B4E0(v12, v11, (__int64)&unk_140C7CD10, (unsigned int(__fastcall***)(_QWORD, __int64)) & v15);
		if ((_DWORD)qword_140C7DC60)
			sub_140554970(v4, a2[1]);
	}
	sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 160, *a2);
	if (qword_140C65B78)
		sub_140575DD0();
	if (a2[1] == 1)
	{
		v13 = dword_140C4DF40;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DF40)
			v13 = *(_DWORD*)qword_140C63750;
		if (byte_140C4DF50[v13])
			sub_140553890(v4, 0xFFFFFFFF);
	}
	v14 = *(_QWORD*)(qword_140C65898 + 29504);
	if ((*(_DWORD*)(*(_QWORD*)(v4 + 8) + 12i64) & 0x80000) != 0)
		sub_1400EA3E0(v14, "ContractStateChanged", byte_1409E91D4, *a2, a2[1]);
	else
		sub_1404261E0(v14, *a2, a2[1]);
	return 0i64;
}
// 1405FB6CF: variable 'v6' is possibly undefined
// 1405FB71A: variable 'v8' is possibly undefined
// 1405FB74A: variable 'v12' is possibly undefined
// 1409E91D4: using guessed type _BYTE byte_1409E91D4[24];
// 140B66F70: using guessed type __int64 (__fastcall *off_140B66F70[2])();
// 140C4DF40: using guessed type int dword_140C4DF40;
// 140C4DF50: using guessed type _BYTE byte_140C4DF50[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

