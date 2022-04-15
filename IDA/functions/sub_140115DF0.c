//----- (0000000140115DF0) ----------------------------------------------------
__int64 __fastcall sub_140115DF0(__int64* a1, _QWORD* a2)
{
	__int64 v2; // r15
	int* v5; // rbp
	int* v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rsi
	__int64* v10; // rbx
	__int64 v11; // r14
	_QWORD* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 32i64);
	v6 = &v5[8 * v2];
	if (v6)
	{
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 1) = a2[1];
		a2[1] = 0i64;
		v7 = *((_QWORD*)v6 + 2);
		*((_QWORD*)v6 + 2) = a2[2];
		a2[2] = v7;
		v8 = *((_QWORD*)v6 + 3);
		*((_QWORD*)v6 + 3) = a2[3];
		a2[3] = v8;
	}
	if ((int*)*a1 != v5)
	{
		v9 = 0i64;
		if (a1[1])
		{
			v10 = (__int64*)(v5 + 4);
			v11 = -16i64 - (_QWORD)v5;
			do
			{
				if (v10 != (__int64*)16)
				{
					v12 = (__int64*)((char*)v10 + v11 + *a1);
					*(v10 - 1) = 0i64;
					*v10 = 0i64;
					v10[1] = 0i64;
					*(v10 - 1) = v12[1];
					v12[1] = 0i64;
					v13 = *v10;
					*v10 = v12[2];
					v12[2] = v13;
					v14 = v10[1];
					v10[1] = v12[3];
					v12[3] = v14;
				}
				v15 = *(__int64*)((char*)v10 + v11 + *a1 + 8);
				if (v15)
					sub_14018B900(v15, 0);
				++v9;
				v10 += 4;
			} while (v9 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

