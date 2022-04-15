//----- (00000001403469F0) ----------------------------------------------------
int __fastcall sub_1403469F0(int a1, __int64 a2)
{
	int CurrentThreadId; // eax
	__int64 v5; // rcx
	unsigned int v6; // r13d
	int v7; // edx
	signed int v8; // ebx
	__int64 v9; // rbp
	__int64 v10; // rbp
	__int64 v11; // rsi
	__int64 v12; // r14
	unsigned int v13; // edi
	unsigned int v14; // eax
	int v15; // eax
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA70) = CurrentThreadId;
	}
LABEL_8:
	if (*(_DWORD*)(a2 + 88) == -2147483638)
	{
		_InterlockedIncrement((volatile signed __int32*)(a2 + 12));
		*(_DWORD*)(a2 + 88) = 0;
		_InterlockedIncrement(&dword_140C7A0F8);
		v6 = sub_14018CDF0();
		if ((*(_DWORD*)(a2 + 80) & 0x200000) != 0)
		{
			v7 = dword_140C43CB0;
			if (*(_DWORD*)qword_140C63750 < dword_140C43CB0)
				v7 = *(_DWORD*)qword_140C63750;
			v8 = dword_140C43CC0[v7];
			if ((int)(v6 - (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 32) + 72i64))(*(_QWORD*)(a2 + 32))) <= v8)
				goto LABEL_17;
		}
		if (a1 < 0)
			goto LABEL_17;
		v9 = *(_QWORD*)(a2 + 24);
		if (!v9)
			goto LABEL_17;
		v10 = *(_QWORD*)(v9 + 40);
		v11 = *(_QWORD*)(a2 + 40);
		v12 = *(_QWORD*)qword_140C65858;
		v13 = *(_DWORD*)(a2 + 80) | 0x80000000;
		v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 32) + 48i64))(*(_QWORD*)(a2 + 32));
		v15 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(v12 + 192))(
			qword_140C65858,
			v10,
			v14,
			v13,
			a2 + 48,
			v11);
		*(_DWORD*)(a2 + 16) = v15;
		if (v15)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a2 + 32) + 80i64))(*(_QWORD*)(a2 + 32), v6);
		}
		else
		{
		LABEL_17:
			*(_DWORD*)(a2 + 88) = -2147467260;
			sub_140346C20(0x80000000, a2);
		}
	}
	if (!_InterlockedDecrement((volatile signed __int32*)(a2 + 12)))
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 88i64))(a2, 1i64);
	result = qword_140C7AA78;
	if ((unsigned __int64)qword_140C7AA78 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		_InterlockedExchange64(&qword_140C7AA78, 0i64);
		result = qword_140C7AA80;
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C7AA88);
		}
	}
	else
	{
		--qword_140C7AA78;
	}
	return result;
}
// 140C43CB0: using guessed type int dword_140C43CB0;
// 140C43CC0: using guessed type _DWORD dword_140C43CC0[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C7A0F8: using guessed type int dword_140C7A0F8;
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

