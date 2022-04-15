//----- (0000000140069270) ----------------------------------------------------
void __fastcall sub_140069270(__int64 a1, int a2)
{
	__int64 v2; // rdi
	char v3; // al
	bool v6; // zf
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // r8d
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]
	char v12; // [rsp+2Ch] [rbp-Ch]
	char v13; // [rsp+2Dh] [rbp-Bh]
	char v14; // [rsp+2Eh] [rbp-Ah]

	v2 = *(_QWORD*)(a1 + 48);
	v11 = -1;
	v14 = 1;
	v3 = *(_BYTE*)(v2 + 74);
	v13 = 0;
	v12 = v3;
	v10 = *(_QWORD*)(v2 + 40);
	*(_QWORD*)(v2 + 40) = &v10;
	v6 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v6)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v7 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v7;
	}
	v8 = sub_140065780(a1);
	v9 = *(_DWORD*)(a1 + 16);
	if (v9 == 44)
	{
	LABEL_9:
		sub_140068FD0(a1, v8);
		goto LABEL_10;
	}
	if (v9 != 61)
	{
		if (v9 != 267)
			sub_140062CF0(a1, aOrInExpected, v9);
		goto LABEL_9;
	}
	sub_140068C50(a1, v8, a2);
LABEL_10:
	sub_1400656B0(a1, 262, 264, a2);
	sub_140065E10(v2);
}

