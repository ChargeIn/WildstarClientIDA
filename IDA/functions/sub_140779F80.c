//----- (0000000140779F80) ----------------------------------------------------
void** __fastcall sub_140779F80(__int64 a1)
{
	void** result; // rax

	if (*(_DWORD*)(a1 + 168))
	{
		*(_DWORD*)(a1 + 188) = 1;
	}
	else
	{
		result = sub_140779A70(a1);
		*(_DWORD*)(a1 + 188) = 1;
	}
	return result;
}

