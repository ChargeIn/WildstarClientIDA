//----- (0000000140482370) ----------------------------------------------------
_BOOL8 __fastcall sub_140482370(_DWORD* a1)
{
	int v1; // eax
	_BOOL8 result; // rax

	result = 1;
	if (!a1[171] && !a1[1237])
	{
		v1 = a1[1291];
		if ((v1 & 4) != 0 && (v1 & 0x10) != 0)
			return 0;
	}
	return result;
}

