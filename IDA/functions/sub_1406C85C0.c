//----- (00000001406C85C0) ----------------------------------------------------
__int64 __fastcall sub_1406C85C0(__int64 a1, unsigned int a2, int* a3)
{
	__int64 v4; // r10
	unsigned __int64 i; // r9
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	unsigned __int64 j; // rcx
	__int64 v10; // rbx

	if ((*(_BYTE*)(a1 + 1436) & 0x20) == 0 || !*(_BYTE*)(a1 + 3104))
		goto LABEL_21;
	v4 = 0i64;
	for (i = 0i64; aAbar[i]; ++i)
		;
	v6 = *(_QWORD*)(a1 + 1472);
	v7 = (*(_QWORD*)(a1 + 1480) - v6) >> 1;
	if (v7 != i)
		goto LABEL_10;
	v8 = 0i64;
	if (i)
	{
		while (*(_WORD*)(v6 + 2 * v8) == aAbar[v8])
		{
			if (++v8 >= i)
				goto LABEL_19;
		}
	LABEL_10:
		for (j = 0i64; aGcbar[j]; ++j)
			;
		if (v7 != j)
			goto LABEL_21;
		if (j)
		{
			v10 = v6 - (_QWORD)L"GCBar";
			while (*(wchar_t*)((char*)&aGcbar[v4] + v10) == aGcbar[v4])
			{
				if (++v4 >= j)
					goto LABEL_19;
			}
			goto LABEL_21;
		}
	}
LABEL_19:
	if (!byte_140C65C3C)
	{
		sub_1406C8FB0(a1, 1);
		return 0i64;
	}
LABEL_21:
	*(_BYTE*)(a1 + 3104) = 0;
	return sub_140130E00(a1, a2, a3);
}
// 1406C868D: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C86ED: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140B39730: using guessed type wchar_t aGcbar[6];
// 140B39778: using guessed type wchar_t aAbar[5];
// 140C65C3C: using guessed type char byte_140C65C3C;

