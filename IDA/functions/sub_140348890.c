//----- (0000000140348890) ----------------------------------------------------
int __fastcall sub_140348890(__int64 a1)
{
	int CurrentThreadId; // eax
	__int64 v3; // rdx
	__int64 v4; // rcx
	_QWORD* v5; // rdi
	_QWORD* v6; // rbx
	__int64 v7; // r15
	__int64 v8; // rbp
	unsigned int v9; // edx
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA98 == CurrentThreadId)
	{
		++qword_140C7AAA0;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AAA0, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA98, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA98) = CurrentThreadId;
	}
LABEL_8:
	if (*(_DWORD*)(a1 + 16) != -2147483638)
	{
		v4 = *(_QWORD*)(a1 + 56);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
		sub_14034A1A0(a1 + 8, 0);
		sub_14034A2B0(a1 + 8);
		_InterlockedIncrement((volatile signed __int32*)(a1 + 40));
		v5 = (_QWORD*)(a1 + 80);
		v6 = (_QWORD*)(a1 + 96);
		v7 = 2i64;
		do
		{
			if (*v5)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 40i64))(*v5);
				_InterlockedIncrement((volatile signed __int32*)(a1 + 40));
				v8 = *v5;
				if (v6)
				{
					if (*v6)
					{
						sub_140349890(v6, (_QWORD*)(v8 + 112));
						v9 = *(_DWORD*)(v8 + 96);
						if (v9 != -2147483638)
							sub_140349B20((__int64*)(v8 + 112), v9);
					}
				}
			}
			v6 += 4;
			++v5;
			--v7;
		} while (v7);
		if (_InterlockedDecrement((volatile signed __int32*)(a1 + 40)))
			sub_14034A1A0(a1 + 8, 0);
	}
	result = qword_140C7AAA0;
	if ((unsigned __int64)qword_140C7AAA0 <= 1)
	{
		LODWORD(qword_140C7AA98) = 0;
		_InterlockedExchange64(&qword_140C7AAA0, 0i64);
		result = qword_140C7AAA8;
		if (qword_140C7AAA8)
		{
			if (!qword_140C7AAB0)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AAB0, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C7AAB0);
		}
	}
	else
	{
		--qword_140C7AAA0;
	}
	return result;
}
// 140C7AA98: using guessed type __int64 qword_140C7AA98;
// 140C7AAA0: using guessed type __int64 qword_140C7AAA0;
// 140C7AAA8: using guessed type __int64 qword_140C7AAA8;

