//----- (000000014033BB50) ----------------------------------------------------
__int64 __fastcall sub_14033BB50(__int64 a1, SOCKET* a2)
{
	SOCKET v3; // rax
	SOCKET v4; // rbx
	int Error; // eax
	const wchar_t* v6; // rcx
	__int64 optval; // [rsp+40h] [rbp+8h] BYREF
	int v9; // [rsp+50h] [rbp+18h] BYREF

	optval = a1;
	v3 = WSASocketW(2, 1, 6, 0i64, 0, 1u);
	v4 = v3;
	if (v3 == -1i64)
	{
		Error = WSAGetLastError();
		v6 = L"CNetworkDriverIOCompletion::CreateSocket WSASocket";
	}
	else
	{
		LODWORD(optval) = 0;
		v9 = 1;
		if (setsockopt(v3, 0xFFFF, 4097, (const char*)&optval, 4) == -1)
		{
			Error = WSAGetLastError();
			v6 = L"CNetworkDriverIOCompletion::CreateSocket setsockopt SO_SNDBUF";
		}
		else
		{
			if (setsockopt(v4, 6, 1, (const char*)&v9, 4) != -1)
			{
				*a2 = v4;
				return 0i64;
			}
			Error = WSAGetLastError();
			v6 = L"CNetworkDriverIOCompletion::CreateSocket setsockopt TCP_NODELAY";
		}
	}
	sub_14033B860((__int64)v6, Error, 0i64);
	return 2147500037i64;
}
// 140AF2F10: using guessed type wchar_t aCnetworkdriver_1[51];
// 140AF2FA0: using guessed type wchar_t aCnetworkdriver_0[64];
// 140AF3020: using guessed type wchar_t aCnetworkdriver[62];

