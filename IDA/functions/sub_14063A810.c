//----- (000000014063A810) ----------------------------------------------------
int* __fastcall sub_14063A810(__int64* a1, __int64 a2, int* a3)
{
	unsigned __int64 v6; // rbp
	int* v7; // r14
	__int64 v8; // r15
	int* result; // rax

	v6 = a1[1] + 1;
	v7 = sub_14018DB00(*a1, v6, 20i64);
	v8 = 5 * a2;
	sub_1407DB590(&v7[5 * a2 + 5], (int*)(20 * a2 + *a1), 20 * (a1[1] - a2));
	v7[v8] = *a3;
	v7[v8 + 1] = a3[1];
	v7[v8 + 2] = a3[2];
	v7[v8 + 3] = a3[3];
	result = (int*)(unsigned int)a3[4];
	v7[v8 + 4] = (int)result;
	if ((int*)*a1 != v7)
	{
		result = sub_1407DB590(v7, (int*)*a1, 20 * a2);
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	a1[1] = v6;
	return result;
}

