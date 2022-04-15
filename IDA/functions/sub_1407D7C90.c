//----- (00000001407D7C90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407D7C90(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	unsigned __int64 v8; // rdi
	int* v9; // rdx
	int* v10; // r14
	unsigned __int64 v11; // rcx
	__int64 v12; // rsi
	__int64 v13; // rcx

	result = a1[1];
	if (result <= a2)
	{
		v8 = 0i64;
		v10 = sub_14018DB00(*a1, a2, 16i64);
		result = a1[1];
		if (result < a2)
		{
			v9 = &v10[4 * result];
			v11 = a2 - result;
			do
			{
				if (v9)
				{
					*((_QWORD*)v9 + 1) = 0i64;
					*(_QWORD*)v9 = 0i64;
				}
				v9 += 4;
				--v11;
			} while (v11);
		}
		if ((int*)*a1 != v10)
		{
			if (a1[1])
			{
				v12 = 0i64;
				do
				{
					if (&v10[v12])
						sub_140776240((__int64*)&v10[v12], v12 * 4 + *a1);
					result = *a1;
					v13 = *(_QWORD*)(v12 * 4 + *a1);
					if (v13)
						result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16, v9);
					++v8;
					v12 += 4i64;
				} while (v8 < a1[1]);
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v9);
			*a1 = (__int64)v10;
		}
	}
	else
	{
		v5 = a2;
		if (a2 >= result)
		{
			a1[1] = a2;
			return result;
		}
		v6 = 16 * a2;
		do
		{
			result = *a1;
			v7 = *(_QWORD*)(v6 + *a1);
			if (v7)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			++v5;
			v6 += 16i64;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
	return result;
}
// 1407D7D78: variable 'v9' is possibly undefined

