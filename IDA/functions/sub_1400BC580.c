//----- (00000001400BC580) ----------------------------------------------------
__int64 __fastcall sub_1400BC580(__int64 a1, int a2, unsigned int a3)
{
	unsigned int v3; // esi
	__int64 v5; // rbx
	int v6; // edx
	int v7; // ecx
	int v8; // eax
	void* v9; // rcx
	__int64 v10; // r12
	__int64 v11; // rbp
	__int64 v12; // rbx
	__int64 v13; // r15
	int* v14; // rax
	int* v15; // r14
	int* v16; // rdx
	__int64 v17; // rcx

	v3 = a3;
	v5 = a2;
	if (!a2)
	{
		if (*(_DWORD*)(a1 + 288) != a3)
		{
			v6 = dword_140C3BF70;
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
				v6 = *(_DWORD*)qword_140C63750;
			sub_14001A770((__int64)&off_140C3BF60, v6, 0);
			*(_DWORD*)(a1 + 288) = v3;
		}
		v7 = dword_140C3BF70;
		v8 = dword_140C3BF70;
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v8 = *(_DWORD*)qword_140C63750;
		if (*((_DWORD*)&off_140C3BF60 + v8 + 8))
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
				v7 = *(_DWORD*)qword_140C63750;
			v3 = *((_DWORD*)&off_140C3BF60 + v7 + 8);
		}
	}
	switch ((int)v5)
	{
	case 0:
		if ((dword_140C8CD58 & 1) == 0)
		{
			dword_140C8CD58 |= 1u;
			sub_1401AD620((__int64)&unk_140C8CD60, L"ZoneKit 0 World");
		}
		v9 = &unk_140C8CD60;
		goto LABEL_37;
	case 1:
		if ((dword_140C8CD58 & 2) == 0)
		{
			dword_140C8CD58 |= 2u;
			sub_1401AD620((__int64)&unk_140C8CE80, L"ZoneKit 1 HousingMusic");
		}
		v9 = &unk_140C8CE80;
		goto LABEL_37;
	case 2:
		if ((dword_140C8CD58 & 4) == 0)
		{
			dword_140C8CD58 |= 4u;
			sub_1401AD620((__int64)&unk_140C8CFA0, L"ZoneKit 2 ClientEvent");
		}
		v9 = &unk_140C8CFA0;
		goto LABEL_37;
	case 3:
		if ((dword_140C8CD58 & 8) == 0)
		{
			dword_140C8CD58 |= 8u;
			sub_1401AD620((__int64)&unk_140C8D0C0, L"ZoneKit 3 WorldProp");
		}
		v9 = &unk_140C8D0C0;
		goto LABEL_37;
	case 4:
		if ((dword_140C8CD58 & 0x10) == 0)
		{
			dword_140C8CD58 |= 0x10u;
			sub_1401AD620((__int64)&unk_140C8D1E0, L"ZoneKit 4 PlayerPath");
		}
		v9 = &unk_140C8D1E0;
		goto LABEL_37;
	case 5:
		if ((dword_140C8CD58 & 0x20) == 0)
		{
			dword_140C8CD58 |= 0x20u;
			sub_1401AD620((__int64)&unk_140C8D300, L"ZoneKit 5 Dead");
		}
		v9 = &unk_140C8D300;
		goto LABEL_37;
	case 6:
		if ((dword_140C8CD58 & 0x40) == 0)
		{
			dword_140C8CD58 |= 0x40u;
			sub_1401AD620((__int64)&unk_140C8D420, L"ZoneKit 6 Visuals");
		}
		v9 = &unk_140C8D420;
		goto LABEL_37;
	case 7:
		if ((dword_140C8CD58 & 0x80u) == 0)
		{
			dword_140C8CD58 |= 0x80u;
			sub_1401AD620((__int64)&unk_140C8D540, L"ZoneKit 7 StoreMusic");
		}
		v9 = &unk_140C8D540;
	LABEL_37:
		sub_1401ADA40((__int64)v9, v3);
		break;
	default:
		break;
	}
	v10 = 0i64;
	v11 = v5;
	if (*(_QWORD*)(a1 + 280) <= v5)
	{
		do
		{
			v12 = *(_QWORD*)(a1 + 280);
			v13 = v12 + 1;
			v14 = sub_14018DB00(*(_QWORD*)(a1 + 272), v12 + 1, 8i64);
			v15 = v14;
			*(_QWORD*)&v14[2 * v12] = 0i64;
			v16 = *(int**)(a1 + 272);
			if (v16 != v14)
			{
				sub_1407DB590(v14, v16, 8i64 * *(_QWORD*)(a1 + 280));
				v17 = *(_QWORD*)(a1 + 272);
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				*(_QWORD*)(a1 + 272) = v15;
			}
			*(_QWORD*)(a1 + 280) = v13;
		} while (v13 <= v11);
	}
	if (v3 && (unsigned __int64)v3 < *(_QWORD*)(a1 + 176))
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * v3);
	*(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v11) = v10;
	return 0i64;
}
// 140A141F0: using guessed type wchar_t aZonekit2Client[22];
// 140A14220: using guessed type wchar_t aZonekit1Housin[23];
// 140A14250: using guessed type wchar_t aZonekit0World[16];
// 140A14280: using guessed type wchar_t aZonekit6Visual[18];
// 140A142A8: using guessed type wchar_t aZonekit5Dead[15];
// 140A142C8: using guessed type wchar_t aZonekit4Player[21];
// 140A142F8: using guessed type wchar_t aZonekit3Worldp[20];
// 140A14360: using guessed type wchar_t aZonekit7Storem[21];
// 140C3BF60: using guessed type __int64 (__fastcall **off_140C3BF60)();
// 140C3BF70: using guessed type int dword_140C3BF70;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C8CD58: using guessed type int dword_140C8CD58;

