//----- (0000000140839D40) ----------------------------------------------------
__int64 __fastcall sub_140839D40(__int64 a1, _DWORD* a2, __int64* a3)
{
	__int64 v7; // rdi
	unsigned int v8; // edi

	if (!*(_QWORD*)(a1 + 104))
		return 0i64;
	*(_DWORD*)(a1 + 176) = 0;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
	if (*(_DWORD*)(a1 + 96))
	{
		if (*(_QWORD*)(a1 + 40) != *(_QWORD*)(a1 + 32))
		{
			while (1)
			{
				v7 = *(_QWORD*)(a1 + 32);
				*a3 = *(_QWORD*)(v7 + 8);
				if (*(_DWORD*)v7)
					break;
				sub_140839940(a1 + 32, 0);
				sub_14083B960(qword_140C61B80, *(_DWORD*)(a1 + 136), 0, *a3);
				if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 32))
					goto LABEL_9;
			}
			sub_1408397D0(a1 + 176, v7);
			*a2 = *(_DWORD*)(v7 + 4);
			sub_140839940(a1 + 32, 0);
		}
	LABEL_9:
		if (!*(_DWORD*)(a1 + 176))
			*(_DWORD*)(a1 + 96) = 2;
	}
	v8 = *(_DWORD*)(a1 + 176);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
	return v8;
}
// 140C61B80: using guessed type __int64 qword_140C61B80;

