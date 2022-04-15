//----- (0000000140196D80) ----------------------------------------------------
__int64 sub_140196D80(_DWORD* a1, int a2, _QWORD* a3, ...)
{
	int CurrentThreadId; // r9d
	__int64 v7; // rcx
	int v8; // ecx
	int v9; // eax
	int v10; // eax
	HANDLE EventW; // rcx
	__int64 v13[2]; // [rsp+20h] [rbp-848h] BYREF
	char v14[2046]; // [rsp+30h] [rbp-838h] BYREF
	__int16 v15; // [rsp+82Eh] [rbp-3Ah]
	va_list va; // [rsp+888h] [rbp+20h] BYREF

	va_start(va, a3);
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	v8 = dword_140C63730 + 1;
	dword_140C63730 = v8;
	if (v8 == 1)
	{
		v9 = sub_1407DDA14(v14, 0x3FFui64, (unsigned __int16*)(*a3 - 19899968i64), (__int64)va);
		if (v9 < 0 || (unsigned __int64)v9 >= 0x3FF)
			v15 = 0;
		v13[1] = 0i64;
		v13[0] = 0x141D3E240i64;
		v10 = sub_1401A3130(a2, 1, v13, v14);
		v8 = dword_140C63730;
		if (v10 && dword_140C63730 == 1 && *a1 < (unsigned int)dword_140C1E44C)
			++* a1;
	}
	dword_140C63730 = v8 - 1;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		if (qword_140C67410)
		{
			if (!hObject)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	return 0i64;
}
// 140C1E44C: using guessed type int dword_140C1E44C;
// 140C63730: using guessed type int dword_140C63730;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;

