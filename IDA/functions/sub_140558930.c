//----- (0000000140558930) ----------------------------------------------------
__int64 __fastcall sub_140558930(__int64 a1, int a2, int a3, int a4)
{
	_BYTE* v4; // rax
	int v7; // r8d
	__int64 v8; // rax
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned int v17; // r8d
	__int64 v19; // [rsp+40h] [rbp-28h] BYREF
	__int64 v20; // [rsp+48h] [rbp-20h]

	v4 = *(_BYTE**)(a1 + 80);
	if (v4 != *(_BYTE**)(a1 + 88))
	{
		*v4 = 0;
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(a1 + 80);
	}
	*(_DWORD*)a1 = a2;
	*(_DWORD*)(a1 + 24) = 0;
	switch (a2)
	{
	case 0:
		sub_140557C30(a1);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
		sub_140554EA0(a1, 1);
		break;
	case 1:
		if (a4)
			goto LABEL_7;
		if (*(_DWORD*)(a1 + 8))
		{
			if (!*(_DWORD*)(a1 + 56))
				LABEL_7:
			sub_140557470(a1);
			if (*(_DWORD*)(a1 + 8) && !*(_DWORD*)(a1 + 56))
				sub_140557E50(a1);
		}
		v7 = *(_DWORD*)(a1 + 20);
		goto LABEL_12;
	case 2:
		v8 = sub_1405A8A40(a1, a3);
		if (v8)
			sub_140557FD0(a1, v8, 0);
		sub_140426120(*(_QWORD*)(qword_140C65898 + 29504), *(_DWORD*)a1, a3);
		sub_140437A10((_QWORD*)qword_140C658D8, 0x162u, 0, 0i64, 0, 0, 1);
		break;
	case 3:
		v9 = sub_1405A8A40(a1, a3);
		v10 = sub_1405582B0(a1, &v19, 10, v9, 0, 0);
		v11 = *(_QWORD*)(a1 + 80);
		*(_QWORD*)(a1 + 80) = v10[1];
		v10[1] = v11;
		v12 = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(a1 + 88) = v10[2];
		v10[2] = v12;
		v13 = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(a1 + 96) = v10[3];
		v10[3] = v13;
		v14 = v20;
		if (v20)
			sub_14018B900(v20, 0);
		if (*(_DWORD*)a1)
		{
			v15 = sub_1405A8A40(v14, a3);
			if (v15)
				sub_140557FD0(a1, v15, 0);
		}
		goto LABEL_21;
	case 4:
		v16 = sub_1405A8A40(a1, a3);
		if (v16)
		{
			sub_140557FD0(a1, v16, 0);
			v7 = a3;
		}
		else
		{
		LABEL_21:
			v7 = a3;
		}
		goto LABEL_12;
	case 5:
		v17 = 49;
		goto LABEL_25;
	case 6:
		sub_140557470(a1);
		v7 = 0;
	LABEL_12:
		sub_140426120(*(_QWORD*)(qword_140C65898 + 29504), *(_DWORD*)a1, v7);
		break;
	case 7:
		v17 = 43;
		goto LABEL_25;
	case 8:
		sub_1403A0D80();
		goto LABEL_26;
	case 9:
		v17 = 70;
		goto LABEL_25;
	case 10:
		v17 = 71;
	LABEL_25:
		sub_1403A71F0(qword_140C65898, *(_DWORD*)(a1 + 4), v17, 1);
	LABEL_26:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
		break;
	default:
		break;
	}
	sub_14034BDD0(a1, 0);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	return 1i64;
}
// 140558A96: variable 'v14' is possibly undefined
// 140558B7E: variable 'a1' is possibly undefined
// 1409D0BFF: using guessed type _BYTE byte_1409D0BFF[19];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

