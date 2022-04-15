//----- (00000001406C8950) ----------------------------------------------------
char __fastcall sub_1406C8950(__int64 a1, unsigned __int8 a2)
{
	int v4; // eax
	__int64 v5; // rdx
	unsigned __int64 i; // rcx
	__int64 v7; // rdi
	__int64 v8; // r11
	unsigned __int64 j; // rcx
	__int64 v10; // r9
	__int64 k; // rcx
	__int64 v12; // rax
	__int64 v13; // r8
	unsigned __int64 m; // rcx
	__int64 v15; // rdi
	__int16 v16; // r8
	wchar_t v17; // ax
	__int64 v18; // rax
	__int64 v19; // rdi
	char v20; // si
	char result; // al
	__int64 v22; // rcx
	__int64 v23; // rcx

	v4 = sub_1406C69B0(a1);
	if (v4 >= 0)
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(qword_140C65898 + 30088) + 272i64))(
			*(_QWORD*)(qword_140C65898 + 30088),
			(unsigned int)v4,
			a2);
	for (i = 0i64; aSbar[i]; ++i)
		;
	v7 = *(_QWORD*)(a1 + 1472);
	v8 = (*(_QWORD*)(a1 + 1480) - v7) >> 1;
	if (v8 == i)
	{
		v5 = 0i64;
		if (!i)
			goto LABEL_18;
		while (*(_WORD*)(v7 + 2 * v5) == aSbar[v5])
		{
			if (++v5 >= i)
				goto LABEL_18;
		}
	}
	for (j = 0i64; aRmsbar[j]; ++j)
		;
	if (v8 == j)
	{
		v5 = 0i64;
		if (j)
		{
			while (*(_WORD*)(v7 + 2 * v5) == aRmsbar[v5])
			{
				if (++v5 >= j)
					goto LABEL_18;
			}
			goto LABEL_26;
		}
	LABEL_18:
		v10 = qword_140C65898;
		v5 = 0i64;
		for (k = 0i64; k < 108; k += 12i64)
		{
			v12 = *(unsigned int*)(a1 + 1496);
			if (*(_QWORD*)(v10 + 120))
			{
				if ((unsigned int)v12 < 0xC && v5 < 9)
				{
					v13 = *(_QWORD*)(v10 + 8 * (k + v12) + 4328);
					if (v13)
						*(_DWORD*)(v13 + 520) = a2;
				}
			}
			++v5;
		}
		goto LABEL_37;
	}
LABEL_26:
	for (m = 0i64; aLasbar[m]; ++m)
		;
	if (v8 == m)
	{
		v5 = 0i64;
		if (m)
		{
			v15 = v7 - (_QWORD)L"LASBar";
			while (1)
			{
				v16 = *(wchar_t*)((char*)&aLasbar[v5] + v15);
				v17 = aLasbar[v5];
				if (v16 != v17)
					break;
				if (++v5 >= m)
					goto LABEL_35;
			}
		}
		else
		{
		LABEL_35:
			v18 = sub_1403C1EA0(qword_140C65898, *(_DWORD*)(a1 + 1496), *(_BYTE*)(qword_140C65898 + 28140));
			if (v18)
				*(_DWORD*)(v18 + 520) = a2;
		}
	}
LABEL_37:
	*(_BYTE*)(a1 + 28) &= ~8u;
	v19 = *(_QWORD*)(a1 + 32);
	v20 = a2 & 1;
	result = 8 * v20;
	*(_BYTE*)(a1 + 28) |= 8 * v20;
	if (v19)
	{
		if (*(_QWORD*)(v19 + 2880) == a1)
		{
			v22 = *(_QWORD*)(v19 + 2880);
			if (v22)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v22 + 416i64))(v22, v5);
				result = sub_1400D4070(*(_QWORD*)(v19 + 2880), 0x10u, *(char**)(v19 + 2880), byte_1409D0333);
				v23 = *(_QWORD*)(v19 + 2880);
				if (v23)
				{
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
					*(_QWORD*)(v19 + 2880) = 0i64;
				}
			}
		}
	}
	*(_BYTE*)(a1 + 1436) &= ~0x10u;
	*(_BYTE*)(a1 + 1436) |= 16 * v20;
	return result;
}
// 1406C8A1A: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C8A7B: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C8B24: conditional instruction was optimized away because ebp.4 is in (==1|==FFFFFFFF)
// 1406C8B82: variable 'v5' is possibly undefined
// 1409D0333: using guessed type _BYTE byte_1409D0333[5];
// 140B39758: using guessed type wchar_t aRmsbar[7];
// 140B39788: using guessed type wchar_t aSbar[5];
// 140B397A8: using guessed type wchar_t aLasbar[7];
// 140C65898: using guessed type __int64 qword_140C65898;

