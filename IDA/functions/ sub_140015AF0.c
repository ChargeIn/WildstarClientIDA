//----- (0000000140015AF0) ----------------------------------------------------
void __fastcall sub_140015AF0(__int64 a1, __int64 a2, unsigned int* a3)
{
	_QWORD* v5; // rbx
	int v6; // eax
	__int64* v7; // rax
	__int64 v8; // [rsp+40h] [rbp+18h] BYREF

	if (a3)
	{
		switch (*a3)
		{
		case 1u:
			sub_1400035B0();
			qword_140C67098 = (__int64)sub_14003AF10;
			qword_140C67090 = (__int64)&unk_140C66750;
			return;
		case 3u:
		case 7u:
			return;
		case 4u:
		case 6u:
		case 0x17u:
			sub_1400035B0();
			return;
		case 9u:
			LODWORD(qword_140C66780) = 0;
			if (qword_140C66760)
			{
				sub_140019A80((__int64)&unk_140C66750, *(_QWORD**)(qword_140C66758 + 8));
				*(_QWORD*)(qword_140C66758 + 16) = qword_140C66758;
				*(_QWORD*)(qword_140C66758 + 8) = 0i64;
				*(_QWORD*)(qword_140C66758 + 24) = qword_140C66758;
				qword_140C66760 = 0i64;
			}
			goto LABEL_8;
		case 0x14u:
		case 0x15u:
			sub_1400035B0();
			goto LABEL_8;
		default:
		LABEL_8:
			v5 = *(_QWORD**)(a1 + 5288);
			if (!v5)
				return;
			break;
		}
		while (1)
		{
			v6 = (*(__int64(__fastcall**)(_QWORD*, unsigned int*))(*v5 + 96i64))(v5, a3);
			if (v6 < 0)
				break;
			if (v6)
			{
				v5 = (_QWORD*)v5[4];
				if (v5)
					continue;
			}
			return;
		}
		v7 = sub_14018D540(&v8, (__int64)L"Error on NC Platform event %d", *a3);
		sub_140015EC0(a1 - 264, *v7, 0i64, 0);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	}
}
// 1409E0648: using guessed type wchar_t aErrorOnNcPlatf[30];
// 140C66758: using guessed type __int64 qword_140C66758;
// 140C66760: using guessed type __int64 qword_140C66760;
// 140C66780: using guessed type __int64 qword_140C66780;
// 140C67090: using guessed type __int64 qword_140C67090;
// 140C67098: using guessed type __int64 qword_140C67098;

