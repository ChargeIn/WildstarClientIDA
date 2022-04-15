//----- (00000001401C37F0) ----------------------------------------------------
__int64 __fastcall sub_1401C37F0(HINTERNET* a1, const WCHAR* a2, int a3)
{
	void* v6; // rax
	DWORD Buffer; // [rsp+30h] [rbp-19h] BYREF
	LPWSTR lpszProxy; // [rsp+38h] [rbp-11h]
	LPWSTR lpszProxyBypass; // [rsp+40h] [rbp-9h]
	WINHTTP_PROXY_INFO pProxyInfo; // [rsp+48h] [rbp-1h] BYREF
	WINHTTP_CURRENT_USER_IE_PROXY_CONFIG pProxyConfig; // [rsp+60h] [rbp+17h] BYREF
	WINHTTP_AUTOPROXY_OPTIONS pAutoProxyOptions; // [rsp+80h] [rbp+37h] BYREF

	memset(&pProxyConfig, 0, sizeof(pProxyConfig));
	memset(&pAutoProxyOptions, 0, sizeof(pAutoProxyOptions));
	memset(&pProxyInfo, 0, sizeof(pProxyInfo));
	Buffer = 0;
	lpszProxy = 0i64;
	lpszProxyBypass = 0i64;
	if (!WinHttpGetIEProxyConfigForCurrentUser(&pProxyConfig))
	{
		pProxyConfig.fAutoDetect = 1;
	LABEL_8:
		pAutoProxyOptions.dwFlags = 1;
		pAutoProxyOptions.dwAutoDetectFlags = 3;
		goto LABEL_9;
	}
	if (pProxyConfig.lpszProxy)
	{
		lpszProxy = pProxyConfig.lpszProxy;
		Buffer = 3;
		lpszProxyBypass = pProxyConfig.lpszProxyBypass;
	}
	if (pProxyConfig.fAutoDetect)
		goto LABEL_8;
	if (pProxyConfig.lpszAutoConfigUrl)
	{
		pAutoProxyOptions.dwFlags = 2;
		pAutoProxyOptions.lpszAutoConfigUrl = pProxyConfig.lpszAutoConfigUrl;
	}
LABEL_9:
	v6 = WinHttpOpen(0i64, 1u, 0i64, 0i64, a3 != 0 ? 0x10000000 : 0);
	*a1 = v6;
	if (!v6)
		goto LABEL_14;
	if (pAutoProxyOptions.dwFlags)
	{
		pAutoProxyOptions.fAutoLogonIfChallenged = 1;
		if (WinHttpGetProxyForUrl(v6, a2, &pAutoProxyOptions, &pProxyInfo))
		{
			Buffer = pProxyInfo.dwAccessType;
			lpszProxy = pProxyInfo.lpszProxy;
			lpszProxyBypass = pProxyInfo.lpszProxyBypass;
		}
	}
	if (!WinHttpSetOption(*a1, 0x26u, &Buffer, 0x18u))
		LABEL_14:
	GetLastError();
	if (pProxyConfig.lpszAutoConfigUrl)
		GlobalFree(pProxyConfig.lpszAutoConfigUrl);
	if (pProxyConfig.lpszProxy)
		GlobalFree(pProxyConfig.lpszProxy);
	if (pProxyConfig.lpszProxyBypass)
		GlobalFree(pProxyConfig.lpszProxyBypass);
	if (pProxyInfo.lpszProxy)
		GlobalFree(pProxyInfo.lpszProxy);
	if (pProxyInfo.lpszProxyBypass)
		GlobalFree(pProxyInfo.lpszProxyBypass);
	return 0i64;
}

