//----- (000000014085C530) ----------------------------------------------------
void __fastcall sub_14085C530(__int64 a1)
{
	if (*(_DWORD*)(a1 + 160) && *(_DWORD*)(a1 + 208))
	{
		if ((unsigned int)sub_14085BAD0(a1) == 1)
		{
			*(_BYTE*)(a1 + 328) &= 0xF5u;
			*(_BYTE*)(a1 + 328) |= 4u;
		}
		else
		{
			*(_BYTE*)(a1 + 328) &= 0xF1u;
		}
		sub_14085C7E0(a1);
	}
	else
	{
		*(_BYTE*)(a1 + 328) &= 0xF1u;
		sub_14085C7E0(a1);
	}
}

