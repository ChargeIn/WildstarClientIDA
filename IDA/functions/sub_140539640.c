#include "../winhttp.h"

//----- (0000000140539640) ----------------------------------------------------
__int64 __fastcall sub_140539640(_QWORD* a1, int a2)
{
	__int64 v3; // rcx
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64* v8; // rbx
	_QWORD* v9; // rcx
	__int16* v10; // rax
	bool v11; // zf
	__int64 v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int16 v17[264]; // [rsp+40h] [rbp-228h] BYREF

	v3 = a1[3761];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[3761] = 0i64;
	}
	v5 = (void(__fastcall***)(_QWORD, __int64))a1[3690];
	if (v5)
		(**v5)(v5, 1i64);
	v6 = a1[3752];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[3752] = 0i64;
	}
	sub_14053C0D0(a1 + 3750);
	v7 = a1[3693];
	if (v7)
	{
		sub_140611940(a1[3693]);
		sub_14018B900(v7, 0);
	}
	v8 = (__int64*)a1[3692];
	a1[3693] = 0i64;
	if (v8)
	{
		sub_14050B150(v8);
		sub_14018B900((__int64)v8, 0);
	}
	v9 = (_QWORD*)qword_140C65B88;
	a1[3692] = 0i64;
	if (v9)
		sub_1405BB940(v9);
	if (a1[3688])
	{
		if ((int)sub_14001B370(
			v17,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			L"Addons.xml") >= 0
			&& v17[0])
		{
			v10 = v17;
			do
			{
				v11 = v10[1] == 0;
				++v10;
			} while (!v11);
		}
		sub_140138940(a1[3688] + 2496i64, (__int64)v17);
		v12 = a1[3688];
		*(_BYTE*)(v12 + 105) = 1;
		sub_14013A1D0(v12 + 2496);
		*(_BYTE*)(v12 + 105) = 0;
		v13 = a1[3688];
		if (v13)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 8i64))(v13, 1i64);
		a1[3688] = 0i64;
	}
	if (!a2)
		sub_1400E2B40(qword_140C63650);
	v14 = a1[3710];
	if (v14)
	{
		v15 = qword_140C65C48;
		if (qword_140C65C48 == v14)
			v15 = 0i64;
		qword_140C65C48 = v15;
		sub_14018B900(v14, 0);
	}
	a1[3710] = 0i64;
	sub_14053C030((__int64)(a1 + 3990), a1[3991], a1[3992]);
	return 0i64;
}
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B144A8: using guessed type wchar_t aAddonsXml_1[11];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65B88: using guessed type __int64 qword_140C65B88;
// 140C65C48: using guessed type __int64 qword_140C65C48;

