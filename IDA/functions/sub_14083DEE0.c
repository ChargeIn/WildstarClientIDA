//----- (000000014083DEE0) ----------------------------------------------------
__int64 __fastcall sub_14083DEE0(struct _RTL_CRITICAL_SECTION* a1)
{
	sub_14083CCF0((__int64)&a1[57].LockSemaphore);
	DeleteCriticalSection(a1 + 3);
	DeleteCriticalSection(a1 + 2);
	return nullsub_1(a1);
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);

