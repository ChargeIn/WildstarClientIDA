//----- (000000014083ED20) ----------------------------------------------------
__int64 __fastcall sub_14083ED20(struct _RTL_CRITICAL_SECTION* a1, __int64 a2, unsigned int a3, unsigned __int64* a4)
{
	__int64* v8; // rax

	*(_QWORD*)a2 = 0i64;
	*(_DWORD*)(a2 + 8) = 0;
	EnterCriticalSection(&stru_140C62878);
	EnterCriticalSection(a1 + 3);
	v8 = (__int64*)*((_QWORD*)&a1[5].LockSemaphore + a3 % 0xC1);
	if (v8)
	{
		while (*((_DWORD*)v8 + 2) != a3)
		{
			v8 = (__int64*)*v8;
			if (!v8)
				goto LABEL_7;
		}
		if (v8 != (__int64*)-16i64)
			sub_14083EC40((__int64)(v8 + 2), (_QWORD*)a2, a4);
	}
LABEL_7:
	LeaveCriticalSection(a1 + 3);
	LeaveCriticalSection(&stru_140C62878);
	return a2;
}

