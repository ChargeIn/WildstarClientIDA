//----- (00000001401CBEC0) ----------------------------------------------------
__int64 __fastcall sub_1401CBEC0(int* a1, __int64 a2)
{
	__int64* v2; // rax
	__int64 v3; // rsi
	__int64 v4; // r14
	__int64 v5; // r9
	int v6; // ebp
	int v9; // r8d
	__int64 v10; // rcx
	int v11; // ecx
	int i; // edi
	__int64 v13; // rdi
	__int64 v14; // rcx
	__int64 v15; // rdx
	_WORD* v16; // r8
	unsigned __int8 v17; // al
	unsigned __int8 v18; // cl
	int* v19; // rcx

	v2 = *(__int64**)(a2 + 16);
	v3 = *(_QWORD*)a2;
	v4 = *((int*)v2 + 5);
	v5 = *v2;
	v6 = -1;
	a1[1319] = 0;
	a1[1320] = 573;
	v9 = 0;
	v10 = 0i64;
	if ((int)v4 > 0)
	{
		do
		{
			if (*(_WORD*)(v3 + 4 * v10))
			{
				++a1[1319];
				v6 = v9;
				a1[a1[1319] + 746] = v9;
				*((_BYTE*)a1 + v10 + 5284) = 0;
			}
			else
			{
				*(_WORD*)(v3 + 4 * v10 + 2) = 0;
			}
			++v10;
			++v9;
		} while (v10 < v4);
	}
	while (a1[1319] < 2)
	{
		if (v6 >= 2)
			v11 = 0;
		else
			v11 = ++v6;
		a1[++a1[1319] + 746] = v11;
		*(_WORD*)(v3 + 4i64 * v11) = 1;
		*((_BYTE*)a1 + v11 + 5284) = 0;
		--a1[1472];
		if (v5)
			a1[1473] -= *(unsigned __int16*)(v5 + 4i64 * v11 + 2);
	}
	*(_DWORD*)(a2 + 8) = v6;
	for (i = a1[1319] / 2; i >= 1; --i)
		sub_1401CBAF0((__int64)a1, v3, i);
	do
	{
		v13 = a1[747];
		a1[747] = a1[a1[1319]-- + 746];
		sub_1401CBAF0((__int64)a1, v3, 1);
		v14 = a1[747];
		--a1[1320];
		v15 = v14;
		v16 = (_WORD*)(v3 + 4 * v13);
		a1[a1[1320]-- + 746] = v13;
		a1[a1[1320] + 746] = v14;
		*(_WORD*)(v3 + 4i64 * (int)v4) = *v16 + *(_WORD*)(v3 + 4 * v14);
		v17 = *((_BYTE*)a1 + v13 + 5284);
		v18 = *((_BYTE*)a1 + v14 + 5284);
		if (v17 < v18)
			v17 = v18;
		*((_BYTE*)a1 + (int)v4 + 5284) = v17 + 1;
		*(_WORD*)(v3 + 4 * v15 + 2) = v4;
		v16[1] = v4;
		a1[747] = v4;
		LODWORD(v4) = v4 + 1;
		sub_1401CBAF0((__int64)a1, v3, 1);
	} while (a1[1319] >= 2);
	a1[--a1[1320] + 746] = a1[747];
	sub_1401CBBE0(v19, (__int64*)a2);
	return sub_1401CBE00(v3, v6, (__int64)(a1 + 738));
}
// 1401CC0DA: variable 'v19' is possibly undefined

