//----- (00000001404BB380) ----------------------------------------------------
__int64 __fastcall sub_1404BB380(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	int v4; // edx
	void* v6; // rax
	__int64 v7; // rsi
	int* v8; // rax
	_WORD* v9; // rax
	__int64 v10; // rax
	__int16* v11; // rax
	__int16* v12; // rax
	__int16* v13; // rax
	__int16* v14; // rax
	__int16* v15; // rax
	__int16* v16; // rax
	__int16* v17; // rax
	__int16* v18; // rax
	int v19; // [rsp+20h] [rbp-18h]

	v2 = qword_140C659F0;
	v4 = *(_DWORD*)(a2 + 24);
	switch (v4)
	{
	case 12:
	case 13:
	case 44:
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"HousingNeighborInviteDeclined",
			byte_1409EC084,
			*(_QWORD*)(a2 + 16));
		return 0i64;
	case 16:
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"HousingNeighborInviteAccepted",
			byte_1409EC0A4,
			*(_QWORD*)(a2 + 16));
		v6 = *(void**)(a2 + 16);
		if (v6 && v6 != &unk_1409F08A4)
			return 0i64;
		*(_DWORD*)(v2 + 344) = 0;
		*(_QWORD*)(v2 + 352) = 0i64;
		v7 = *(_QWORD*)(v2 + 360);
		v8 = sub_14018B280(18i64, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = 0i64;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		*v9 = 0;
		*(_QWORD*)(v2 + 360) = v9;
		if (!v7)
			return 0i64;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		return 0i64;
	case 20:
		sub_1403CC530(qword_140C65898, 0x67u);
		goto LABEL_11;
	case 21:
	case 22:
	case 24:
	case 25:
	case 28:
	case 29:
	case 30:
	case 31:
	case 42:
	case 54:
	LABEL_11:
		v10 = sub_1405B1510(&qword_140C7DFB0);
		if (v10)
			sub_1405AAEB0(v10);
		v19 = *(_DWORD*)(a2 + 24);
		goto LABEL_24;
	case 50:
		v11 = sub_14034BDD0(a1, 695950);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v11, 0, 0i64);
		return 0i64;
	case 53:
		v12 = sub_14034BDD0(a1, 769895);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v12, 0, 0i64);
		return 0i64;
	case 55:
		v13 = sub_14034BDD0(a1, 770421);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v13, 0, 0i64);
		return 0i64;
	case 56:
		v14 = sub_14034BDD0(a1, 770420);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v14, 0, 0i64);
		return 0i64;
	case 57:
		v15 = sub_14034BDD0(a1, 770426);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v15, 0, 0i64);
		return 0i64;
	case 58:
		v16 = sub_14034BDD0(a1, 770427);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v16, 0, 0i64);
		return 0i64;
	case 59:
		v17 = sub_14034BDD0(a1, 770428);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v17, 0, 0i64);
		return 0i64;
	case 60:
		v18 = sub_14034BDD0(a1, 770452);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v18, 0, 0i64);
		return 0i64;
	case 61:
		sub_1403CC530(qword_140C65898, 0xAEu);
		return 0i64;
	default:
		v19 = v4;
	LABEL_24:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingResult", byte_1409EBB6C, *(_QWORD*)(a2 + 16), v19);
		return 0i64;
	}
}
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 1409EC084: using guessed type _BYTE byte_1409EC084[32];
// 1409EC0A4: using guessed type _BYTE byte_1409EC0A4[24];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

