//----- (00000001401C3FB0) ----------------------------------------------------
void __fastcall fnInternetCallback(
	HINTERNET hInternet,
	__int64 dwContext,
	DWORD dwInternetStatus,
	_DWORD* lpvStatusInformation)
{
	int LastError; // eax
	unsigned int v7; // [rsp+30h] [rbp-18h] BYREF
	DWORD dwBufferLength; // [rsp+34h] [rbp-14h] BYREF
	DWORD lpdwBufferLength[4]; // [rsp+38h] [rbp-10h] BYREF
	unsigned int Buffer; // [rsp+58h] [rbp+10h] BYREF

	if (dwContext)
	{
		if (dwInternetStatus == 0x20000)
		{
			Buffer = 0;
			dwBufferLength = 4;
			if (WinHttpQueryHeaders(hInternet, 0x20000013u, 0i64, &Buffer, &dwBufferLength, 0i64))
			{
				LastError = sub_1401C42A0(Buffer);
				if (LastError >= 0)
				{
					v7 = 0;
					lpdwBufferLength[0] = 4;
					if (!WinHttpQueryHeaders(hInternet, 0x20000005u, 0i64, &v7, lpdwBufferLength, 0i64))
						goto LABEL_6;
					**(_QWORD**)(dwContext + 16) = v7;
					LastError = 0;
				}
			LABEL_9:
				sub_1401C42E0(hInternet, dwContext, LastError);
				return;
			}
		LABEL_6:
			LastError = GetLastError();
			goto LABEL_7;
		}
		if (dwInternetStatus == 0x200000)
		{
			LastError = lpvStatusInformation[2];
		LABEL_7:
			if (LastError > 0)
				LastError = (unsigned __int16)LastError | 0x80070000;
			goto LABEL_9;
		}
		if (dwInternetStatus == 0x400000 && !WinHttpReceiveResponse(hInternet, 0i64))
			goto LABEL_6;
	}
}
// 1401C3FB0: using guessed type DWORD var_10[4];

