//----- (0000000140886270) ----------------------------------------------------
_BOOL8 __fastcall sub_140886270(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rbx
	bool v3; // di

	v1 = (struct _RTL_CRITICAL_SECTION*)(a1 + 48);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v3 = !*(_QWORD*)(a1 + 200) && !*(_BYTE*)(a1 + 208);
	LeaveCriticalSection(v1);
	return v3;
}

