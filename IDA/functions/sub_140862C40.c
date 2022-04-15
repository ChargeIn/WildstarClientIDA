//----- (0000000140862C40) ----------------------------------------------------
__int64 __fastcall sub_140862C40(__int64 a1, __int64 a2, __int64 a3)
{
	bool v6; // zf
	__int64 result; // rax

	if (*(_WORD*)(a2 + 18))
	{
		if (!*(_BYTE*)(a1 + 1072))
			sub_1408634C0(a1);
		v6 = *(_DWORD*)(a1 + 1064) == 4;
		*(_DWORD*)(a1 + 860) = 45;
		if (v6)
			*(_DWORD*)(a1 + 1064) = 1;
		sub_140863BC0(a2);
		*(_WORD*)(a2 + 18) = *(_WORD*)(a2 + 16);
		return sub_14087ACF0((unsigned __int16*)(a1 + 840), a2, a1 + 848, a3);
	}
	return result;
}

