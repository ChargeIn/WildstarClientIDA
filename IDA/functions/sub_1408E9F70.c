//----- (00000001408E9F70) ----------------------------------------------------
__int64 __fastcall sub_1408E9F70(__int64 a1, char a2)
{
	unsigned __int16 v2; // ax
	unsigned int v4; // edi
	bool v5; // zf
	__int16 v6; // r8

	v2 = *(_WORD*)(a1 + 84);
	if (v2 > 1u)
		*(_WORD*)(a1 + 84) = v2 - 1;
	v4 = 45;
	if (a2)
		v4 = 17;
	if (!a2)
	{
		v5 = *(_WORD*)(a1 + 84) == 1;
		*(_QWORD*)(a1 + 352) = *(_QWORD*)(a1 + 360)
			+ *(unsigned int*)(a1 + 288)
			+ (unsigned __int64)*(unsigned int*)(a1 + 300);
		if (v5)
			v6 = *(_WORD*)(a1 + 310);
		else
			v6 = *(_WORD*)(a1 + 298);
		sub_1408EBAE0(a1 + 104, *(_WORD*)(a1 + 296), v6);
		*(_DWORD*)(a1 + 96) = 3;
		*(_DWORD*)(a1 + 92) = 45;
	}
	return v4;
}

