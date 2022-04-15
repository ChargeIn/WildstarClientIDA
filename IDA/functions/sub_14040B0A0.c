//----- (000000014040B0A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14040B0A0(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rbp
	__int64 v8; // rcx
	__int64 v9; // rcx
	unsigned __int64 v10; // rdi
	int* v11; // rdx
	int* v12; // r15
	unsigned __int64 v13; // rcx
	__int64 v14; // rsi
	__int64 v15; // rbp
	__int64 v16; // rcx
	__int64 v17; // rcx

	result = a1[1];
	if (result <= a2)
	{
		v10 = 0i64;
		v12 = sub_14018DB00(*a1, a2, 48i64);
		result = a1[1];
		if (result < a2)
		{
			v11 = &v12[12 * result + 2];
			v13 = a2 - result;
			do
			{
				result = (unsigned __int64)(v11 - 2);
				if (v11 != (int*)8)
				{
					*v11 = 0;
					*((_QWORD*)v11 + 1) = 0i64;
					*((_QWORD*)v11 + 3) = 0i64;
					*((_QWORD*)v11 + 4) = 0i64;
				}
				v11 += 12;
				--v13;
			} while (v13);
		}
		if ((int*)*a1 != v12)
		{
			if (a1[1])
			{
				v14 = 0i64;
				do
				{
					if (&v12[v14])
						result = sub_14040B570((__int64)&v12[v14], v14 * 4 + *a1);
					v15 = *a1;
					v16 = *(_QWORD*)(*a1 + v14 * 4 + 40);
					if (v16)
						result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16, v11);
					v17 = *(_QWORD*)(v15 + v14 * 4 + 32);
					if (v17)
						result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16, v11);
					++v10;
					v14 += 12i64;
				} while (v10 < a1[1]);
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v11);
			*a1 = (__int64)v12;
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
		v6 = 48 * a2;
		do
		{
			v7 = *a1;
			v8 = *(_QWORD*)(*a1 + v6 + 40);
			if (v8)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			v9 = *(_QWORD*)(v7 + v6 + 32);
			if (v9)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			++v5;
			v6 += 48i64;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
	return result;
}
// 14040B1A9: variable 'v11' is possibly undefined

