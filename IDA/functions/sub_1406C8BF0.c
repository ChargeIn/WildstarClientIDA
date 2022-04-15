//----- (00000001406C8BF0) ----------------------------------------------------
__int64 __fastcall sub_1406C8BF0(_QWORD* a1)
{
	__int64 v1; // rsi
	__int64 v2; // rdx
	__int64 v4; // r8
	__int64 v5; // r9
	unsigned __int64 i; // rcx
	__int64 v7; // r14
	__int64 v8; // r15
	unsigned int v9; // r11d
	__int64 v10; // r8
	__int64 v11; // rcx
	unsigned __int64 j; // rcx
	__int64 v14; // rbx
	__int64 v15; // r8
	__int64 v16; // rbx
	unsigned __int64 k; // rcx
	__int64 v18; // r14
	__int16 v19; // r8
	wchar_t v20; // ax
	__int64 v21; // rbx
	__int64 v22; // rdi

	v1 = a1[4];
	v2 = 0i64;
	v4 = *(_QWORD*)(v1 + 3384);
	v5 = 0i64;
	if (v4 && (*(_DWORD*)(v4 + 432) & 0x10000000) != 0)
		v5 = *(_QWORD*)(v1 + 3384);
	for (i = 0i64; aLasbar[i]; ++i)
		;
	v7 = a1[184];
	v8 = (a1[185] - v7) >> 1;
	v9 = 1;
	if (v8 == i)
	{
		v10 = 0i64;
		if (i)
		{
			while (*(_WORD*)(v7 + 2 * v10) == aLasbar[v10])
			{
				if (++v10 >= i)
					goto LABEL_12;
			}
		}
		else
		{
		LABEL_12:
			v11 = *(_QWORD*)(v1 + 3440);
			if (*(_QWORD*)(v1 + 3448) - v11 == 11
				&& *(_QWORD*)v11 == 0x6E6F697463414444i64
				&& *(_WORD*)(v11 + 8) == 24898
				&& *(_BYTE*)(v11 + 10) == 114)
			{
				if (!v5)
					return 3;
				return v9;
			}
		}
	}
	if (!v5)
		goto LABEL_28;
	for (j = 0i64; aLasbar[j]; ++j)
		;
	v14 = *(_QWORD*)(v5 + 1472);
	if ((*(_QWORD*)(v5 + 1480) - v14) >> 1 != j)
		goto LABEL_28;
	v15 = 0i64;
	if (!j)
		return v9;
	v16 = v14 - (_QWORD)L"LASBar";
	while (*(wchar_t*)((char*)&aLasbar[v15] + v16) == aLasbar[v15])
	{
		if (++v15 >= j)
			return 1i64;
	}
LABEL_28:
	for (k = 0i64; aAbar[k]; ++k)
		;
	if (v8 == k)
	{
		if (k)
		{
			v18 = v7 - (_QWORD)L"ABar";
			while (1)
			{
				v19 = *(wchar_t*)((char*)&aAbar[v2] + v18);
				v20 = aAbar[v2];
				if (v19 != v20)
					break;
				if (++v2 >= k)
					goto LABEL_37;
			}
		}
		else
		{
		LABEL_37:
			v21 = *(_QWORD*)(v1 + 3440);
			v22 = *(_QWORD*)(v1 + 3448) - v21;
			if (v22 == 9 && *(_QWORD*)v21 == 0x6574496761424444i64 && *(_BYTE*)(v21 + 8) == 109
				|| v22 == 11
				&& *(_QWORD*)v21 == 0x6E6F697463414444i64
				&& *(_WORD*)(v21 + 8) == 24898
				&& *(_BYTE*)(v21 + 10) == 114
				|| v22 == 12 && *(_QWORD*)v21 == 0x6465726168534444i64 && *(_DWORD*)(v21 + 8) == 1835365449
				|| v22 == 15
				&& !(unsigned int)sub_1407E6AF0(*(unsigned __int64**)(v1 + 3440), (__int64)"DDSpellbookItem", 0xFui64)
				|| v22 == 7 && *(_DWORD*)v21 == 1632453700 && *(_WORD*)(v21 + 4) == 29283 && *(_BYTE*)(v21 + 6) == 111
				|| v22 == 11
				&& *(_QWORD*)v21 == 0x6D6F436E6F4E4444i64
				&& *(_WORD*)(v21 + 8) == 24930
				&& *(_BYTE*)(v21 + 10) == 116
				|| v22 == 13
				&& *(_QWORD*)v21 == 0x6F43656D61474444i64
				&& *(_DWORD*)(v21 + 8) == 1851878765
				&& *(_BYTE*)(v21 + 12) == 100)
			{
				return 2i64;
			}
		}
	}
	return 3i64;
}
// 1406C8CDC: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C8DA7: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C8E05: conditional instruction was optimized away because r11d.4 is in (==1|==FFFFFFFF)
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B397A8: using guessed type wchar_t aLasbar[7];
// 140B397D0: using guessed type __int64 qword_140B397D0;

