//----- (00000001408884F0) ----------------------------------------------------
__int64 __fastcall sub_1408884F0(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rbx
	unsigned int v3; // edi

	v1 = (struct _RTL_CRITICAL_SECTION*)(a1 - 72);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	if (*(_QWORD*)(a1 + 64))
		v3 = 2;
	else
		v3 = (int)(*(_DWORD*)(a1 + 56) << 28) >> 28;
	LeaveCriticalSection(v1);
	return v3;
}

