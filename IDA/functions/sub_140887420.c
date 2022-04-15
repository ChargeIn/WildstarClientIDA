//----- (0000000140887420) ----------------------------------------------------
__int64 __fastcall sub_140887420(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rbx
	__int64 v2; // rdi

	v1 = (struct _RTL_CRITICAL_SECTION*)(a1 + 48);
	v2 = a1;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	LOBYTE(v2) = *(_QWORD*)(v2 + 200) == 0i64;
	LeaveCriticalSection(v1);
	return (unsigned __int8)v2;
}

