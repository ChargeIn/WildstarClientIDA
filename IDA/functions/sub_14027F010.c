#include "../winhttp.h"

//----- (000000014027F010) ----------------------------------------------------
void __fastcall sub_14027F010(__int64 a1, __int64 a2)
{
	__int64 v4; // r14
	int v5; // ebx
	int* v6; // rbx
	int CurrentThreadId; // edx
	__int64 v8; // rcx
	HANDLE EventW; // rcx
	int v10; // eax
	__int64 v11; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v13; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-38h] BYREF
	__int128 v15; // [rsp+48h] [rbp-30h]
	__int64 v16; // [rsp+88h] [rbp+10h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
	if (*(_DWORD*)(v4 + 8))
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 40i64))(a2))
		{
			v6 = (int*)(a1 + 6368);
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)(a1 + 6368) == CurrentThreadId)
			{
				++* (_QWORD*)(a1 + 6376);
			}
			else
			{
				v8 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6376), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v8 >= 0x400)
					{
						sub_14019FB60(a1 + 6368, CurrentThreadId);
						goto LABEL_12;
					}
				}
				*v6 = CurrentThreadId;
			}
		LABEL_12:
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 152i64))(
				*(_QWORD*)(a1 + 6352),
				*(_QWORD*)(a2 + 40),
				dword_140AE8000[*(int*)(v4 + 4)],
				0i64);
			if (*(_QWORD*)(a1 + 6376) <= 1ui64)
			{
				*v6 = 0;
				_InterlockedExchange64((volatile __int64*)(a1 + 6376), 0i64);
				if (*(_QWORD*)(a1 + 6384))
				{
					if (!*(_QWORD*)(a1 + 6392))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6392), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(a1 + 6392));
				}
			}
			else
			{
				--* (_QWORD*)(a1 + 6376);
			}
			v10 = *(_DWORD*)(a1 + 240);
			if (*(_DWORD*)(a2 + 72) != v10)
			{
				*(_DWORD*)(a2 + 72) = v10;
				v11 = 6i64 * *(int*)(v4 + 8);
				_InterlockedIncrement((volatile signed __int32*)(a1 + 48i64 * *(int*)(v4 + 8) + 572));
				_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v11 + 576), *(_DWORD*)(a2 + 24));
			}
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v13 = 0i64;
		*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = TlsValue;
		v16 = 0x141DE3230i64;
		v15 = v13;
		v5 = sub_1401971E0(&dword_140C8A35C, 14, &v16, &v14);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
		if (v5)
			DebugBreak();
	}
}
// 140AE8000: using guessed type unsigned int dword_140AE8000[4];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A35C: using guessed type _DWORD dword_140C8A35C;

