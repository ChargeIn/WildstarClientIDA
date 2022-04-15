//----- (00000001404BC7E0) ----------------------------------------------------
__int64 __fastcall sub_1404BC7E0(__int64* a1, int* a2, __int64 a3)
{
	__int64 v3; // r14
	__int64 v5; // rbp
	int* v8; // r15

	v3 = a1[1];
	v5 = v3 + a3;
	v8 = sub_14018DB00(*a1, v3 + a3, 104i64);
	sub_1407DB590(&v8[26 * v3], a2, 104 * a3);
	if ((int*)*a1 != v8)
	{
		sub_1407DB590(v8, (int*)*a1, 104 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v8;
	}
	a1[1] = v5;
	return v3;
}

