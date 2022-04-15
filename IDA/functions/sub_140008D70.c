//----- (0000000140008D70) ----------------------------------------------------
__int64 sub_140008D70()
{
	__int64 v0; // rbx
	int v1; // eax

	v0 = qword_140C635F0;
	v1 = *(_DWORD*)(qword_140C635F0 + 64);
	if ((v1 & 1) == 0 || (v1 & 4) == 0)
		return 2147500037i64;
	PostMessageW(*(HWND*)(qword_140C635F0 + 8), 0x10u, 0i64, 0i64);
	*(_DWORD*)(v0 + 64) |= 8u;
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

