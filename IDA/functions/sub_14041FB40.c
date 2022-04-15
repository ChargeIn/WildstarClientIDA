//----- (000000014041FB40) ----------------------------------------------------
_BOOL8 __fastcall sub_14041FB40(__int64 a1)
{
	int v1; // edx
	_BOOL8 result; // rax

	result = 0;
	if ((*(_BYTE*)(a1 + 336) & 8) == 0 && (*(_BYTE*)(a1 + 332) & 0xC0) == 0 && !*(_DWORD*)(a1 + 424))
	{
		v1 = *(_DWORD*)(a1 + 340);
		if ((v1 & 0x80) != 0 && (v1 & 0x8000) == 0 && (v1 & 0x10000) == 0)
			return 1;
	}
	return result;
}

