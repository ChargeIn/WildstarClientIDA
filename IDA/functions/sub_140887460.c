//----- (0000000140887460) ----------------------------------------------------
void __fastcall sub_140887460(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	if (*(_QWORD*)(a1 + 64) || *(_QWORD*)(a1 + 80))
	{
		sub_140885D10(a1 - 120, 3);
		sub_140889400(a1 - 120);
		sub_1408877C0(a1 - 120, (__int64*)(a1 + 64), 1);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		sub_140889590(*(_QWORD*)(a1 - 24), a1 - 120);
	}
	else
	{
		sub_140885D10(a1 - 120, 3);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	}
}

