//----- (00000001408893C0) ----------------------------------------------------
BOOL __fastcall sub_1408893C0(__int64 a1)
{
	bool v1; // cc
	BOOL result; // eax

	if (*(_BYTE*)(a1 + 104))
	{
		v1 = *(_DWORD*)(a1 + 100) <= 0;
		*(_BYTE*)(a1 + 104) = 0;
		if (!v1)
			return SetEvent(*(HANDLE*)(a1 + 88));
	}
	return result;
}

