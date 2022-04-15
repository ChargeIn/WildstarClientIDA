#include "../winhttp.h"

//----- (0000000140195D70) ----------------------------------------------------
void __fastcall sub_140195D70(__int64 a1)
{
	int v2; // ebx
	__int64 v3; // rbx
	int CurrentThreadId; // r8d
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	_QWORD* v7; // rcx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v10; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v11)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+70h] [rbp+8h] BYREF

	if (*(_DWORD*)a1 == 1414420037)
	{
		v3 = qword_140C63728;
		if (qword_140C63728)
		{
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)(v3 + 8) == CurrentThreadId)
			{
				++* (_QWORD*)(v3 + 16);
			}
			else
			{
				v5 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 16), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v5 >= 0x400)
					{
						sub_14019FB60(v3 + 8, CurrentThreadId);
						goto LABEL_12;
					}
				}
				*(_DWORD*)(v3 + 8) = CurrentThreadId;
			}
		LABEL_12:
			if (*(_QWORD*)(a1 + 16))
			{
				--* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 64) + 272);
				--* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 68) + 320);
				v6 = *(_QWORD**)(a1 + 16);
				if (v6)
					*v6 = *(_QWORD*)(a1 + 24);
				v7 = *(_QWORD**)(a1 + 24);
				if (v7)
					*v7 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)(a1 + 16) = 0i64;
				*(_QWORD*)(a1 + 24) = 0i64;
			}
			if (*(_QWORD*)(v3 + 16) <= 1ui64)
			{
				*(_DWORD*)(v3 + 8) = 0;
				_InterlockedExchange64((volatile __int64*)(v3 + 16), 0i64);
				if (*(_QWORD*)(v3 + 24))
				{
					if (!*(_QWORD*)(v3 + 32))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 32), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v3 + 32));
				}
			}
			else
			{
				--* (_QWORD*)(v3 + 16);
			}
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v10 = 0i64;
		*((_QWORD*)&v10 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v13 = 0x141D3E148i64;
		v12 = v10;
		v2 = sub_140196F30(&dword_140C8A1C0, 1, &v13, &v11);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v10 + 1));
		if (v2)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63728: using guessed type __int64 qword_140C63728;
// 140C8A1C0: using guessed type _DWORD dword_140C8A1C0;

