//----- (0000000140884DF0) ----------------------------------------------------
void __fastcall sub_140884DF0(__int64 a1)
{
	__int64 v2; // rax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v2 = *(_QWORD*)(a1 + 120);
	*(_BYTE*)(a1 + 194) |= 2u;
	(*(void(__fastcall**)(__int64))(v2 + 96))(a1 + 120);
	sub_140885F10(a1);
	if (*(_BYTE*)(a1 + 16))
		sub_140889450(*(_QWORD*)(a1 + 96), a1);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}

