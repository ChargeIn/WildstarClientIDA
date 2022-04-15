//----- (0000000140342950) ----------------------------------------------------
__int64 __fastcall sub_140342950(__int64 a1)
{
	int CurrentThreadId; // ecx
	__int64 v3; // rdx
	_QWORD* v4; // rdx
	unsigned int v5; // ebx
	_OWORD* v6; // rcx
	_QWORD** v7; // rdx
	__int64 v8; // rdx
	unsigned int v9; // eax
	__int64 v10; // rsi
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A070 == CurrentThreadId)
	{
		++qword_140C7A078;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A078, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A070, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A070) = CurrentThreadId;
	}
LABEL_8:
	v4 = *(_QWORD**)(a1 + 32);
	if (v4)
	{
		if (v4[2])
		{
			v6 = (_OWORD*)v4[1];
		}
		else
		{
			v7 = (_QWORD**)v4[10];
			if (v7)
			{
				while (1)
				{
					v6 = (_OWORD*)sub_140341E40(*v7);
					if (v6)
						break;
					v7 = *(_QWORD***)(v8 + 24);
					if (!v7)
						goto LABEL_15;
				}
			}
			else
			{
			LABEL_15:
				v6 = 0i64;
			}
		}
		*(_DWORD*)(a1 + 48) = v6 != 0i64;
		if (v6)
		{
			*(_OWORD*)a1 = *v6;
			*(_OWORD*)(a1 + 16) = v6[1];
		}
		v9 = sub_140341AB0(*(_QWORD*)(a1 + 32));
		v10 = *(_QWORD*)(a1 + 32);
		v5 = v9;
		if (!*(_QWORD*)(v10 + 80) && *(_QWORD*)(v10 + 16) <= 1ui64)
		{
			if (v10)
			{
				sub_140341580(*(_QWORD*)(a1 + 32));
				sub_14018B900(v10, 0);
			}
			*(_QWORD*)(a1 + 32) = 0i64;
		}
	}
	else
	{
		v5 = -2147467259;
	}
	if ((unsigned __int64)qword_140C7A078 <= 1)
	{
		LODWORD(qword_140C7A070) = 0;
		_InterlockedExchange64(&qword_140C7A078, 0i64);
		if (qword_140C7A080)
		{
			if (!qword_140C7A088)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A088, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A088);
		}
		return v5;
	}
	else
	{
		--qword_140C7A078;
		return v5;
	}
}
// 140342A10: variable 'v8' is possibly undefined
// 140C7A070: using guessed type __int64 qword_140C7A070;
// 140C7A078: using guessed type __int64 qword_140C7A078;
// 140C7A080: using guessed type __int64 qword_140C7A080;

