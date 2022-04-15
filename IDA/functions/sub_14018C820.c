//----- (000000014018C820) ----------------------------------------------------
__int64 sub_14018C820()
{
	int CurrentThreadId; // r8d
	unsigned int v1; // esi
	__int64 v2; // rdx
	__int64 v3; // r14
	unsigned __int64 v4; // rdi
	unsigned __int64 v5; // r11
	__int64 v6; // rbx
	unsigned __int64 v7; // r9
	__int64 v8; // rcx
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // r10
	unsigned __int64 v11; // rcx
	int v12; // ebx
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-78h] BYREF
	__int64 v18; // [rsp+38h] [rbp-70h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-68h]
	__int64 v20[11]; // [rsp+50h] [rbp-58h] BYREF
	__int64 v21; // [rsp+B0h] [rbp+8h] BYREF
	__int64* v22; // [rsp+B8h] [rbp+10h]

	v22 = &qword_140C67400;
	CurrentThreadId = GetCurrentThreadId();
	v1 = 1;
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v2 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v2 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	v3 = 0i64;
	while (1)
	{
		v4 = qword_140C7F970[v3];
		if (v4)
		{
			v5 = v4 + 0x100000000i64;
			v6 = qword_140C7F970[v3];
			if (v4 < v4 + 0x100000000i64)
				break;
		}
	LABEL_25:
		if ((unsigned __int64)++v3 >= 4096)
			goto LABEL_20;
	}
	while (1)
	{
		v7 = *(_QWORD*)v6;
		v8 = HIBYTE(*(_QWORD*)v6) & 0x7Fi64;
		if ((unsigned __int64)(v8 - 9) > 0x17)
			break;
		v9 = 1i64 << v8;
		v10 = (1i64 << v8) + v6;
		if (v10 > v5 || ((v6 - v4) & (v9 - 1)) != 0)
			break;
		if ((v7 & 0x8000000000000000ui64) != 0)
		{
			v11 = *(unsigned int*)(v6 + 8) + 16i64;
			if (v11 <= v9 >> 1 || v11 > v9)
				break;
		}
		else
		{
			v13 = 4 * v8;
			v14 = (v7 >> 16) & 0xFFFFFFFFFFi64;
			if (v14 >= qword_140C87990[v13 + 3] || v6 != *(_QWORD*)(qword_140C87990[v13] + 8 * v14))
				break;
		}
		v6 = v10;
		if (v10 >= v5)
			goto LABEL_25;
	}
	v18 = 0i64;
	TlsValue = &off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v20[0] = (__int64)TlsValue;
	v21 = 0x141D3A648i64;
	v20[1] = v18;
	v20[2] = (__int64)lpTlsValue;
	v12 = sub_140196F30(&dword_140C8A168, 2, &v21, v6, v20);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v12)
		DebugBreak();
	v1 = 0;
LABEL_20:
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
	return v1;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C87990: using guessed type __int64 qword_140C87990[38];
// 140C8A168: using guessed type _DWORD dword_140C8A168;

