//----- (0000000140591E40) ----------------------------------------------------
__int64 __fastcall sub_140591E40(__int64 a1)
{
	unsigned int v1; // ebx
	__int64 v3; // rax
	int v4; // edi
	__int64 v5; // rax
	int v6; // esi
	__int64 v7; // rax

	v1 = 0;
	if (dword_140C7DF24)
	{
		v4 = dword_140C7DF20;
	}
	else
	{
		dword_140C7DF24 = 1;
		v3 = sub_140200220(0x4CDu);
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 8);
			dword_140C7DF20 = v4;
		}
		else
		{
			v4 = 0;
			dword_140C7DF20 = 0;
		}
	}
	if (dword_140C7DF2C)
	{
		v6 = dword_140C7DF28;
	}
	else
	{
		dword_140C7DF2C = 1;
		v5 = sub_140200220(0x4CDu);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 12);
			dword_140C7DF28 = v6;
		}
		else
		{
			v6 = 0;
			dword_140C7DF28 = 0;
		}
	}
	if (dword_140C7DF34)
	{
		v1 = dword_140C7DF30;
	}
	else
	{
		dword_140C7DF34 = 1;
		v7 = sub_140200220(0x4CDu);
		if (v7)
			v1 = *(_DWORD*)(v7 + 16);
		dword_140C7DF30 = v1;
	}
	if (v4 + v6 * *(_DWORD*)(a1 + 432) < v1)
		return (unsigned int)(v4 + v6 * *(_DWORD*)(a1 + 432));
	return v1;
}
// 140C7DF20: using guessed type int dword_140C7DF20;
// 140C7DF24: using guessed type int dword_140C7DF24;
// 140C7DF28: using guessed type int dword_140C7DF28;
// 140C7DF2C: using guessed type int dword_140C7DF2C;
// 140C7DF30: using guessed type int dword_140C7DF30;
// 140C7DF34: using guessed type int dword_140C7DF34;

