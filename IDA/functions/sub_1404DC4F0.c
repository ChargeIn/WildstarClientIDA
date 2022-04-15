//----- (00000001404DC4F0) ----------------------------------------------------
__int64 __fastcall sub_1404DC4F0(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rax
	unsigned int v9; // edx
	int* v10; // rax
	__int16* v11; // rax

	sub_1400B6390((_QWORD*)a1);
	*(_QWORD*)a1 = off_140B69300;
	if (a2)
	{
		v7 = *(_DWORD*)(a2 + 476);
		if (v7)
			goto LABEL_12;
	}
	if ((dword_140DC31C4 & 1) != 0)
	{
		if (dword_140DC31CC)
		{
			v9 = dword_140DC31C8;
			goto LABEL_10;
		}
	}
	else
	{
		dword_140DC31C4 |= 1u;
	}
	dword_140DC31CC = 1;
	v8 = sub_140200220(0x4BEu);
	if (v8)
	{
		v9 = *(_DWORD*)(v8 + 4);
		dword_140DC31C8 = v9;
	}
	else
	{
		v9 = 0;
		dword_140DC31C8 = 0;
	}
LABEL_10:
	v10 = sub_1400B5DF0(qword_140C658F0, v9, 0i64);
	if (v10)
	{
		v7 = v10[119];
		if (v7)
		{
		LABEL_12:
			v11 = sub_14034BDD0(v6, v7);
			(*(void(__fastcall**)(__int64, const wchar_t*, __int16*))(*(_QWORD*)a1 + 160i64))(a1, L"name", v11);
			*(_DWORD*)(a1 + 8) = a3;
			*(float*)(a1 + 12) = (float)a3;
		}
	}
	return a1;
}
// 1404DC596: variable 'v6' is possibly undefined
// 140B0AAF8: using guessed type wchar_t aName_17[5];
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC31C4: using guessed type int dword_140DC31C4;
// 140DC31C8: using guessed type int dword_140DC31C8;
// 140DC31CC: using guessed type int dword_140DC31CC;

