//----- (00000001408837E0) ----------------------------------------------------
void __fastcall sub_1408837E0(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = (_QWORD*)(a1 + 168);
	*(v2 - 21) = &off_1409A79F0;
	sub_1408895E0(v2);
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	sub_140888FA0(a1);
}
// 1409A79F0: using guessed type __int64 (__fastcall *off_1409A79F0)();

