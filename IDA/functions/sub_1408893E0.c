//----- (00000001408893E0) ----------------------------------------------------
BOOL __fastcall sub_1408893E0(__int64 a1)
{
	bool v1; // cc
	BOOL result; // eax

	v1 = *(_DWORD*)(a1 + 100) <= 0;
	*(_BYTE*)(a1 + 104) = 1;
	if (!v1)
		return ResetEvent(*(HANDLE*)(a1 + 88));
	return result;
}

