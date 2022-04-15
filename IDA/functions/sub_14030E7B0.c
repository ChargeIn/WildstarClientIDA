//----- (000000014030E7B0) ----------------------------------------------------
__int64 __fastcall sub_14030E7B0(__int64 a1, unsigned int a2, int* a3, int** a4)
{
	_DWORD* v4; // rbx
	volatile signed __int64* v9; // rsi
	int CurrentThreadId; // r11d
	__int64 v11; // rdx
	__int64 v12; // rcx
	unsigned __int64 v13; // rbp
	_QWORD* v14; // rbx
	int* v15; // rbx
	int** v16; // rbx
	int v17; // ebp
	HANDLE EventW; // rcx
	unsigned int v20; // [rsp+20h] [rbp-48h] BYREF
	int* v21; // [rsp+28h] [rbp-40h]
	__int64 v22; // [rsp+70h] [rbp+8h]

	v4 = (_DWORD*)(a1 + 440);
	v22 = a1 + 440;
	v9 = (volatile signed __int64*)(a1 + 448);
	CurrentThreadId = GetCurrentThreadId();
	v11 = 1i64;
	if (*v4 == CurrentThreadId)
	{
		++* v9;
	}
	else
	{
		v12 = 0i64;
		while (_InterlockedCompareExchange64(v9, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v12 >= 0x400)
			{
				sub_14019FB60(v22, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v22 = CurrentThreadId;
	}
LABEL_8:
	v20 = a2;
	v21 = a3;
	v13 = (*(__int64(__fastcall**)(unsigned int*, __int64))(a1 + 504))(&v20, v11);
	v14 = *(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * (v13 % *(_QWORD*)(a1 + 488)));
	if (v14)
	{
		while (v13 != *v14 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(a1 + 512))(&v20, v14 + 2))
		{
			v14 = (_QWORD*)v14[1];
			if (!v14)
				goto LABEL_12;
		}
		v16 = (int**)(v14 + 4);
		if (v16)
		{
			v15 = *v16;
			(**(void(__fastcall***)(int*))v15)(v15);
		LABEL_16:
			*a4 = v15;
			v17 = 0;
			goto LABEL_17;
		}
	}
LABEL_12:
	v15 = sub_14018B280(152i64, 0);
	if (v15)
	{
		*(_QWORD*)v15 = off_140B64458;
		*((_QWORD*)v15 + 12) = 0i64;
		*((_QWORD*)v15 + 13) = 0i64;
		sub_140326D00((_QWORD*)v15 + 14);
		*((_QWORD*)v15 + 2) = 1i64;
		*((_QWORD*)v15 + 1) = 0i64;
		*((_QWORD*)v15 + 3) = 0i64;
		*((_QWORD*)v15 + 4) = 0i64;
		*((_QWORD*)v15 + 7) = 0i64;
		v15[12] = 0;
		*((_QWORD*)v15 + 8) = 0i64;
		*((_QWORD*)v15 + 9) = 0i64;
		*((_QWORD*)v15 + 10) = 0i64;
		v15[22] = 0;
	}
	else
	{
		v15 = 0i64;
	}
	v17 = sub_1403258C0((__int64)v15, a1, a2, a3);
	if (v17 >= 0)
		goto LABEL_16;
	if (v15)
	{
		sub_140325690((__int64)v15);
		sub_14018B900((__int64)v15, 0);
	}
LABEL_17:
	if (*v9 <= 1ui64)
	{
		*(_DWORD*)v22 = 0;
		_InterlockedExchange64(v9, 0i64);
		if (*(_QWORD*)(v22 + 16))
		{
			if (!*(_QWORD*)(v22 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v22 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v22 + 24));
		}
	}
	else
	{
		--* v9;
	}
	return (unsigned int)v17;
}
// 14030E840: variable 'v11' is possibly undefined
// 140B64458: using guessed type __int64 (__fastcall *off_140B64458[2])();

