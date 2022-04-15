//----- (0000000140538630) ----------------------------------------------------
void __fastcall sub_140538630(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // r14
	__int64 v8; // rcx
	__int64 v9; // rcx
	int* v10; // rax
	unsigned __int64 v11; // rdx
	int* v12; // r14
	__int64 v13; // rdi
	unsigned __int64 v14; // rsi
	unsigned __int64 v15; // rbp
	unsigned __int64 v16; // rdi
	__int64 v17; // rsi
	__int64 v18; // rcx
	__int64 v19; // rcx

	v2 = a1[1];
	if (v2 <= a2)
	{
		v10 = sub_14018DB00(*a1, a2, 48i64);
		v11 = a1[1];
		v12 = v10;
		if (v11 < a2)
		{
			v13 = (__int64)&v10[12 * v11];
			v14 = a2 - v11;
			do
			{
				if (v13)
					sub_1401095E0(v13);
				v13 += 48i64;
				--v14;
			} while (v14);
		}
		if ((int*)*a1 != v12)
		{
			v15 = 0i64;
			if (a1[1])
			{
				v16 = 0i64;
				do
				{
					if (&v12[v16 / 4])
						sub_140109690((__int64)&v12[v16 / 4], v16 + *a1);
					v17 = *a1;
					v18 = *(_QWORD*)(*a1 + v16);
					if (v18)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
						*(_QWORD*)(v17 + v16) = 0i64;
					}
					v19 = *(_QWORD*)(v17 + v16 + 24);
					if (v19)
						sub_14018B900(v19, 0);
					++v15;
					v16 += 48i64;
				} while (v15 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v12;
		}
	}
	else
	{
		v5 = a2;
		if (a2 >= v2)
		{
			a1[1] = a2;
			return;
		}
		v6 = 48 * a2;
		do
		{
			v7 = *a1;
			v8 = *(_QWORD*)(*a1 + v6);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v7 + v6) = 0i64;
			}
			v9 = *(_QWORD*)(v7 + v6 + 24);
			if (v9)
				sub_14018B900(v9, 0);
			++v5;
			v6 += 48i64;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
}

