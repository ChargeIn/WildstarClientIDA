//----- (00000001401C4BB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401C4BB0(__int64 a1, __int64 a2)
{
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // rdi
	_QWORD* v9; // rbx
	unsigned __int64 v10; // rdi
	unsigned __int64 v11; // rbx
	__int64 v12; // r14
	__int64 v13; // rdx
	unsigned __int64 v14; // rbp
	int** v15; // rdi
	int* v16; // rax
	int* v17; // rcx
	__int64 v18; // rcx
	HANDLE EventW; // rcx
	unsigned __int64 v21; // [rsp+50h] [rbp+8h]
	__int64 v22; // [rsp+58h] [rbp+10h] BYREF
	__int64 v23; // [rsp+60h] [rbp+18h] BYREF

	CurrentThreadId = GetCurrentThreadId();
	v4 = CurrentThreadId;
	if ((_DWORD)qword_140C796D0 == CurrentThreadId)
	{
		++qword_140C796D8;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C796D8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C796D0, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C796D0) = CurrentThreadId;
	}
LABEL_8:
	v22 = a2;
	v6 = qword_140C78580(&v22, v4);
	v7 = qword_140C78578;
	v8 = v6;
	v9 = *(_QWORD**)(qword_140C78578 + 8 * (v6 % qword_140C78570));
	if (!v9)
		goto LABEL_12;
	while (v8 != *v9 || !(unsigned int)qword_140C78588(&v22, v9 + 2))
	{
		v9 = (_QWORD*)v9[1];
		if (!v9)
			goto LABEL_12;
	}
	if (v9 == (_QWORD*)-24i64)
	{
	LABEL_12:
		v10 = qword_140C78560;
		v11 = 0i64;
		v21 = 0i64;
		if (qword_140C78560)
		{
			v12 = xmmword_140C78590;
			while ((unsigned int)sub_14018E2C0(a2, *(unsigned __int16**)(v12 + 8 * v11)))
			{
				v21 = ++v11;
				if (v11 >= v10)
					goto LABEL_16;
			}
		}
		else
		{
		LABEL_16:
			sub_1401C4930(v7, a2);
		}
		v23 = a2;
		if (qword_140C78568 == qword_140C78570)
			sub_1400290D0((__int64)&qword_140C78568);
		v14 = qword_140C78580(&v23, v13);
		v15 = (int**)(qword_140C78578 + 8 * (v14 % qword_140C78570));
		v16 = sub_14018B280(32i64, 0);
		if (v16)
		{
			v17 = *v15;
			*(_QWORD*)v16 = v14;
			*((_QWORD*)v16 + 1) = v17;
			v18 = v23;
			*((_QWORD*)v16 + 3) = v11;
			*((_QWORD*)v16 + 2) = v18;
		}
		else
		{
			v16 = 0i64;
		}
		*v15 = v16;
		++qword_140C78568;
	}
	else
	{
		v21 = v9[3];
	}
	if ((unsigned __int64)qword_140C796D8 <= 1)
	{
		LODWORD(qword_140C796D0) = 0;
		_InterlockedExchange64(&qword_140C796D8, 0i64);
		if (qword_140C796E0)
		{
			if (!qword_140C796E8)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C796E8, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C796E8);
		}
		return v21;
	}
	else
	{
		--qword_140C796D8;
		return v21;
	}
}
// 1401C4C2B: variable 'v4' is possibly undefined
// 1401C4CC0: variable 'v7' is possibly undefined
// 1401C4CF0: variable 'v13' is possibly undefined
// 140C78560: using guessed type __int64 qword_140C78560;
// 140C78568: using guessed type __int64 qword_140C78568;
// 140C78570: using guessed type __int64 qword_140C78570;
// 140C78578: using guessed type __int64 qword_140C78578;
// 140C78580: using guessed type __int64 (__fastcall *qword_140C78580)(_QWORD, _QWORD);
// 140C78588: using guessed type __int64 (__fastcall *qword_140C78588)(_QWORD, _QWORD);
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C796D0: using guessed type __int64 qword_140C796D0;
// 140C796D8: using guessed type __int64 qword_140C796D8;
// 140C796E0: using guessed type __int64 qword_140C796E0;

