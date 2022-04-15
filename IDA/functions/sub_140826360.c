//----- (0000000140826360) ----------------------------------------------------
__int64 __fastcall sub_140826360(__int64 a1)
{
	unsigned int uBytes; // [rsp+30h] [rbp-58h]
	unsigned int uBytesa; // [rsp+30h] [rbp-58h]
	int uBytes_4; // [rsp+34h] [rbp-54h]
	unsigned int v5; // [rsp+38h] [rbp-50h]
	HLOCAL hMem; // [rsp+40h] [rbp-48h]
	__int64 v7[3]; // [rsp+48h] [rbp-40h]
	DWORD v8; // [rsp+60h] [rbp-28h]
	DWORD v9; // [rsp+64h] [rbp-24h]
	DWORD v10; // [rsp+68h] [rbp-20h]
	DWORD v11; // [rsp+6Ch] [rbp-1Ch]
	DWORD v12; // [rsp+70h] [rbp-18h]
	DWORD LastError; // [rsp+74h] [rbp-14h]
	BOOL v14; // [rsp+78h] [rbp-10h]

	v7[0] = (__int64)aNvidiaSubordin;
	v7[1] = (__int64)aVerisignClass3;
	v7[2] = 0i64;
	hMem = 0i64;
	v5 = 0;
	uBytes = qword_140C61988(a1, 4i64, 1i64, 0i64, 0i64, 0);
	if (uBytes)
	{
		hMem = LocalAlloc(0x40u, uBytes);
		if (hMem)
		{
			if ((unsigned int)qword_140C61988(a1, 4i64, 1i64, 0i64, hMem, uBytes))
			{
				for (uBytes_4 = 0; v7[uBytes_4]; ++uBytes_4)
				{
					if (!strcmp((const char*)hMem, (const char*)v7[uBytes_4]))
					{
						LocalFree(hMem);
						hMem = 0i64;
						uBytesa = qword_140C61988(a1, 4i64, 0i64, 0i64, 0i64, 0);
						if (uBytesa)
						{
							hMem = LocalAlloc(0x40u, uBytesa);
							if (hMem)
							{
								if ((unsigned int)qword_140C61988(a1, 4i64, 0i64, 0i64, hMem, uBytesa))
								{
									v14 = sub_1408FBEC0((unsigned __int8*)hMem, (unsigned __int8*)aNvidiaCorporat) == 0;
									v5 = v14;
								}
								else
								{
									LastError = GetLastError();
								}
							}
							else
							{
								v12 = GetLastError();
							}
						}
						else
						{
							v11 = GetLastError();
						}
						break;
					}
				}
			}
			else
			{
				v10 = GetLastError();
			}
		}
		else
		{
			v9 = GetLastError();
		}
	}
	else
	{
		v8 = GetLastError();
	}
	LocalFree(hMem);
	return v5;
}
// 140C61988: invalid function type has been ignored
// 140C61988: using guessed type __int64 (__fastcall *qword_140C61988)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

