//----- (00000001400B7F50) ----------------------------------------------------
__int64 __fastcall sub_1400B7F50(__int64 a1, __int64 a2, unsigned __int16* a3, _DWORD* a4)
{
	unsigned __int64 v6; // rbx
	bool v7; // zf
	WCHAR* v8; // rbx
	WCHAR i; // ax

	if (!a2 || !a3)
		return 0i64;
	v6 = 0i64;
	if (*a3)
	{
		do
			++v6;
		while (a3[v6]);
	}
	if ((unsigned int)sub_14018E3E0(a2, a3, v6))
		return 0i64;
	v7 = *(_WORD*)(a2 + 2 * v6) == 0;
	v8 = (WCHAR*)(a2 + 2 * v6);
	if (v7)
		return 0i64;
	*a4 = sub_1407DF510(v8);
	for (i = *v8; i; ++v8)
	{
		if ((unsigned __int16)(i - 48) > 9u)
			break;
		i = v8[1];
	}
	return ((__int64)v8 - a2) >> 1;
}

