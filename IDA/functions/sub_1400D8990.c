//----- (00000001400D8990) ----------------------------------------------------
__int64 __fastcall sub_1400D8990(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64* v6; // rdi
	__int64 v7; // rsi
	int* v9; // rax
	__int64 v10; // rbp

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = (__int64*)sub_1400D66A0(a1, 1u);
	if (v6)
	{
		v7 = sub_14012A990((__int64)a1, 2);
		if (!v7)
		{
			(*(void(__fastcall**)(__int64*, _QWORD))(*v6 + 488))(v6, 0i64);
			return 0i64;
		}
		v9 = sub_14018B280(864i64, 0);
		if (v9)
			v1 = sub_14013FEB0((__int64)v9, v6[4]);
		*(_BYTE*)(v1 + 826) = 1;
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
		if (v1 + 24 != v10)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(v1 + 24) + 120i64))(v1 + 24, 0i64);
			sub_1401A7460(v1 + 24, v10);
		}
		sub_1401411C0(v1);
		(*(void(__fastcall**)(__int64*, __int64))(*v6 + 488))(v6, v1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

