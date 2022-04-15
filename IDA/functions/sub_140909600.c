//----- (0000000140909600) ----------------------------------------------------
__int64 __fastcall sub_140909600(unsigned __int16* a1, int a2)
{
	unsigned __int8* v4; // rdi
	unsigned int v5; // esi
	_BYTE* v6; // rbx
	int v7; // eax

	v4 = "alpha";
	v5 = 0;
	v6 = &unk_1409CE408;
	while (a2 != (unsigned __int8)*v6 || (unsigned int)sub_140919950(a1, v4, a2))
	{
		v7 = (unsigned __int8)*v6++;
		++v5;
		v4 += v7 + 1;
		if (!*v6)
			return 0xFFFFFFFFi64;
	}
	return v5;
}

