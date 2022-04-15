//----- (00000001401CE7A0) ----------------------------------------------------
void __fastcall sub_1401CE7A0(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64 v3; // rbx
	int CurrentThreadId; // r8d
	__int64 v5; // rcx
	__int64 v6; // rcx
	HANDLE EventW; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF
	__int64 v11; // [rsp+38h] [rbp+10h]

	v1 = a1[1];
	*a1 = off_140B5F928;
	if (v1)
	{
		v3 = v1 + 168;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v3 == CurrentThreadId)
		{
			++* (_QWORD*)(v3 + 8);
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60(v3, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v3 = CurrentThreadId;
		}
	LABEL_9:
		v6 = a1[1] + 136i64;
		v11 = a1[8];
		v10 = v11;
		sub_1401CFD80(v6, &v10);
		if (*(_QWORD*)(v3 + 8) <= 1ui64)
		{
			*(_DWORD*)v3 = 0;
			_InterlockedExchange64((volatile __int64*)(v3 + 8), 0i64);
			if (*(_QWORD*)(v3 + 16))
			{
				if (!*(_QWORD*)(v3 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v3 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v3 + 8);
		}
	}
	sub_14018B900(a1[2], 0);
	v8 = (_QWORD*)a1[9];
	if (v8)
		*v8 = a1[10];
	v9 = a1[10];
	if (v9)
		*(_QWORD*)(v9 + 72) = a1[9];
	a1[10] = 0i64;
	a1[9] = 0i64;
}
// 140B5F928: using guessed type __int64 (__fastcall *off_140B5F928[13])();

