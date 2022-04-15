//----- (0000000140347740) ----------------------------------------------------
int sub_140347740()
{
	int CurrentThreadId; // edx
	__int64 v1; // rcx
	__int64 v2; // r15
	__int64* v3; // r15
	HANDLE EventW; // rcx
	int v5; // edx
	__int64 v6; // rcx
	__int64 v7; // rbp
	__int64 v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rbx
	void(__fastcall * v11)(_QWORD, __int64, _QWORD); // rax
	__int64 v12; // rdx
	unsigned __int64 v13; // rax
	HANDLE v14; // rcx

	if ((dword_140DC1438 & 1) == 0)
	{
		dword_140DC1438 |= 1u;
		sub_1401AD620((__int64)&unk_140DC1440, L"Active Sounds");
	}
	sub_1401ADA40((__int64)&unk_140DC1440, dword_140C7A0F8 - 1);
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA50 == CurrentThreadId)
	{
		++qword_140C7AA58;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA58, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA50, CurrentThreadId);
				goto LABEL_10;
			}
		}
		LODWORD(qword_140C7AA50) = CurrentThreadId;
	}
LABEL_10:
	v2 = 2 * qword_140C65870;
	qword_140C65870 ^= 1ui64;
	v3 = &qword_140C7AA30[v2];
	if ((unsigned __int64)qword_140C7AA58 <= 1)
	{
		LODWORD(qword_140C7AA50) = 0;
		_InterlockedExchange64(&qword_140C7AA58, 0i64);
		if (qword_140C7AA60)
		{
			if (!qword_140C7AA68)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA68, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AA68);
		}
	}
	else
	{
		--qword_140C7AA58;
	}
	v5 = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA70 == v5)
	{
		++qword_140C7AA78;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, v5);
				goto LABEL_24;
			}
		}
		LODWORD(qword_140C7AA70) = v5;
	}
LABEL_24:
	v7 = v3[1];
	if (v7)
	{
		v8 = 0i64;
		do
		{
			v9 = *v3;
			v10 = *(_QWORD*)(*v3 + v8);
			v11 = *(void(__fastcall**)(_QWORD, __int64, _QWORD))(v10 + 64);
			v12 = (unsigned int)(*(_DWORD*)(*v3 + v8 + 8) & *(_DWORD*)(v10 + 80));
			if (v11 && (_DWORD)v12)
				v11(*(_QWORD*)(*v3 + v8), v12, *(_QWORD*)(v10 + 72));
			if (!_InterlockedDecrement((volatile signed __int32*)(v10 + 12)))
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 88i64))(v10, 1i64);
			if (*(int*)(v9 + v8 + 8) < 0)
			{
				*(_DWORD*)(v10 + 16) = 0;
				*(_QWORD*)(v10 + 64) = 0i64;
				if (*(int*)(v10 + 88) >= 0)
					*(_DWORD*)(v10 + 88) = -2147024809;
				if (!_InterlockedDecrement((volatile signed __int32*)(v10 + 12)))
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 88i64))(v10, 1i64);
				_InterlockedDecrement(&dword_140C7A0F8);
			}
			v8 += 16i64;
			--v7;
		} while (v7);
	}
	v13 = qword_140C7AA78;
	v3[1] = 0i64;
	if (v13 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		_InterlockedExchange64(&qword_140C7AA78, 0i64);
		LODWORD(v13) = qword_140C7AA80;
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				v14 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)v14, 0i64))
					CloseHandle(v14);
			}
			LODWORD(v13) = SetEvent(qword_140C7AA88);
		}
	}
	else
	{
		--qword_140C7AA78;
	}
	return v13;
}
// 140AF4528: using guessed type wchar_t aActiveSounds[14];
// 140C65870: using guessed type __int64 qword_140C65870;
// 140C7A0F8: using guessed type int dword_140C7A0F8;
// 140C7AA30: using guessed type __int64 qword_140C7AA30[];
// 140C7AA50: using guessed type __int64 qword_140C7AA50;
// 140C7AA58: using guessed type __int64 qword_140C7AA58;
// 140C7AA60: using guessed type __int64 qword_140C7AA60;
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;
// 140DC1438: using guessed type int dword_140DC1438;

