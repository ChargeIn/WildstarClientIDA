//----- (00000001407E14C0) ----------------------------------------------------
void __fastcall sub_1407E14C0(LPVOID lpMem)
{
	_DWORD* v1; // rbx
	int LastError; // eax

	if (lpMem)
	{
		if (!HeapFree(hHeap, 0, lpMem))
		{
			v1 = (_DWORD*)sub_1407DE1B0();
			LastError = GetLastError();
			*v1 = sub_1407DE1D0(LastError);
		}
	}
}
// 1407DE1B0: using guessed type __int64 sub_1407DE1B0(void);

