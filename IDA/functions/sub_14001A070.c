//----- (000000014001A070) ----------------------------------------------------
__int64 __fastcall sub_14001A070(__int64* a1)
{
	__int64 v1; // r13
	__int64 v3; // rbx
	int* v4; // rax
	__int64 v5; // rdx
	int* v6; // r12
	int* v7; // rcx
	unsigned __int64 v8; // rbp
	_QWORD* v9; // rsi
	__int64 v10; // r15
	_QWORD* v11; // rcx
	unsigned __int64 v12; // rbx
	_QWORD* v13; // rdi
	__int64 v14; // rcx
	__int64 result; // rax

	v1 = a1[1];
	v3 = v1 + 1;
	v4 = sub_14018DB00(*a1, v1 + 1, 16i64);
	v5 = 0i64;
	v6 = v4;
	v7 = &v4[4 * v1];
	if (v7)
	{
		*((_QWORD*)v7 + 1) = 0i64;
		*(_QWORD*)v7 = 0i64;
	}
	if ((int*)*a1 != v4)
	{
		v8 = 0i64;
		if (a1[1])
		{
			v9 = v4;
			v10 = -(__int64)v4;
			do
			{
				if (v9)
				{
					v11 = (_QWORD*)((char*)v9 + v10 + *a1);
					v9[1] = v11[1];
					*v9 = *v11;
					v11[1] = 0i64;
					*v11 = 0i64;
				}
				v12 = 0i64;
				v13 = (_QWORD*)((char*)v9 + v10 + *a1);
				if (v13[1])
				{
					do
					{
						v14 = *(_QWORD*)(*v13 + 8 * v12);
						if (v14)
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16, v5);
						++v12;
					} while (v12 < v13[1]);
				}
				if (*v13)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(*v13 - 16i64) + 8i64))(*v13 - 16i64, v5);
				++v8;
				v9 += 2;
				v5 = 0i64;
			} while (v8 < a1[1]);
			v3 = v1 + 1;
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v6;
	}
	result = v1;
	a1[1] = v3;
	return result;
}
// 14001A134: variable 'v5' is possibly undefined

