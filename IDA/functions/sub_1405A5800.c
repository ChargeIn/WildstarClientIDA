//----- (00000001405A5800) ----------------------------------------------------
__int64 __fastcall sub_1405A5800(__int64 a1, int* a2)
{
	__int64 v3; // rbx
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rdx
	PVOID* v9; // rax
	HANDLE EventW; // rcx
	__int64 v11; // rax
	__int64 v12; // rdi

	if ((dword_140DC3498 & 1) == 0)
	{
		dword_140DC3498 |= 1u;
		sub_1407DD89C(sub_140954700);
	}
	v3 = qword_140DC34A0;
	if (qword_140DC34A0)
		goto LABEL_24;
	v4 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v4 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 24);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4 + 16, CurrentThreadId);
				goto LABEL_11;
			}
		}
		*(_DWORD*)(v4 + 16) = CurrentThreadId;
	}
LABEL_11:
	if (!qword_140DC34A0)
	{
		v7 = sub_14018B280(128i64, 0);
		if (v7)
			v9 = sub_14019E5D0((PVOID*)v7, v8, 24);
		else
			v9 = 0i64;
		qword_140DC34A0 = (__int64)v9;
	}
	if (*(_QWORD*)(v4 + 24) <= 1ui64)
	{
		*(_DWORD*)(v4 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 24), 0i64);
		if (*(_QWORD*)(v4 + 32))
		{
			if (!*(_QWORD*)(v4 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v4 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 24);
	}
	v3 = qword_140DC34A0;
	if (qword_140DC34A0)
		LABEL_24:
	sub_14019E8F0(v3);
	v11 = sub_140561C30(qword_140C65B70, *a2);
	v12 = v11;
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		sub_14053F3F0(v12, a2);
	}
	if (v3)
		sub_14019EA00(v3);
	return 0i64;
}
// 1405A58B9: variable 'v8' is possibly undefined
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC3498: using guessed type int dword_140DC3498;
// 140DC34A0: using guessed type __int64 qword_140DC34A0;

