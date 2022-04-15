//----- (00000001400ECC40) ----------------------------------------------------
_QWORD* __fastcall sub_1400ECC40(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
	__int64 v6; // rdi
	int* v7; // rsi
	__int64 v8; // rax
	int* v9; // rax
	bool v10; // zf
	__int64 v11; // rax
	__int64 v13; // [rsp+40h] [rbp-258h] BYREF
	int* v14; // [rsp+48h] [rbp-250h]
	int* v15; // [rsp+50h] [rbp-248h]
	int* v16; // [rsp+58h] [rbp-240h]
	int v17[132]; // [rsp+60h] [rbp-238h] BYREF

	v6 = 0i64;
	v7 = sub_14018B280(16i64, 0);
	v14 = v7;
	v15 = v7;
	v8 = (__int64)(v7 + 4);
	v16 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	if (a4)
	{
		if ((int)sub_14001B370(
			v17,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			a4) >= 0
			&& LOWORD(v17[0]))
		{
			v9 = v17;
			do
			{
				v10 = *((_WORD*)v9 + 1) == 0;
				v9 = (int*)((char*)v9 + 2);
			} while (!v10);
		}
		v11 = 0i64;
		if (LOWORD(v17[0]))
		{
			do
				++v11;
			while (*((_WORD*)v17 + v11));
		}
		if ((2 * v11) >> 1)
			sub_14001C310(&v13, v17, (int*)((char*)v17 + 2 * v11));
		else
			sub_1407DB590(v7, v17, 0i64);
		do
			v10 = aSavedataXml[++v6] == 0;
		while (!v10);
		sub_14001C310(&v13, (int*)L"_SaveData.xml", (int*)&aSavedataXml[v6]);
		a2[1] = v14;
		a2[2] = v15;
		v8 = (__int64)v16;
	}
	else
	{
		a2[1] = v7;
		a2[2] = v7;
	}
	a2[3] = v8;
	return a2;
}
// 140A179D0: using guessed type wchar_t aSavedataXml[14];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];

