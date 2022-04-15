//----- (00000001407F7228) ----------------------------------------------------
__int64 __fastcall sub_1407F7228(int a1, unsigned __int64 a2)
{
	unsigned int v5; // edi

	if (a2)
	{
		sub_1407DDFA8(a2);
		v5 = sub_1407F7120(a1, a2);
		sub_1407DE044(a2);
		return v5;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

