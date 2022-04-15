//----- (000000014033BDE0) ----------------------------------------------------
__int64 __fastcall sub_14033BDE0(__int64 a1, _QWORD* a2, struct sockaddr* a3)
{
	__int64 result; // rax
	void* v7; // rbp
	int Error; // eax
	int* v9; // rax
	unsigned int v10; // edi
	_DWORD* v11; // rbx
	int v12; // eax
	int v13; // eax
	SOCKET s; // [rsp+20h] [rbp-48h] BYREF
	struct sockaddr name; // [rsp+28h] [rbp-40h] BYREF

	result = sub_14033BB50(a1, &s);
	if ((int)result >= 0)
	{
		v7 = (void*)s;
		name = *a3;
		if (bind(s, &name, 16))
		{
			Error = WSAGetLastError();
			sub_14033B860((__int64)L"CNetworkDriverIOCompletion::ListenSocket bind", Error, 0i64);
			return 2147500037i64;
		}
		else
		{
			v9 = sub_14018B280(536i64, 0);
			v10 = 0;
			if (v9)
				v11 = sub_14033AE10(v9, (SOCKET)v7);
			else
				v11 = 0i64;
			v11[71] = 2;
			if (listen((SOCKET)v7, 0x7FFFFFFF) == -1)
			{
				v11[70] = 5;
				v12 = WSAGetLastError();
				sub_14033B860((__int64)L"CNetworkDriverIOCompletion::ListenSocket listen", v12, 0i64);
				v10 = -2147467259;
			}
			else
			{
				sub_14033B950((__int64)L"listen", (__int64)(v11 + 4), L"established");
				v11[70] = 4;
				if (CreateIoCompletionPort(v7, *(HANDLE*)(a1 + 144), (ULONG_PTR)v11, 0))
				{
					if ((_DWORD*)*a2 != v11)
					{
						(**(void(__fastcall***)(_DWORD*))v11)(v11);
						if (*a2)
							(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
						*a2 = v11;
					}
				}
				else
				{
					v13 = WSAGetLastError();
					sub_14033B860((__int64)L"CNetworkDriverIOCompletion::ListenSocket CreateIoCompletionPort", v13, 0i64);
					v10 = -2147467259;
				}
			}
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v11 + 8i64))(v11);
			return v10;
		}
	}
	return result;
}
// 140AF2D18: using guessed type wchar_t aEstablished[12];
// 140AF2D30: using guessed type wchar_t aCnetworkdriver_3[48];
// 140AF2D90: using guessed type wchar_t aCnetworkdriver_2[46];
// 140AF2DF0: using guessed type wchar_t aListen_0[7];
// 140AF2E10: using guessed type wchar_t aCnetworkdriver_4[64];

