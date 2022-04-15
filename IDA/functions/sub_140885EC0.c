//----- (0000000140885EC0) ----------------------------------------------------
__int64 __fastcall sub_140885EC0(__int64 a1)
{
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	*(_BYTE*)(a1 + 74) &= ~1u;
	*(_BYTE*)(a1 - 3) &= ~0x40u;
	sub_1408843E0(a1 - 120);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	return 1i64;
}

