//----- (000000014057A190) ----------------------------------------------------
void __fastcall sub_14057A190(__int64 a1, unsigned int* a2)
{
	int v4; // esi
	int v5; // eax
	__int64 v6; // rax
	__int64 v7; // r9
	_DWORD* v8; // rdx
	__int64 v9; // rsi
	int* v10; // rax

	if (*(_QWORD*)(a1 + 28736))
	{
		v4 = dword_140C636A8 + 2 * dword_140C3A004;
		v5 = *(_DWORD*)(a1 + 28812);
		if (*(_DWORD*)(a1 + 28808) == v5)
		{
			if (v5)
				v6 = (unsigned int)(2 * v5);
			else
				v6 = 8i64;
			*(_DWORD*)(a1 + 28812) = v6;
			*(_QWORD*)(a1 + 28824) = sub_14018C320(*(_QWORD*)(a1 + 28824), 72 * v6, 8u);
		}
		v7 = *(unsigned int*)(a1 + 28808);
		v8 = (_DWORD*)(*(_QWORD*)(a1 + 28824) + 72 * v7);
		*(_DWORD*)(a1 + 28808) = v7 + 1;
		*v8 = 0;
		v8[2] = v4;
		v9 = *a2 + *(_DWORD*)(a1 + 28808);
		if ((unsigned int)v9 > *(_DWORD*)(a1 + 28812))
		{
			v10 = sub_14018C320(*(_QWORD*)(a1 + 28824), 72 * v9, 8u);
			*(_DWORD*)(a1 + 28812) = v9;
			*(_QWORD*)(a1 + 28824) = v10;
		}
		sub_1407DB590(
			(int*)(*(_QWORD*)(a1 + 28824) + 72i64 * *(unsigned int*)(a1 + 28808)),
			*((int**)a2 + 2),
			72i64 * *a2);
		*(_DWORD*)(a1 + 28808) = v9;
		*a2 = 0;
		a2[2] = 0;
	}
}
// 140C3A004: using guessed type int dword_140C3A004;
// 140C636A8: using guessed type int dword_140C636A8;

