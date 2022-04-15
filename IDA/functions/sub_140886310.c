//----- (0000000140886310) ----------------------------------------------------
void __fastcall sub_140886310(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	sub_140885D10(a1 - 120, 3);
	if (*(_QWORD*)(a1 + 64))
	{
		*(_BYTE*)(a1 + 72) = 1;
		sub_140889400(a1 - 120);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		sub_140889590(*(_QWORD*)(a1 - 24), a1 - 120);
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		*(_BYTE*)(a1 + 72) = 0;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
}

