//----- (00000001406168F0) ----------------------------------------------------
__int64 __fastcall sub_1406168F0(__int64 a1, int a2)
{
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // edi
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int16* v11; // rax

	if (!*(_DWORD*)(a1 + 160) || a2 != 9)
	{
	LABEL_27:
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_DWORD*)(a1 + 32) = 0;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)a1 = 0;
		*(_DWORD*)(a1 + 104) = 0;
		sub_140008410(a1 + 40);
		sub_140008410(a1 + 72);
		*(_QWORD*)(a1 + 4) = 0i64;
		*(_DWORD*)(a1 + 12) = 0;
		return 0i64;
	}
	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 24));
	if (v3)
	{
		switch (*(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64))
		{
		case 0:
		case 2:
			v8 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v8 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8) == 166)
				v6 = dword_140B275D8[(unsigned int)sub_1401AE6F0(0, 4)];
			else
				v6 = dword_140B274F0[(unsigned int)sub_1401AE6F0(0, 4)];
			goto LABEL_25;
		case 1:
		case 3:
			v4 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v4 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) == 166)
				v6 = dword_140B276D0[(unsigned int)sub_1401AE6F0(0, 4)];
			else
				v6 = dword_140B27578[(unsigned int)sub_1401AE6F0(0, 4)];
			goto LABEL_25;
		case 4:
			v10 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v10 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10) == 166)
				v6 = dword_140B27670[(unsigned int)sub_1401AE6F0(0, 4)];
			else
				v6 = dword_140B27508[(unsigned int)sub_1401AE6F0(0, 4)];
			goto LABEL_25;
		case 5:
		case 6:
			v9 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v9 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9) == 166)
				v6 = dword_140B276E8[(unsigned int)sub_1401AE6F0(0, 4)];
			else
				v6 = dword_140B273C8[(unsigned int)sub_1401AE6F0(0, 4)];
			goto LABEL_25;
		case 7:
		case 8:
			v7 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v7 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7) == 166)
				v6 = dword_140B277F8[(unsigned int)sub_1401AE6F0(0, 4)];
			else
				v6 = dword_140B27468[(unsigned int)sub_1401AE6F0(0, 4)];
		LABEL_25:
			if (v6)
			{
				v11 = sub_14034BDD0(v5, v6);
				sub_140474B80(v3, 0x14u, (int*)v11);
				sub_140472ED0(v3, v6);
			}
			break;
		default:
			goto LABEL_27;
		}
		goto LABEL_27;
	}
	return 0i64;
}
// 140616AF6: variable 'v5' is possibly undefined
// 140B273C8: using guessed type int dword_140B273C8[6];
// 140B27468: using guessed type int dword_140B27468[6];
// 140B274F0: using guessed type int dword_140B274F0[6];
// 140B27508: using guessed type int dword_140B27508[6];
// 140B27578: using guessed type int dword_140B27578[6];
// 140B275D8: using guessed type int dword_140B275D8[6];
// 140B27670: using guessed type int dword_140B27670[6];
// 140B276D0: using guessed type int dword_140B276D0[6];
// 140B276E8: using guessed type int dword_140B276E8[6];
// 140B277F8: using guessed type int dword_140B277F8[36];
// 140C65898: using guessed type __int64 qword_140C65898;

