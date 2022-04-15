//----- (00000001402E1400) ----------------------------------------------------
__int64 __fastcall sub_1402E1400(__int64* a1, void(__fastcall**** a2)(_QWORD))
{
	__int64 v2; // rbp
	int* v5; // rsi
	int* v6; // rax
	void(__fastcall * **v7)(_QWORD); // rcx
	unsigned __int64 i; // rdi
	int* v9; // rdx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 8i64);
	v6 = &v5[2 * v2];
	if (v6)
	{
		v7 = *a2;
		*(_QWORD*)v6 = *a2;
		if (v7)
			(**v7)(v7);
	}
	if ((int*)*a1 != v5)
	{
		for (i = 0i64; i < a1[1]; ++i)
		{
			v9 = &v5[2 * i];
			if (v9)
			{
				v10 = (_QWORD*)(*a1 + 8 * i);
				*(_QWORD*)v9 = *v10;
				*v10 = 0i64;
			}
			v11 = *(_QWORD*)(*a1 + 8 * i);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

