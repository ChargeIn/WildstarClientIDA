//----- (00000001400074C0) ----------------------------------------------------
int* __fastcall sub_1400074C0(__int64* a1, __int64 a2)
{
	unsigned __int64 v3; // r14
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	unsigned __int64 v7; // rdi
	__int64 v8; // rdx
	__int64 v9; // rcx
	int* result; // rax
	int* v11; // rbp
	__int64 v12; // rdi
	unsigned __int64 v13; // rsi
	__int64 v14; // rcx

	v3 = a1[1] - 1;
	v5 = *(_QWORD*)(*a1 + (a2 << 6) + 16);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = a2 + 1;
	if (v6 < a1[1])
	{
		v7 = v6 << 6;
		do
		{
			v8 = v7 + *a1;
			if (v8 != 64)
				sub_140007A00(v8 - 64, v8);
			v9 = *(_QWORD*)(v7 + *a1 + 16);
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			++v6;
			v7 += 64i64;
		} while (v6 < a1[1]);
	}
	result = sub_14018DB00(*a1, v3, 64i64);
	v11 = result;
	if ((int*)*a1 != result)
	{
		if (v3)
		{
			v12 = 0i64;
			v13 = v3;
			do
			{
				if (&v11[v12])
					sub_140007A00((__int64)&v11[v12], v12 * 4 + *a1);
				result = (int*)*a1;
				v14 = *(_QWORD*)(v12 * 4 + *a1 + 16);
				if (v14)
					result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
				v12 += 16i64;
				--v13;
			} while (v13);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v11;
	}
	a1[1] = v3;
	return result;
}

