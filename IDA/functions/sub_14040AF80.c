//----- (000000014040AF80) ----------------------------------------------------
__int64 __fastcall sub_14040AF80(__int64* a1)
{
	__int64 v1; // rdi
	int* v3; // rax
	int* v4; // rbp

	v1 = a1[1];
	v3 = sub_14018DB00(*a1, v1 + 1, 104i64);
	v4 = v3;
	if ((int*)*a1 != v3)
	{
		sub_1407DB590(v3, (int*)*a1, 104 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v4;
	}
	a1[1] = v1 + 1;
	return v1;
}

