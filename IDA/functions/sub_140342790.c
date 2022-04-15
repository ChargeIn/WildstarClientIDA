//----- (0000000140342790) ----------------------------------------------------
__int64 __fastcall sub_140342790(__int64 a1, __int64 a2)
{
	int CurrentThreadId; // ecx
	__int64 v5; // rdx
	_QWORD* v6; // rdx
	_OWORD* v7; // rcx
	_QWORD** v8; // rdx
	__int64 v9; // rdx
	unsigned int v10; // eax
	__int64 v11; // rsi
	unsigned int v12; // ebx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A070 == CurrentThreadId)
	{
		++qword_140C7A078;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A078, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A070, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A070) = CurrentThreadId;
	}
LABEL_8:
	v6 = *(_QWORD**)(a1 + 32);
	if (v6 && *(_QWORD*)(a2 + 32))
	{
		if (v6[2])
		{
			v7 = (_OWORD*)v6[1];
		}
		else
		{
			v8 = (_QWORD**)v6[10];
			if (v8)
			{
				while (1)
				{
					v7 = (_OWORD*)sub_140341E40(*v8);
					if (v7)
						break;
					v8 = *(_QWORD***)(v9 + 24);
					if (!v8)
						goto LABEL_15;
				}
			}
			else
			{
			LABEL_15:
				v7 = 0i64;
			}
		}
		*(_DWORD*)(a1 + 48) = v7 != 0i64;
		if (v7)
		{
			*(_OWORD*)a1 = *v7;
			*(_OWORD*)(a1 + 16) = v7[1];
		}
		v10 = sub_140341A20(*(_QWORD*)(a1 + 32), *(_QWORD*)(a2 + 32));
		v11 = *(_QWORD*)(a1 + 32);
		v12 = v10;
		if (!*(_QWORD*)(v11 + 80) && *(_QWORD*)(v11 + 16) <= 1ui64)
		{
			if (v11)
			{
				sub_140341580(*(_QWORD*)(a1 + 32));
				sub_14018B900(v11, 0);
			}
			*(_QWORD*)(a1 + 32) = 0i64;
		}
	}
	else
	{
		v12 = -2147467259;
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
	}
	else
	{
		--qword_140C7A078;
	}
	return v12;
}
// 140342850: variable 'v9' is possibly undefined
// 140C7A070: using guessed type __int64 qword_140C7A070;
// 140C7A078: using guessed type __int64 qword_140C7A078;
// 140C7A080: using guessed type __int64 qword_140C7A080;

