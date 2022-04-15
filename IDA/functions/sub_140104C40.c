//----- (0000000140104C40) ----------------------------------------------------
char __fastcall sub_140104C40(__int64* a1, __int64 a2)
{
	__int64 v4; // rax
	unsigned __int16* v5; // rax
	int* v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdx
	__int64 v12; // [rsp+50h] [rbp+18h] BYREF

	v4 = sub_1401A6B80(a2, L"Name");
	if (!v4)
		return 0;
	v5 = (unsigned __int16*)sub_1401A4F40(v4 + 32);
	v6 = (int*)v5;
	if (!v5)
		return 0;
	v7 = sub_140104190(a1[1], v5);
	v8 = v7;
	if (v7)
	{
		sub_140101710(v7);
		sub_140102760(v8, a2);
		return 1;
	}
	else
	{
		v9 = sub_14018B280(120i64, 0);
		if (v9)
			v8 = sub_140100930((__int64)v9, *(_QWORD*)(a1[1] + 16), a1[1], v6, 0);
		v12 = v8;
		sub_140102760(v8, a2);
		v10 = (int*)a1[5];
		if (v10 == (int*)a1[6])
		{
			sub_1400B9430(a1 + 3, v10, &v12);
			return 1;
		}
		else
		{
			if (v10)
				*(_QWORD*)v10 = v8;
			a1[5] += 8i64;
			return 1;
		}
	}
}
// 140A31790: using guessed type wchar_t aName_6[5];

