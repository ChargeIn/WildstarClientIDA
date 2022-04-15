//----- (00000001407AF980) ----------------------------------------------------
void __fastcall sub_1407AF980(_QWORD* a1)
{
	void* v2; // rcx
	void* v3; // rcx
	void* v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B78750;
	v2 = (void*)a1[5];
	if (v2)
		CloseHandle(v2);
	v3 = (void*)a1[27];
	if (v3)
		WinHttpCloseHandle(v3);
	v4 = (void*)a1[26];
	if (v4)
		WinHttpCloseHandle(v4);
	sub_14018B900(a1[12], 0);
	v5 = a1[10];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
}
// 140B78750: using guessed type __int64 (__fastcall *off_140B78750[19])();

