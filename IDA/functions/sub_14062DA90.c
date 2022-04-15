//----- (000000014062DA90) ----------------------------------------------------
int* __fastcall sub_14062DA90(__int64* a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64 v6; // rbp
	int* v7; // r14
	__int64 v8; // r15
	int* result; // rax

	v6 = a1[1] + 1;
	v7 = sub_14018DB00(*a1, v6, 40i64);
	v8 = 10 * a2;
	sub_1407DB590(&v7[10 * a2 + 10], (int*)(40 * a2 + *a1), 40 * (a1[1] - a2));
	*(_QWORD*)&v7[v8] = *a3;
	*(_QWORD*)&v7[v8 + 2] = a3[1];
	*(_QWORD*)&v7[v8 + 4] = a3[2];
	*(_QWORD*)&v7[v8 + 6] = a3[3];
	result = (int*)a3[4];
	*(_QWORD*)&v7[v8 + 8] = result;
	if ((int*)*a1 != v7)
	{
		result = sub_1407DB590(v7, (int*)*a1, 40 * a2);
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	a1[1] = v6;
	return result;
}

