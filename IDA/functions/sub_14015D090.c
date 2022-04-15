//----- (000000014015D090) ----------------------------------------------------
__int64 __fastcall sub_14015D090(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned int* a7)
{
	unsigned __int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rdx
	int v12; // ecx

	*(_BYTE*)a1 = 1;
	*(_BYTE*)(a1 + 2) = 1;
	*(_DWORD*)(a1 + 4) = a3;
	*(_QWORD*)(a1 + 16) = 0i64;
	sub_1401095E0(a1 + 24);
	*(_DWORD*)(a1 + 72) = a6;
	v9 = *a7;
	v10 = qword_140C63678;
	*(_DWORD*)(a1 + 76) = v9;
	if (v9 < *(_QWORD*)(v10 + 48))
	{
		v11 = 32i64 * (unsigned int)v9 + *(_QWORD*)(v10 + 40);
		v12 = *(_DWORD*)(v11 + 16);
		if ((unsigned int)(v12 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v11 + 16) = v12 + 1;
	}
	*(_DWORD*)(a1 + 8) = 10;
	*(_DWORD*)(a1 + 12) = 2048;
	sub_14015D130(a1, &unk_1409DC7A4, a4);
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

