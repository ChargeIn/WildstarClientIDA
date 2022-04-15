//----- (00000001408862C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1408862C0(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rbx
	bool v3; // di

	v1 = (struct _RTL_CRITICAL_SECTION*)(a1 + 48);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v3 = !*(_QWORD*)(a1 + 184) && !*(_BYTE*)(a1 + 192);
	LeaveCriticalSection(v1);
	return v3;
}

