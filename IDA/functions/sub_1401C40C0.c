//----- (00000001401C40C0) ----------------------------------------------------
void __fastcall sub_1401C40C0(
	HINTERNET hInternet,
	__int64 dwContext,
	DWORD dwInternetStatus,
	DWORD* lpvStatusInformation,
	DWORD dwStatusInformationLength)
{
	int v7; // ecx
	__int64 v8; // rsi
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	signed int LastError; // eax
	DWORD dwBufferLength; // [rsp+30h] [rbp-18h] BYREF
	__int64* v13; // [rsp+38h] [rbp-10h] BYREF
	unsigned int Buffer; // [rsp+58h] [rbp+10h] BYREF

	if (!dwContext)
		return;
	if (dwInternetStatus == 0x20000)
	{
		Buffer = 0;
		dwBufferLength = 4;
		if (WinHttpQueryHeaders(hInternet, 0x20000013u, 0i64, &Buffer, &dwBufferLength, 0i64))
		{
			v7 = sub_1401C42A0(Buffer);
			if (v7 < 0)
				goto LABEL_31;
			if (WinHttpQueryDataAvailable(hInternet, 0i64))
				return;
		}
		goto LABEL_27;
	}
	if (dwInternetStatus == 0x40000)
	{
		if (!*lpvStatusInformation)
		{
			v7 = 0;
			goto LABEL_31;
		}
		if (WinHttpReadData(
			hInternet,
			(LPVOID)(*(_QWORD*)(dwContext + 8) + *(_QWORD*)(dwContext + 16)),
			*lpvStatusInformation,
			0i64))
		{
			return;
		}
	LABEL_27:
		LastError = GetLastError();
		if (LastError <= 0)
		{
			v7 = LastError;
			goto LABEL_31;
		}
		v7 = (unsigned __int16)LastError;
	LABEL_30:
		v7 |= 0x80070000;
		goto LABEL_31;
	}
	if (dwInternetStatus != 0x80000)
	{
		if (dwInternetStatus != 0x200000)
		{
			if (dwInternetStatus != 0x400000 || WinHttpReceiveResponse(hInternet, 0i64))
				return;
			goto LABEL_27;
		}
		v7 = lpvStatusInformation[2];
		if (v7 > 0)
		{
			v7 = (unsigned __int16)v7;
			goto LABEL_30;
		}
	LABEL_31:
		sub_1401C42E0(hInternet, dwContext, v7);
		return;
	}
	v8 = dwStatusInformationLength;
	*(_QWORD*)(dwContext + 8) += dwStatusInformationLength;
	v13 = &qword_140C78540;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C78540 == CurrentThreadId)
	{
		++qword_140C78548;
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C78548, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C78540, CurrentThreadId);
				goto LABEL_18;
			}
		}
		LODWORD(qword_140C78540) = CurrentThreadId;
	}
LABEL_18:
	qword_140C63790 += v8;
	sub_14003D880((__int64*)&v13);
	if (!WinHttpQueryDataAvailable(hInternet, 0i64))
		goto LABEL_27;
}
// 140C63790: using guessed type __int64 qword_140C63790;
// 140C78540: using guessed type __int64 qword_140C78540;
// 140C78548: using guessed type __int64 qword_140C78548;

