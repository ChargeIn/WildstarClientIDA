//----- (0000000140884F70) ----------------------------------------------------
__int64 __fastcall sub_140884F70(__int64 a1, _DWORD* a2)
{
	__int64 v5; // rcx
	__int64* v6; // rax
	unsigned int v7; // ebp

	if ((*(_BYTE*)(a1 + 74) & 2) != 0)
		return 2i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	*a2 = 0;
	v5 = *(unsigned __int8*)(a1 + 72);
	if ((unsigned int)v5 >= *(_DWORD*)(a1 + 48))
	{
		v7 = 46;
	}
	else
	{
		v6 = *(__int64**)(a1 + 56);
		v7 = 45;
		if (*(_BYTE*)(a1 + 72))
		{
			do
			{
				v6 = (__int64*)*v6;
				--v5;
			} while (v5);
		}
		for (; v6; v6 = (__int64*)*v6)
			*a2 += *(_DWORD*)(v6[1] + 24) - *((_DWORD*)v6 + 4);
	}
	if ((*(_BYTE*)(a1 - 3) & 0x20) == 0 && *(_DWORD*)(a1 + 36) <= *a2 || *(_BYTE*)(*(_QWORD*)(a1 - 24) + 104i64))
		v7 = 17;
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	return v7;
}

