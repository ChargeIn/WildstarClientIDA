//----- (000000014053C1C0) ----------------------------------------------------
int* __fastcall sub_14053C1C0(__int64* a1)
{
	__int64 v1; // rsi
	__int64 v3; // rcx
	unsigned __int64 v4; // rsi
	unsigned __int64 i; // rdi
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	int* result; // rax
	int* v9; // r14
	unsigned __int64 j; // rdi
	int* v11; // rdx
	_QWORD* v12; // rcx
	__int64 v13; // rcx

	v1 = a1[1];
	v3 = *(_QWORD*)*a1;
	v4 = v1 - 1;
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	for (i = 1i64; i < a1[1]; ++i)
	{
		v6 = (_QWORD*)(*a1 + 8 * i);
		if (v6 != (_QWORD*)8)
		{
			*(v6 - 1) = *v6;
			*v6 = 0i64;
		}
		v7 = *(_QWORD*)(*a1 + 8 * i);
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	}
	result = sub_14018DB00(*a1, v4, 8i64);
	v9 = result;
	if ((int*)*a1 != result)
	{
		for (j = 0i64; j < v4; ++j)
		{
			v11 = &v9[2 * j];
			if (v11)
			{
				v12 = (_QWORD*)(*a1 + 8 * j);
				*(_QWORD*)v11 = *v12;
				*v12 = 0i64;
			}
			result = (int*)*a1;
			v13 = *(_QWORD*)(*a1 + 8 * j);
			if (v13)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v9;
	}
	a1[1] = v4;
	return result;
}

