//----- (0000000140829860) ----------------------------------------------------
__int64 __fastcall sub_140829860(__int64 a1, unsigned int a2)
{
	unsigned int v3; // edi
	__int64 v4; // rsi
	unsigned __int64 v5; // rbp
	__int64 v6; // rcx

	if (a2 < 2)
		a2 = 2;
	v3 = 0;
	*(_DWORD*)(a1 + 24) = a2;
	while (1)
	{
		v4 = sub_1408819F0(dword_140C10F20, (unsigned int)dword_140C10F24);
		if (!v4)
			break;
		v5 = (unsigned int)((__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4);
		if (v5 >= *(unsigned int*)(a1 + 16) && !sub_1408297A0((__int64*)a1, 4)
			|| v5 >= *(unsigned int*)(a1 + 16)
			|| (v6 = *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 8) = v6 + 16, !v6))
		{
			sub_140881720(dword_140C10F20, v4);
			return 52i64;
		}
		++v3;
		*(_QWORD*)v6 = v4;
		*(_DWORD*)(v6 + 8) = 0;
		if (v3 >= 2)
			return 1i64;
	}
	return 52i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F24: using guessed type int dword_140C10F24;

