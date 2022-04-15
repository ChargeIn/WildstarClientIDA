//----- (0000000140889010) ----------------------------------------------------
__int64 __fastcall sub_140889010(__int64 a1, char a2)
{
	struct _RTL_CRITICAL_SECTION* v3; // rcx

	v3 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	v3[-1].OwningThread = &off_1409A8128;
	DeleteCriticalSection(v3);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A8128: using guessed type __int64 (__fastcall *off_1409A8128)();

