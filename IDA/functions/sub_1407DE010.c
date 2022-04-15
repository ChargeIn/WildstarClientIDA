//----- (00000001407DE010) ----------------------------------------------------
void __fastcall sub_1407DE010(int a1, __int64 a2)
{
	if (a1 >= 20)
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 48));
	}
	else
	{
		sub_1407E2340(a1 + 16);
		*(_DWORD*)(a2 + 24) |= 0x8000u;
	}
}

