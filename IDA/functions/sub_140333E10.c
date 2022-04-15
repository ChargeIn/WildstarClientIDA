//----- (0000000140333E10) ----------------------------------------------------
signed int __fastcall sub_140333E10(__int64 a1, IPAddr a2)
{
	DWORD* v2; // rsi
	__int64 v5; // rbp
	_DWORD* v6; // rbx
	unsigned int v7; // ebx
	HANDLE* v8; // r14
	HANDLE v9; // rcx
	DWORD v10; // ebx
	signed int result; // eax
	unsigned int v12; // eax
	__int64 v13; // rdx
	char RequestData[8]; // [rsp+A0h] [rbp+8h] BYREF
	struct ip_option_information RequestOptions; // [rsp+B0h] [rbp+18h] BYREF

	v2 = (DWORD*)(a1 + 8);
	v5 = 64i64;
	v6 = (_DWORD*)(a1 + 8);
	do
	{
		*v6 = 0;
		sub_1407E4830(v6 + 1, 0i64, 0x40ui64);
		v6 += 17;
		--v5;
	} while (v5);
	v7 = 0;
	v8 = (HANDLE*)(a1 + 4360);
	strcpy(RequestData, "W*");
	*(_QWORD*)&RequestOptions.Ttl = 0i64;
	do
	{
		v9 = *v8;
		RequestOptions.Ttl = v7 + 1;
		ResetEvent(v9);
		if (!IcmpSendEcho2(
			*(HANDLE*)(a1 + 4872),
			*v8,
			0i64,
			0i64,
			a2,
			RequestData,
			3u,
			&RequestOptions,
			v2 + 1,
			0x40u,
			0xBB8u))
			*v2 = GetLastError();
		++v7;
		++v8;
		v2 += 17;
	} while (v7 < 0x40);
	v10 = WaitForMultipleObjects(0x40u, (const HANDLE*)(a1 + 4360), 1, 0xBB8u);
	IcmpCloseHandle(*(HANDLE*)(a1 + 4872));
	if (!v10 || v10 == 128 || v10 == 258)
	{
		v12 = 0;
		while (1)
		{
			v13 = 68i64 * v12++ + a1 + 8;
			*(_DWORD*)a1 = v12;
			if (!*(_DWORD*)(v13 + 8))
				break;
			if (v12 >= 0x40)
				return -2147024893;
		}
		*(_DWORD*)(a1 + 4) = *(_DWORD*)(v13 + 12);
		return 0;
	}
	else
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}

