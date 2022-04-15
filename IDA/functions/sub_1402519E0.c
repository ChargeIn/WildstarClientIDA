//----- (00000001402519E0) ----------------------------------------------------
int __fastcall sub_1402519E0(__int64 a1)
{
	HWND v2; // rcx
	__int64 v3; // rax

	qword_140C65678 = 0i64;
	*(_QWORD*)a1 = &off_140B603A0;
	v2 = *(HWND*)(a1 + 8);
	if (v2)
	{
		SetWindowLongPtrW(v2, -21, 0i64);
		DestroyWindow(*(HWND*)(a1 + 8));
	}
	v3 = *(_QWORD*)(a1 + 56);
	if (v3)
		LODWORD(v3) = CloseHandle(*(HANDLE*)(a1 + 56));
	return v3;
}
// 140B603A0: using guessed type __int64 (__fastcall *off_140B603A0)();
// 140C65678: using guessed type __int64 qword_140C65678;

