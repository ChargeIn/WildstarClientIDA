//----- (0000000140883980) ----------------------------------------------------
__int64 __fastcall sub_140883980(__int64 a1, char a2)
{
	_QWORD* v3; // rcx

	v3 = (_QWORD*)(a1 + 168);
	*(v3 - 21) = &off_1409A79F0;
	sub_1408895E0(v3);
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	sub_140888FA0(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A79F0: using guessed type __int64 (__fastcall *off_1409A79F0)();

