//----- (0000000140889090) ----------------------------------------------------
void __fastcall sub_140889090(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	if (++ * (_DWORD*)(a1 + 100) == 1 && !*(_BYTE*)(a1 + 104))
		SetEvent(*(HANDLE*)(a1 + 88));
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

