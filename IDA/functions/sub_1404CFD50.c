//----- (00000001404CFD50) ----------------------------------------------------
__int64 __fastcall sub_1404CFD50(__int64* a1, _QWORD* a2)
{
	__int64 v2; // rbp
	int* v5; // rdi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	int* v8; // rax
	_QWORD* v9; // rdx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 16i64);
	v6 = &v5[4 * v2];
	if (v6)
	{
		*(_QWORD*)v6 = *a2;
		*((_QWORD*)v6 + 1) = a2[1];
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5;
			do
			{
				if (v8)
				{
					v9 = (_QWORD*)(*a1 + (char*)v8 - (char*)v5);
					*(_QWORD*)v8 = *v9;
					*((_QWORD*)v8 + 1) = v9[1];
				}
				++v7;
				v8 += 4;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

