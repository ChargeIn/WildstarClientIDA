//----- (00000001404516A0) ----------------------------------------------------
__int64 __fastcall sub_1404516A0(__int64* a1)
{
	__int64 v1; // r14
	int* v3; // rax
	unsigned __int64 v4; // rsi
	int* v5; // rbp
	int* v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 result; // rax

	v1 = a1[1];
	v3 = sub_14018DB00(*a1, v1 + 1, 32i64);
	v4 = 0i64;
	v5 = v3;
	v6 = &v3[8 * v1];
	if (v6)
		*((_QWORD*)v6 + 2) = 0i64;
	if ((int*)*a1 != v3)
	{
		if (a1[1])
		{
			v7 = 0i64;
			do
			{
				if (&v5[v7])
					sub_140451C70((__int64)&v5[v7], v7 * 4 + *a1);
				v8 = *(_QWORD*)(v7 * 4 + *a1 + 16);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				++v4;
				v7 += 8i64;
			} while (v4 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v1;
	a1[1] = v1 + 1;
	return result;
}

