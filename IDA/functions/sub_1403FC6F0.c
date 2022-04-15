//----- (00000001403FC6F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403FC6F0(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // r15
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rsi
	_QWORD* v13; // rdi
	__int64 v14; // r14
	_QWORD* v15; // rcx

	result = a1[1];
	if (result <= a2)
	{
		result = (unsigned __int64)sub_14018DB00(*a1, a2, 16i64);
		v9 = a1[1];
		v10 = result;
		if (v9 < a2)
		{
			v8 = (_QWORD*)(result + 16 * v9);
			v11 = a2 - v9;
			do
			{
				if (v8)
				{
					v8[1] = 0i64;
					*v8 = 0i64;
				}
				v8 += 2;
				--v11;
			} while (v11);
		}
		if (*a1 != result)
		{
			v12 = 0i64;
			if (a1[1])
			{
				v13 = (_QWORD*)result;
				v14 = -(__int64)result;
				do
				{
					if (v13)
					{
						v15 = (_QWORD*)((char*)v13 + v14 + *a1);
						v13[1] = v15[1];
						*v13 = *v15;
						v15[1] = 0i64;
						*v15 = 0i64;
					}
					result = (unsigned __int64)v13 + v14 + *a1;
					if (*(_QWORD*)result)
						result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)(*(_QWORD*)result - 16i64) + 8i64))(
							*(_QWORD*)result - 16i64,
							v8);
					++v12;
					v13 += 2;
				} while (v12 < a1[1]);
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v8);
			*a1 = v10;
		}
		a1[1] = a2;
	}
	else
	{
		v5 = a2;
		if (a2 >= result)
		{
			a1[1] = a2;
		}
		else
		{
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
			a1[1] = a2;
		}
	}
	return result;
}
// 1403FC809: variable 'v8' is possibly undefined

