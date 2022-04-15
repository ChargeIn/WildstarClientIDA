//----- (00000001408869E0) ----------------------------------------------------
void __fastcall sub_1408869E0(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	*(_BYTE*)(a1 - 3) = *(_BYTE*)(a1 - 3) & 0xB7 | 8;
	sub_140885D10(a1 - 120, 3);
	if (*(_QWORD*)(a1 + 64))
	{
		*(_BYTE*)(a1 + 72) = 1;
		sub_140889400(a1 - 120);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		sub_140889590(*(_QWORD*)(a1 - 24), a1 - 120);
		*(_BYTE*)(a1 + 72) = 0;
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
}

