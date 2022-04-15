//----- (000000014083B4B0) ----------------------------------------------------
DWORD __fastcall sub_14083B4B0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	int v5; // ebx
	DWORD result; // eax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v4 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (v4)
	{
		while (*(_DWORD*)(v4 + 48) != a2)
		{
			v4 = *(_QWORD*)(v4 + 80);
			if (!v4)
				goto LABEL_6;
		}
		*(_QWORD*)(v4 + 56) = 0i64;
		*(_WORD*)(v4 + 72) = 0;
	}
LABEL_6:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v5 = dword_140C62408;
	result = GetCurrentThreadId();
	if (v5 != result)
		return WaitForSingleObject(*(HANDLE*)(a1 + 296), 0xFFFFFFFF);
	return result;
}
// 14083B513: conditional instruction was optimized away because rax.8!=0
// 140C62408: using guessed type int dword_140C62408;

