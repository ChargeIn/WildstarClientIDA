//----- (00000001407F582C) ----------------------------------------------------
__int64 __fastcall sub_1407F582C(_DWORD* a1, int* a2, const CHAR* a3, int a4, int a5, char a6)
{
	unsigned int v10; // ebx
	LPVOID lpMem; // [rsp+40h] [rbp-18h] BYREF

	lpMem = 0i64;
	if (!(unsigned int)sub_1407DBA74(a3, &lpMem))
		return 0xFFFFFFFFi64;
	v10 = sub_1407F4A78(a1, a2, (const WCHAR*)lpMem, a4, a5, a6);
	sub_1407E14C0(lpMem);
	return v10;
}

