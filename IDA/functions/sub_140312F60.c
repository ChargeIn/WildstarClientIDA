//----- (0000000140312F60) ----------------------------------------------------
int* __fastcall sub_140312F60(__int64* a1)
{
	unsigned __int64 v1; // rdi
	int* result; // rax
	int* v4; // rsi
	int* v5; // rcx
	__int64 v6; // r8
	__int64 v7; // rdx

	v1 = 0i64;
	if (a1[1])
		a1[1] = 0i64;
	result = sub_14018DBC0(*a1, 0i64, 16i64);
	v4 = result;
	if ((int*)*a1 != result)
	{
		if (a1[1])
		{
			v5 = result;
			v6 = -(__int64)result;
			do
			{
				if (v5)
				{
					v7 = (__int64)v5 + v6 + *a1;
					*(_QWORD*)v5 = *(_QWORD*)v7;
					result = (int*)*(unsigned int*)(v7 + 8);
					v5[2] = (int)result;
				}
				++v1;
				v5 += 4;
			} while (v1 < a1[1]);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v4;
	}
	return result;
}

