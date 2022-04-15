//----- (00000001407E089C) ----------------------------------------------------
__int64 __fastcall sub_1407E089C(unsigned __int64 a1)
{
	unsigned int v2; // edi

	v2 = -1;
	if (a1)
	{
		if ((*(_BYTE*)(a1 + 24) & 0x40) != 0)
		{
			*(_DWORD*)(a1 + 24) = 0;
		}
		else
		{
			sub_1407DDFA8(a1);
			v2 = sub_1407E0820(a1);
			sub_1407DE044(a1);
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
	return v2;
}

