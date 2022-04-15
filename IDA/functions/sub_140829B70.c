//----- (0000000140829B70) ----------------------------------------------------
struct _RTL_CRITICAL_SECTION* __fastcall sub_140829B70(struct _RTL_CRITICAL_SECTION* a1)
{
	struct _RTL_CRITICAL_SECTION* v2; // rcx
	struct _RTL_CRITICAL_SECTION* result; // rax

	v2 = a1 + 3;
	v2[-3].DebugInfo = 0i64;
	*(_QWORD*)&v2[-3].LockCount = 0i64;
	LODWORD(v2[-3].OwningThread) = 0;
	*(_QWORD*)&v2[-2].LockCount = 0i64;
	LODWORD(v2[-2].OwningThread) = 0;
	v2[-1].OwningThread = 0i64;
	LODWORD(v2[-1].LockSemaphore) = 0;
	InitializeCriticalSection(v2);
	a1[4].DebugInfo = 0i64;
	*(_QWORD*)&a1[4].LockCount = 0i64;
	result = a1;
	a1[4].OwningThread = 0i64;
	a1[4].LockSemaphore = 0i64;
	return result;
}

