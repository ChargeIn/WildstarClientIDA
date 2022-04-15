//----- (000000014018E5E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14018E5E0(_WORD* a1, unsigned __int16* a2)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 v4; // rbx
	unsigned __int64 v5; // rax
	_WORD* v6; // rbp

	v2 = 0i64;
	v4 = (unsigned __int64)a1;
	v5 = 0i64;
	if (*a1)
	{
		do
			++v5;
		while (a1[v5]);
	}
	if (*a2)
	{
		do
			++v2;
		while (a2[v2]);
		if (v5 < v2)
			return 0i64;
	}
	v6 = &a1[v5 - v2];
	if (a1 > v6)
		return 0i64;
	while ((unsigned int)sub_14018E3E0(v4, a2, v2))
	{
		v4 += 2i64;
		if (v4 > (unsigned __int64)v6)
			return 0i64;
	}
	return v4;
}

