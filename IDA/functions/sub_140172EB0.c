//----- (0000000140172EB0) ----------------------------------------------------
__int64 __fastcall sub_140172EB0(__int64* a1, int* a2)
{
	__int64 v2; // rsi
	int* v5; // rdi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	int* v8; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 4i64);
	v6 = &v5[v2];
	if (v6)
		*v6 = *a2;
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5;
			do
			{
				if (v8)
					*v8 = *(_DWORD*)((char*)v8 - (char*)v5 + *a1);
				++v7;
				++v8;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}

