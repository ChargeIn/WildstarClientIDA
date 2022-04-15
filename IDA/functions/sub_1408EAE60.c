//----- (00000001408EAE60) ----------------------------------------------------
__int64 __fastcall sub_1408EAE60(__int64 a1, char a2)
{
	unsigned __int16 v3; // ax
	unsigned int v4; // edi
	__int16 v5; // r8

	if (!a2)
		--* (_WORD*)(a1 + 124);
	v3 = *(_WORD*)(a1 + 84);
	if (v3 > 1u)
		*(_WORD*)(a1 + 84) = v3 - 1;
	v4 = 45;
	if (a2)
		v4 = 17;
	if (!a2)
	{
		if (*(_WORD*)(a1 + 84) == 1)
			v5 = *(_WORD*)(a1 + 350);
		else
			v5 = *(_WORD*)(a1 + 338);
		sub_1408EBAE0(a1 + 144, *(_WORD*)(a1 + 336), v5);
		*(_DWORD*)(a1 + 136) = 3;
		*(_DWORD*)(a1 + 132) = 45;
	}
	return v4;
}

