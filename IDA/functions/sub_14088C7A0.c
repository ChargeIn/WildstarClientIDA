//----- (000000014088C7A0) ----------------------------------------------------
void __fastcall sub_14088C7A0(__int64 a1, int a2, DWORD* a3)
{
	LARGE_INTEGER* v6; // rax
	LARGE_INTEGER* v7; // rcx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v6 = *(LARGE_INTEGER**)a1;
	v7 = *(LARGE_INTEGER**)(a1 + 8);
	if (*(LARGE_INTEGER**)a1 != v7)
	{
		do
		{
			if (v6->LowPart == a2)
				break;
			v6 += 5;
		} while (v6 != v7);
		if (v6 != v7 && v6 != (LARGE_INTEGER*)-8i64)
		{
			v6[1].LowPart = *a3;
			v6[1].HighPart = a3[1];
			v6[2].LowPart = a3[2];
			v6[2].HighPart = a3[3];
			v6[3].LowPart = a3[4];
			QueryPerformanceCounter(v6 + 4);
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

