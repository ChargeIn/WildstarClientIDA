//----- (00000001401C2E70) ----------------------------------------------------
int* __fastcall sub_1401C2E70(__int64* a1, __int64 a2, int* a3)
{
	unsigned __int64 v6; // rbp
	int* v7; // r14
	int* result; // rax

	v6 = a1[1] + 1;
	v7 = sub_14018DB00(*a1, v6, 4i64);
	result = sub_1407DB590(&v7[a2 + 1], (int*)(4 * a2 + *a1), 4 * (a1[1] - a2));
	v7[a2] = *a3;
	if ((int*)*a1 != v7)
	{
		result = sub_1407DB590(v7, (int*)*a1, 4 * a2);
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	a1[1] = v6;
	return result;
}

