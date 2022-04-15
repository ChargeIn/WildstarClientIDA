//----- (000000014019FB60) ----------------------------------------------------
signed __int64 __fastcall sub_14019FB60(__int64 a1, int a2)
{
	int v2; // esi
	HANDLE EventW; // rcx
	signed __int64 result; // rax
	DWORD LastError; // eax
	DWORD v7; // edi
	int v8; // edi
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-59h] BYREF
	__int64 v10; // [rsp+28h] [rbp-51h]
	LPVOID Value; // [rsp+30h] [rbp-49h]
	__int64 v12[4]; // [rsp+40h] [rbp-39h] BYREF
	__int128 v13; // [rsp+60h] [rbp-19h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+70h] [rbp-9h]
	__int128 v15[2]; // [rsp+80h] [rbp+7h] BYREF
	__int64 v16; // [rsp+E0h] [rbp+67h] BYREF
	int v17; // [rsp+E8h] [rbp+6Fh]

	v17 = a2;
	v2 = a2;
	if (!*(_QWORD*)(a1 + 24))
	{
		EventW = CreateEventW(0i64, 0, 0, 0i64);
		if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), (signed __int64)EventW, 0i64))
			CloseHandle(EventW);
	}
	_InterlockedIncrement64((volatile signed __int64*)(a1 + 16));
	result = _InterlockedCompareExchange64((volatile signed __int64*)(a1 + 8), 1i64, 0i64);
	if (result)
	{
		do
		{
			if (WaitForSingleObject(*(HANDLE*)(a1 + 24), 0xFFFFFFFF) == -1)
			{
				TlsValue = &off_140B5E648;
				v10 = 0i64;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v12[0] = (__int64)TlsValue;
				v12[1] = v10;
				v12[2] = (__int64)Value;
				LastError = GetLastError();
				*(_QWORD*)&v13 = &off_140B5E648;
				v7 = LastError;
				*((_QWORD*)&v13 + 1) = L"Result";
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v13);
				*(_QWORD*)&v13 = &off_140B5E640;
				LODWORD(lpTlsValue[1]) = v7;
				v15[0] = v13;
				v15[1] = *(_OWORD*)lpTlsValue;
				v16 = 0x141D3ED98i64;
				v8 = sub_140197770(39, &v16, v15, v12);
				*(_QWORD*)&v13 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue[0]);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, Value);
				if (v8)
					DebugBreak();
			}
			result = _InterlockedCompareExchange64((volatile signed __int64*)(a1 + 8), 1i64, 0i64);
		} while (result);
		v2 = v17;
	}
	*(_DWORD*)a1 = v2;
	_InterlockedDecrement64((volatile signed __int64*)(a1 + 16));
	return result;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

