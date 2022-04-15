//----- (0000000140684A40) ----------------------------------------------------
__int64 __fastcall sub_140684A40(__int64 a1, int* a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6)
{
	__int64 v6; // r11
	__int64 v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	unsigned int v11; // esi
	__int64 v13; // r8
	__int64 v14; // r14
	int* v15; // rax
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	int v19; // r10d
	__int64 v20; // rdx
	int v21; // r9d
	int v22; // r11d
	int* v23; // rax
	int v24; // ecx
	int v25; // ecx
	int v26; // ecx
	__int64 v27; // [rsp+10h] [rbp+8h]

	v6 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)a2 = 0i64;
	v8 = *(_QWORD*)(v6 + 8);
	a2[2] = 0;
	v9 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v6 || (v27 = v9, a3 < *(_DWORD*)(v9 + 32)))
		v27 = v6;
	if (v27 == v6)
		return 2147500037i64;
	v10 = *(_QWORD*)(v27 + 40);
	if (!v10)
		return 2147500037i64;
	v11 = *(_DWORD*)(v10 + 16);
	if (a4 >= v11 && a4 != -1)
		return 2147500037i64;
	if (a5 >= v11)
		return 2147500037i64;
	v13 = 24i64 * a5;
	if (!(v13 + *(_QWORD*)(v10 + 8)))
		return 2147500037i64;
	v14 = *(_QWORD*)(v10 + 48);
	v15 = (int*)(v14 + v13);
	if (!(v14 + v13))
		return 2147500037i64;
	if (a6)
		v16 = v15[3];
	else
		v16 = *v15;
	*a2 += v16;
	if (a6)
		v17 = v15[4];
	else
		v17 = v15[1];
	a2[1] += v17;
	if (a6)
		v18 = v15[5];
	else
		v18 = v15[2];
	a2[2] += v18;
	v19 = a2[2];
	if (a4 == -1)
		v20 = 0i64;
	else
		v20 = a4 + 1;
	if ((unsigned int)v20 < a5)
	{
		v21 = *a2;
		v22 = a2[1];
		do
		{
			if ((unsigned int)v20 < v11)
				v23 = (int*)(v14 + 24 * v20);
			else
				v23 = 0i64;
			if (a6)
				v24 = v23[3];
			else
				v24 = *v23;
			v21 += v24;
			if (a6)
				v25 = v23[4];
			else
				v25 = v23[1];
			v22 += v25;
			if (a6)
				v26 = v23[5];
			else
				v26 = v23[2];
			v20 = (unsigned int)(v20 + 1);
			v19 += v26;
		} while ((unsigned int)v20 < a5);
		*a2 = v21;
		a2[1] = v22;
		a2[2] = v19;
	}
	return 0i64;
}

