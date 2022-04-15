//----- (00000001401A6A00) ----------------------------------------------------
_WORD* __fastcall sub_1401A6A00(__int64 a1, unsigned __int16* a2, char a3)
{
	_WORD* v5; // rax
	__int16* i; // rdx
	__int16 v7; // ax
	__int16 v9; // [rsp+30h] [rbp+8h] BYREF
	__int16 v10; // [rsp+32h] [rbp+Ah]

	v5 = (_WORD*)sub_1401A4DE0(a1 + 8, a2);
	if (!v5 || !*v5)
		return 0i64;
	while (*v5 == 32 || (unsigned __int16)(*v5 - 9) <= 4u)
		++v5;
	if (*v5 != 61)
		return 0i64;
	for (i = v5 + 1; *i == 32 || (unsigned __int16)(*i - 9) <= 4u; ++i)
		;
	v7 = *i;
	if (*i != 34 && v7 != 39)
		return 0i64;
	v10 = 0;
	v9 = v7;
	return sub_1401A4D00(a1 + 32, i + 1, (__int64)&v9, (unsigned int)(a3 != 0) + 2);
}

