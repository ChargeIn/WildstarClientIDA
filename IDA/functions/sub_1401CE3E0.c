//----- (00000001401CE3E0) ----------------------------------------------------
int* __fastcall sub_1401CE3E0(__int64* a1, int* a2)
{
	__int64 v2; // rax
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rbx
	int* result; // rax
	int* v9; // r15

	v2 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v2;
		while (*((_WORD*)a2 + v2));
	}
	v5 = a1[3];
	v6 = v2 + 1;
	sub_1401CFD00(a1 + 2, v5 + v2 + 1);
	sub_1407DB590((int*)(a1[2] + 2 * v5), a2, 2 * v6);
	v7 = a1[1];
	result = sub_14018DB00(*a1, v7 + 1, 8i64);
	v9 = result;
	*(_QWORD*)&result[2 * v7] = v5;
	if ((int*)*a1 != result)
	{
		result = sub_1407DB590(result, (int*)*a1, 8 * a1[1]);
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v9;
	}
	a1[1] = v7 + 1;
	return result;
}

