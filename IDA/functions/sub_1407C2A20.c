//----- (00000001407C2A20) ----------------------------------------------------
__int64 __fastcall sub_1407C2A20(__int64* a1)
{
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // rbx
	__int64 v5; // rbp
	int* v6; // rax
	int* v7; // rsi
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rsi
	int* v11; // rdx
	__int64 v12; // rcx

	v2 = a1[13];
	v3 = a1[3];
	if (v2 < v3)
		return *(_QWORD*)(a1[2] + 8 * v2);
	v5 = a1[1];
	v6 = sub_14018DB00(*a1, v5 + 1, 8i64);
	v7 = v6;
	*(_QWORD*)&v6[2 * v5] = v3;
	if ((int*)*a1 != v6)
	{
		sub_1407DB590(v6, (int*)*a1, 8 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	a1[1] = v5 + 1;
	v8 = a1[3];
	v9 = sub_14018DB00(a1[2], v8 + 1, 8i64);
	v10 = v9;
	*(_QWORD*)&v9[2 * v8] = v5;
	v11 = (int*)a1[2];
	if (v11 != v9)
	{
		sub_1407DB590(v9, v11, 8 * a1[3]);
		v12 = a1[2];
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		a1[2] = (__int64)v10;
	}
	a1[3] = v8 + 1;
	return v5;
}

