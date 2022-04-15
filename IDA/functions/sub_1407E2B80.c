//----- (00000001407E2B80) ----------------------------------------------------
bool __fastcall sub_1407E2B80(__int64 a1)
{
	bool result; // al
	__int64 v2; // rcx

	if (*(_WORD*)a1 != 23117)
		return 0;
	v2 = a1 + *(int*)(a1 + 60);
	result = 0;
	if (*(_DWORD*)v2 == 17744)
		return *(_WORD*)(v2 + 24) == 523;
	return result;
}

