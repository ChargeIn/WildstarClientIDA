//----- (00000001404D4C70) ----------------------------------------------------
__int64 __fastcall sub_1404D4C70(__int64* a1, __int64 a2)
{
	__int64 v2; // r14
	int* v5; // rbp
	__int64 v6; // rcx
	unsigned __int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 16i64);
	v6 = (__int64)&v5[4 * v2];
	if (v6)
		sub_1404D5250(v6, a2);
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = 0i64;
			do
			{
				if (&v5[v8])
					sub_1404D5250((__int64)&v5[v8], v8 * 4 + *a1);
				v9 = *(_QWORD*)(v8 * 4 + *a1);
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
				++v7;
				v8 += 4i64;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

