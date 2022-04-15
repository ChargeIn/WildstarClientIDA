//----- (0000000140346E50) ----------------------------------------------------
__int64 __fastcall sub_140346E50(
	int** a1,
	int** a2,
	__int64 a3,
	void(__fastcall*** a4)(_QWORD),
	int a5,
	__int64 a6,
	__int64 a7,
	void(__fastcall*** a8)(_QWORD))
{
	int CurrentThreadId; // edx
	__int64 v14; // rcx
	int* v15; // rax
	int* v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rsi
	_QWORD* v21; // rcx
	unsigned int v22; // edx
	HANDLE EventW; // rcx

	if (!a4)
		return 2147942487i64;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v14 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v14 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
				goto LABEL_10;
			}
		}
		LODWORD(qword_140C7AA70) = CurrentThreadId;
	}
LABEL_10:
	v15 = sub_14018B280(144i64, 0);
	v16 = v15;
	if (v15)
	{
		*(_QWORD*)v15 = off_140B651E0;
		v15[2] = 1;
		v15[3] = 1;
		*((_QWORD*)v15 + 4) = 0i64;
		*((_QWORD*)v15 + 5) = 0i64;
		*((_QWORD*)v15 + 14) = 0i64;
		*((_QWORD*)v15 + 15) = 0i64;
		*((_QWORD*)v15 + 16) = 0i64;
		*((_QWORD*)v15 + 17) = 0i64;
		v15[4] = 0;
		*((_QWORD*)v15 + 3) = 0i64;
		*((_QWORD*)v15 + 8) = 0i64;
		*((_QWORD*)v15 + 9) = 0i64;
		*((_QWORD*)v15 + 10) = 0i64;
		*((_QWORD*)v15 + 12) = sub_1403469F0;
		*((_QWORD*)v15 + 13) = v15;
		*((_QWORD*)v15 + 7) = v15;
		*((_QWORD*)v15 + 6) = sub_140346C20;
		v15[22] = -2147024809;
	}
	else
	{
		v16 = 0i64;
	}
	*((_QWORD*)v16 + 3) = a3;
	if (*((void(__fastcall****)(_QWORD))v16 + 4) != a4)
	{
		(**a4)(a4);
		v17 = *((_QWORD*)v16 + 4);
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		*((_QWORD*)v16 + 4) = a4;
	}
	v16[4] = 0;
	*((_QWORD*)v16 + 8) = a6;
	v16[22] = -2147483638;
	*((_QWORD*)v16 + 9) = a7;
	v16[20] = a5;
	if (*((void(__fastcall****)(_QWORD))v16 + 5) != a8)
	{
		if (a8)
			(**a8)(a8);
		v18 = *((_QWORD*)v16 + 5);
		if (v18)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
		*((_QWORD*)v16 + 5) = a8;
	}
	if (!*((_QWORD*)v16 + 16))
	{
		*((_QWORD*)v16 + 16) = a1;
		*((_QWORD*)v16 + 17) = *a1;
		*a1 = v16;
		v19 = *((_QWORD*)v16 + 17);
		if (v19)
			*(_QWORD*)(v19 + 128) = v16 + 34;
	}
	_InterlockedIncrement(v16 + 3);
	v20 = *((_QWORD*)v16 + 4);
	v21 = v16 + 24;
	if (v16 != (int*)-96i64)
	{
		if (*v21)
		{
			sub_140349890(v21, (_QWORD*)(v20 + 112));
			v22 = *(_DWORD*)(v20 + 96);
			if (v22 != -2147483638)
				sub_140349B20((__int64*)(v20 + 112), v22);
		}
	}
	if (a2)
		*a2 = v16;
	else
		(*(void(__fastcall**)(int*))(*(_QWORD*)v16 + 8i64))(v16);
	if ((unsigned __int64)qword_140C7AA78 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		_InterlockedExchange64(&qword_140C7AA78, 0i64);
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AA88);
		}
	}
	else
	{
		--qword_140C7AA78;
	}
	return 0i64;
}
// 140B651E0: using guessed type __int64 (__fastcall *off_140B651E0[54])();
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

