//----- (000000014033E0A0) ----------------------------------------------------
__int64 __fastcall sub_14033E0A0(_QWORD* a1)
{
	__int64* i; // rsi
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 k; // rdi
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 m; // rbx
	__int64 v11; // rcx
	__int64 j; // rdi
	__int64 v13; // rcx
	__int64 result; // rax

	for (i = (__int64*)(a1[6] + 8i64); (unsigned __int64)i < a1[10]; ++i)
	{
		v3 = *i;
		v4 = *i + 496;
		if (*i != v4)
		{
			do
			{
				v5 = *(_QWORD*)(v3 + 8);
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				v3 += 16i64;
			} while (v3 != v4);
		}
		sub_14018B900(*i, 0);
	}
	v6 = a1[3];
	if (a1[6] == a1[10])
	{
		for (j = a1[7]; v6 != j; v6 += 16i64)
		{
			v13 = *(_QWORD*)(v6 + 8);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		}
	}
	else
	{
		for (k = a1[5]; v6 != k; v6 += 16i64)
		{
			v8 = *(_QWORD*)(v6 + 8);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		}
		v9 = a1[7];
		for (m = a1[8]; m != v9; m += 16i64)
		{
			v11 = *(_QWORD*)(m + 8);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		}
		sub_14018B900(a1[8], 0);
	}
	a1[7] = a1[3];
	a1[8] = a1[4];
	a1[9] = a1[5];
	result = a1[6];
	a1[10] = result;
	return result;
}

