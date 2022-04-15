//----- (00000001402A5D50) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402A5D50(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax
	unsigned __int64 v3; // r12
	unsigned __int64 v5; // rbp
	__int64 v6; // rsi
	unsigned __int64 v7; // rbx
	unsigned __int64* v8; // rdi
	__int64 v9; // rcx
	_QWORD* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v12; // r13
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rbp
	_QWORD* v15; // rsi
	__int64 v16; // r12
	unsigned __int64* v17; // rcx
	unsigned __int64 v18; // rbx
	unsigned __int64* v19; // rdi
	__int64 v20; // rcx

	result = a1[1];
	v3 = a2;
	if (result <= a2)
	{
		result = (unsigned __int64)sub_14018DB00(*a1, a2, 16i64);
		v11 = a1[1];
		v12 = result;
		if (v11 < v3)
		{
			v10 = (_QWORD*)(result + 16 * v11);
			v13 = v3 - v11;
			do
			{
				if (v10)
				{
					v10[1] = 0i64;
					*v10 = 0i64;
				}
				v10 += 2;
				--v13;
			} while (v13);
		}
		if (*a1 != result)
		{
			v14 = 0i64;
			if (a1[1])
			{
				v15 = (_QWORD*)result;
				v16 = -(__int64)result;
				do
				{
					if (v15)
					{
						v17 = (_QWORD*)((char*)v15 + v16 + *a1);
						v15[1] = v17[1];
						result = *v17;
						*v15 = *v17;
						v17[1] = 0i64;
						*v17 = 0i64;
					}
					v18 = 0i64;
					v19 = (_QWORD*)((char*)v15 + v16 + *a1);
					if (v19[1])
					{
						do
						{
							result = *v19;
							v20 = *(_QWORD*)(*v19 + 8 * v18);
							if (v20)
								result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v20 + 16i64))(v20, v10);
							++v18;
						} while (v18 < v19[1]);
					}
					if (*v19)
						result = (*(__int64(__fastcall**)(unsigned __int64, _QWORD*))(*(_QWORD*)(*v19 - 16) + 8i64))(
							*v19 - 16,
							v10);
					++v14;
					v15 += 2;
				} while (v14 < a1[1]);
				v3 = a2;
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v10);
			*a1 = v12;
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
			v7 = 0i64;
			v8 = (unsigned __int64*)(v6 + *a1);
			if (v8[1])
			{
				do
				{
					result = *v8;
					v9 = *(_QWORD*)(*v8 + 8 * v7);
					if (v9)
						result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
					++v7;
				} while (v7 < v8[1]);
			}
			if (*v8)
				result = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)(*v8 - 16) + 8i64))(*v8 - 16);
			++v5;
			v6 += 16i64;
		} while (v5 < a1[1]);
	}
	a1[1] = v3;
	return result;
}
// 1402A5E90: variable 'v10' is possibly undefined

