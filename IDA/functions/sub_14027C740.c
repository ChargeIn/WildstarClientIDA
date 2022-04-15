//----- (000000014027C740) ----------------------------------------------------
__int64 __fastcall sub_14027C740(__int64 a1, __int64* a2)
{
	int* v5; // rax
	__int64 v6; // rbx
	int v7; // edi

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(64i64, 0);
	v6 = (__int64)v5;
	if (v5)
	{
		*(_QWORD*)v5 = &off_140B61F60;
		*((_QWORD*)v5 + 6) = 0i64;
		*((_QWORD*)v5 + 7) = 0i64;
		v5[2] = 1;
		*((_QWORD*)v5 + 2) = a1;
		v5[6] = 0;
		*((_QWORD*)v5 + 4) = 0i64;
		v5[10] = 0;
	}
	else
	{
		v6 = 0i64;
	}
	v7 = sub_1402ABA90(v6);
	if (v7 >= 0)
	{
		*a2 = v6;
		return 0i64;
	}
	else
	{
		if (v6)
		{
			sub_1402AB940(v6);
			sub_14018B900(v6, 0);
		}
		return (unsigned int)v7;
	}
}
// 140B61F60: using guessed type __int64 (__fastcall *off_140B61F60)();

