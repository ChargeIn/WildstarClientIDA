//----- (00000001404D4F60) ----------------------------------------------------
__int64 __fastcall sub_1404D4F60(__int64* a1, __int64 a2)
{
	__int64 v2; // r15
	int* v5; // r14
	__int64 v6; // rcx
	unsigned __int64 v7; // rbp
	__int64 v8; // rbx
	__int64 v9; // rdi
	__int64 v10; // rcx

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 72i64);
	v6 = (__int64)&v5[18 * v2];
	if (v6)
		sub_1404D53C0(v6, a2);
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = 0i64;
			do
			{
				if (&v5[v8])
					sub_1404D53C0((__int64)&v5[v8], v8 * 4 + *a1);
				v9 = *a1;
				sub_1403FBAC0((__int64*)(v8 * 4 + *a1 + 56));
				v10 = *(_QWORD*)(v9 + v8 * 4 + 48);
				if (v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
				++v7;
				v8 += 18i64;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}

