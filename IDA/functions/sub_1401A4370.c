//----- (00000001401A4370) ----------------------------------------------------
__int64 __fastcall sub_1401A4370(int* a1)
{
	int v1; // ebp
	unsigned int v3; // esi
	__int64 result; // rax
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	int v8; // ebx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-78h] BYREF
	__int128 v11; // [rsp+28h] [rbp-70h]
	__int64(__fastcall * *v12)(); // [rsp+40h] [rbp-58h] BYREF
	__int128 v13; // [rsp+48h] [rbp-50h]
	__int64 v14; // [rsp+A0h] [rbp+8h] BYREF
	__int64 v15; // [rsp+A8h] [rbp+10h] BYREF

	v1 = *a1;
	v3 = 0;
	for (result = (*(__int64(__fastcall**)(_QWORD, __int64))(**((_QWORD**)a1 + 35) + 32i64))(
		*((_QWORD*)a1 + 35),
		1000i64);
		!(_DWORD)result;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**((_QWORD**)a1 + 35) + 32i64))(
			*((_QWORD*)a1 + 35),
			1000i64))
	{
		if (!a1[1])
		{
			CurrentThreadId = GetCurrentThreadId();
			if ((_DWORD)qword_140C67400 == CurrentThreadId)
			{
				++qword_140C67408;
			}
			else
			{
				v6 = 0i64;
				while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v6 >= 0x400)
					{
						sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
						goto LABEL_10;
					}
				}
				LODWORD(qword_140C67400) = CurrentThreadId;
			}
		LABEL_10:
			if (!a1[1])
			{
				a1[(*((_QWORD*)a1 + 31))++ + 2] = sub_14018CDF0();
				if (*((_QWORD*)a1 + 31) == 60i64)
					*((_QWORD*)a1 + 31) = 0i64;
				v7 = *((_QWORD*)a1 + 32);
				if (v7 < 0x3C)
					*((_QWORD*)a1 + 32) = v7 + 1;
				if (v1 == *a1)
				{
					if (++v3 == a1[66])
					{
						if (IsDebuggerPresent())
						{
							v14 = 0x141D3F618i64;
							sub_1401A2E50(0x71u, 1, &v14, v3);
						}
						else
						{
							TlsValue = &off_140B5E648;
							*(_QWORD*)&v11 = 0i64;
							*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &TlsValue);
							v12 = TlsValue;
							v15 = 0x141D3F658i64;
							v13 = v11;
							v8 = sub_140197490(113, &v15, v3, &v12);
							TlsValue = &off_140B5E648;
							TlsSetValue(dwTlsIndex, *((LPVOID*)&v11 + 1));
							if (v8)
								DebugBreak();
						}
					}
				}
				else
				{
					v1 = *a1;
					v3 = 0;
				}
			}
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
		}
	}
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;

