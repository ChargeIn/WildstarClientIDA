//----- (00000001402A3210) ----------------------------------------------------
int* __fastcall sub_1402A3210(__int64* a1, unsigned __int64 a2)
{
	int* result; // rax
	unsigned __int64 v5; // rbp
	__int64 v6; // rsi
	int v7; // edi
	__int64 v8; // rbx
	__int64 v9; // rcx
	int* v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rbp
	int* v13; // r12
	unsigned __int64 v14; // rcx
	__int64 v15; // r15
	int* v16; // rbx
	int v17; // esi
	__int64* v18; // rdi
	__int64 v19; // rcx
	int v20; // edi
	__int64 v21; // rbx
	__int64 v22; // rcx

	result = (int*)a1[1];
	if ((unsigned __int64)result <= a2)
	{
		result = sub_14018DB00(*a1, a2, 16i64);
		v11 = a1[1];
		v12 = 0i64;
		v13 = result;
		if (v11 < a2)
		{
			v10 = &result[4 * v11];
			v14 = a2 - v11;
			do
			{
				if (v10)
				{
					*(_QWORD*)v10 = 0i64;
					*((_QWORD*)v10 + 1) = 0i64;
				}
				v10 += 4;
				--v14;
			} while (v14);
		}
		if ((int*)*a1 != result)
		{
			if (a1[1])
			{
				v15 = 0i64;
				do
				{
					v16 = &v13[v15];
					if (&v13[v15])
					{
						v17 = 1;
						v18 = (__int64*)(v15 * 4 + *a1);
						do
						{
							v19 = *v18;
							*(_QWORD*)v16 = *v18;
							if (v19)
								result = (int*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v19 + 8i64))(v19, v10);
							v16 += 2;
							++v18;
							--v17;
						} while (v17 >= 0);
					}
					v20 = 1;
					v21 = v15 * 4 + *a1 + 16;
					do
					{
						v22 = *(_QWORD*)(v21 - 8);
						v21 -= 8i64;
						if (v22)
							result = (int*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v22 + 16i64))(v22, v10);
						--v20;
					} while (v20 >= 0);
					++v12;
					v15 += 4i64;
				} while (v12 < a1[1]);
			}
			if (*a1)
				result = (int*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v10);
			*a1 = (__int64)v13;
		}
	}
	else
	{
		v5 = a2;
		if (a2 >= (unsigned __int64)result)
		{
			a1[1] = a2;
			return result;
		}
		v6 = 16 * a2;
		do
		{
			v7 = 1;
			v8 = v6 + *a1 + 16;
			do
			{
				v9 = *(_QWORD*)(v8 - 8);
				v8 -= 8i64;
				if (v9)
					result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				--v7;
			} while (v7 >= 0);
			++v5;
			v6 += 16i64;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
	return result;
}
// 1402A3312: variable 'v10' is possibly undefined

