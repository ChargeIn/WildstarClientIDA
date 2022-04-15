//----- (00000001402A2FF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402A2FF0(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rdi
	__int64 v6; // rcx
	int* v7; // r14
	int* v8; // rcx
	unsigned __int64 v9; // rdx
	unsigned __int64 i; // rdi
	int* v11; // rdx
	_QWORD* v12; // rcx
	__int64 v13; // rcx

	result = a1[1];
	if (result <= a2)
	{
		v7 = sub_14018DB00(*a1, a2, 8i64);
		result = a1[1];
		if (result < a2)
		{
			v8 = &v7[2 * result];
			v9 = a2 - result;
			do
			{
				if (v8)
					*(_QWORD*)v8 = 0i64;
				v8 += 2;
				--v9;
			} while (v9);
		}
		if ((int*)*a1 != v7)
		{
			for (i = 0i64; i < a1[1]; ++i)
			{
				v11 = &v7[2 * i];
				if (v11)
				{
					v12 = (_QWORD*)(*a1 + 8 * i);
					*(_QWORD*)v11 = *v12;
					*v12 = 0i64;
				}
				result = *a1;
				v13 = *(_QWORD*)(*a1 + 8 * i);
				if (v13)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v7;
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
		do
		{
			result = *a1;
			v6 = *(_QWORD*)(*a1 + 8 * v5);
			if (v6)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			++v5;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
	return result;
}

