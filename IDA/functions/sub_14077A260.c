//----- (000000014077A260) ----------------------------------------------------
void** __fastcall sub_14077A260(__int64 a1)
{
	void** result; // rax

	if (*(_DWORD*)(a1 + 168))
	{
		*(_DWORD*)(a1 + 176) = 1;
	}
	else
	{
		result = sub_140779A70(a1);
		*(_DWORD*)(a1 + 176) = 1;
	}
	return result;
}

