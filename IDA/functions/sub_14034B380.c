//----- (000000014034B380) ----------------------------------------------------
__int64 __fastcall sub_14034B380(int* a1, int* a2, __int64 a3, int* a4, unsigned int* a5)
{
	__int64 v8; // rdi
	char v9; // r13
	bool v10; // bl
	__int64 v11; // r12
	int v12; // ecx
	unsigned int v13; // r8d
	__int64 result; // rax
	int* v15; // rcx
	unsigned int v16; // ebx
	__int64 v17; // rbp
	unsigned int v18; // ebx
	__int64 v19; // rbp

	v8 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v8;
		while (*((_WORD*)a2 + v8));
	}
	v9 = 0;
	v10 = 0;
	if (a3)
	{
		v10 = !*(_DWORD*)a3 && !*(_DWORD*)(a3 + 4);
		v9 = *(_BYTE*)(a3 + 24);
	}
	v11 = (unsigned int)a1[135];
	if (v10)
		v12 = a1[266];
	else
		v12 = a1[397];
	v13 = v12 + v11 + v8;
	if (v9)
		v13 += a1[528];
	if (v13 < *a5)
	{
		sub_1407DB590(a4, a1 + 5, 2 * v11);
		v15 = (int*)((char*)a4 + 2 * v11);
		if (v10)
		{
			v16 = a1[266];
			sub_1407DB590(v15, a1 + 136, 2i64 * v16);
		}
		else
		{
			v16 = a1[397];
			sub_1407DB590(v15, a1 + 267, 2i64 * v16);
		}
		v17 = v16 + (unsigned int)v11;
		if (v9)
		{
			v18 = a1[528];
			sub_1407DB590((int*)((char*)a4 + 2 * v17), a1 + 398, 2i64 * v18);
			v17 = v18 + (unsigned int)v17;
		}
		sub_1407DB590((int*)((char*)a4 + 2 * v17), a2, 2i64 * (unsigned int)v8);
		v19 = (unsigned int)(v8 + v17);
		*a5 = v19;
		result = 0i64;
		*((_WORD*)a4 + v19) = 0;
	}
	else
	{
		sub_1400035B0();
		return 2147500037i64;
	}
	return result;
}

