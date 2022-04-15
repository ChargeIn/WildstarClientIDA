//----- (000000014003D880) ----------------------------------------------------
int __fastcall sub_14003D880(__int64* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // rax
	HANDLE EventW; // rcx

	v1 = *a1;
	v2 = *(_QWORD*)(*a1 + 8);
	if (v2 <= 1)
	{
		*(_DWORD*)v1 = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 8), 0i64);
		v2 = *(_QWORD*)(v1 + 16);
		if (v2)
		{
			if (!*(_QWORD*)(v1 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v2) = SetEvent(*(HANDLE*)(v1 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 8);
	}
	return v2;
}

