//----- (0000000140888FC0) ----------------------------------------------------
_QWORD* __fastcall sub_140888FC0(_QWORD* a1, char a2)
{
	void* v4; // rcx

	*a1 = off_1409A8120;
	v4 = (void*)a1[1];
	if (v4)
	{
		CloseHandle(v4);
		a1[1] = 0i64;
	}
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A8120: using guessed type __int64 (__fastcall *off_1409A8120[2])();

