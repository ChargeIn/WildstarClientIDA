//----- (00000001403481C0) ----------------------------------------------------
__int64 __fastcall sub_1403481C0(__int64* a1, int* a2)
{
	__int64 v2; // r14
	int* v5; // rbp
	__int64 v6; // rcx
	unsigned __int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 536i64);
	v6 = (__int64)&v5[134 * v2];
	if (v6)
		sub_140348290(v6, a2);
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = 0i64;
			do
			{
				if (&v5[v8])
					sub_140348290((__int64)&v5[v8], (int*)(v8 * 4 + *a1));
				v9 = *(_QWORD*)(v8 * 4 + *a1 + 528);
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				++v7;
				v8 += 134i64;
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

