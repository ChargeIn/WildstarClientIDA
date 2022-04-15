//----- (0000000140346830) ----------------------------------------------------
int __fastcall sub_140346830(_QWORD* a1)
{
	unsigned int CurrentThreadId; // eax
	__int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rax
	HANDLE EventW; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	*a1 = off_140B651E0;
	CurrentThreadId = GetCurrentThreadId();
	v3 = (unsigned int)qword_140C7AA70;
	v4 = CurrentThreadId;
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v5 = 0i64;
		v3 = 1i64;
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
	v6 = (_QWORD*)a1[16];
	if (v6)
		*v6 = a1[17];
	v7 = a1[17];
	if (v7)
		*(_QWORD*)(v7 + 128) = a1[16];
	a1[16] = 0i64;
	a1[17] = 0i64;
	LODWORD(v8) = qword_140C7AA78;
	if ((unsigned __int64)qword_140C7AA78 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		LODWORD(v8) = _InterlockedExchange64(&qword_140C7AA78, 0i64);
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v8) = SetEvent(qword_140C7AA88);
		}
	}
	else
	{
		--qword_140C7AA78;
	}
	v10 = (_QWORD*)a1[16];
	if (v10)
	{
		v8 = a1[17];
		*v10 = v8;
	}
	v11 = a1[17];
	if (v11)
	{
		v8 = a1[16];
		*(_QWORD*)(v11 + 128) = v8;
	}
	a1[16] = 0i64;
	a1[17] = 0i64;
	v12 = (_QWORD*)a1[14];
	if (v12)
	{
		v8 = a1[15];
		*v12 = v8;
	}
	v13 = a1[15];
	if (v13)
	{
		v8 = a1[14];
		*(_QWORD*)(v13 + 16) = v8;
	}
	a1[14] = 0i64;
	a1[15] = 0i64;
	v14 = a1[5];
	if (v14)
		LODWORD(v8) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v14 + 8i64))(v14, v3, v4);
	v15 = a1[4];
	if (v15)
		LODWORD(v8) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v15 + 8i64))(v15, v3, v4);
	return v8;
}
// 1403469C5: variable 'v3' is possibly undefined
// 1403469C5: variable 'v4' is possibly undefined
// 140B651E0: using guessed type __int64 (__fastcall *off_140B651E0[54])();
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

