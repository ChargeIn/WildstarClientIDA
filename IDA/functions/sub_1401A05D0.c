//----- (00000001401A05D0) ----------------------------------------------------
signed int __fastcall sub_1401A05D0(__int64* a1, _BYTE* a2)
{
	int v4; // edi
	HANDLE MutexW; // rax
	HANDLE EventW; // rax
	HANDLE v7; // rax
	__int64 v8; // rdx
	signed int result; // eax
	HANDLE v10; // rax
	HANDLE v11; // rax
	HANDLE v12; // rax
	_DWORD* v13; // rax
	WCHAR v14[128]; // [rsp+30h] [rbp-328h] BYREF
	WCHAR Name[128]; // [rsp+130h] [rbp-228h] BYREF
	WCHAR v16[128]; // [rsp+230h] [rbp-128h] BYREF

	if (a2)
	{
		v4 = 0;
		sub_14019FD40(Name, 128i64, (__int64)L"RWLock.Mutex", a2, 0);
		sub_14019FD40(v14, 128i64, (__int64)L"RWLock.ReadEvent", a2, 0);
		sub_14019FD40(v16, 128i64, (__int64)L"RWLock.WriteEvent", a2, 0);
		MutexW = CreateMutexW(0i64, 0, Name);
		a1[3] = (__int64)MutexW;
		if (MutexW)
		{
			LOBYTE(v4) = GetLastError() == 183;
			EventW = CreateEventW(0i64, 1, 1, v14);
			a1[5] = (__int64)EventW;
			if (EventW)
			{
				v7 = CreateEventW(0i64, 1, 1, v16);
				a1[6] = (__int64)v7;
				if (v7)
				{
					result = sub_1401C5BB0(a2, v8, 4ui64, a1 + 2);
					if (result < 0)
						return result;
					a1[4] = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 32i64))(a1[2]);
					return v4 != 0;
				}
			}
		}
	}
	else
	{
		v10 = CreateMutexW(0i64, 0, 0i64);
		a1[3] = (__int64)v10;
		if (v10)
		{
			v11 = CreateEventW(0i64, 1, 1, 0i64);
			a1[5] = (__int64)v11;
			if (v11)
			{
				v12 = CreateEventW(0i64, 1, 1, 0i64);
				a1[6] = (__int64)v12;
				if (v12)
				{
					result = sub_1401C5690(4i64, (int**)a1 + 2, 0);
					if (result < 0)
						return result;
					v13 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 32i64))(a1[2]);
					a1[4] = (__int64)v13;
					*v13 = 0;
					return 0;
				}
			}
		}
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401A06E2: variable 'v8' is possibly undefined
// 140A44960: using guessed type wchar_t aRwlockMutex[13];
// 140A449B8: using guessed type wchar_t aRwlockWriteeve[18];
// 140A449E0: using guessed type wchar_t aRwlockReadeven[17];

