#include "../winhttp.h"

//----- (00000001401C7750) ----------------------------------------------------
__int64 __fastcall sub_1401C7750(__int64 a1, unsigned int* a2)
{
	_DWORD* Value; // rax
	__int64 v5; // r12
	__int64 v6; // rbx
	unsigned int v7; // eax
	int v9; // ebx
	int v10; // ecx
	int v11; // ebx
	__int64 v12; // rbx
	int CurrentThreadId; // edx
	__int64 v14; // rcx
	unsigned int v15; // r14d
	__int64 v16; // rcx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-49h] BYREF
	__int128 v19; // [rsp+28h] [rbp-41h]
	__int64(__fastcall * *v20)(); // [rsp+38h] [rbp-31h] BYREF
	__int128 v21; // [rsp+40h] [rbp-29h]
	__int64(__fastcall * *v22)(); // [rsp+50h] [rbp-19h] BYREF
	__int128 v23; // [rsp+58h] [rbp-11h]
	__int64(__fastcall * *v24)(); // [rsp+70h] [rbp+7h] BYREF
	__int128 v25; // [rsp+78h] [rbp+Fh]
	__int64 v26; // [rsp+E0h] [rbp+77h] BYREF
	__int64 v27; // [rsp+E8h] [rbp+7Fh] BYREF

	Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4));
	v5 = (__int64)Value;
	if (!Value)
	{
		v6 = *(_QWORD*)(a1 + 32);
		if (!*a2)
			return (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v6 + 32i64))(*(_QWORD*)(a1 + 32), 0i64);
		v7 = sub_14001C520(a2);
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 32i64))(v6, v7);
	}
	if (*Value)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v19 = 0i64;
		*((_QWORD*)&v19 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v22 = TlsValue;
		v26 = 0x141D42258i64;
		v23 = v19;
		v9 = sub_140196F30(&dword_140C8A244, 35, &v26, &v22);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v19 + 1));
		if (v9)
			DebugBreak();
		return 0i64;
	}
	v10 = *(_DWORD*)(a1 + 20);
	if (*(_DWORD*)(a1 + 156) > (unsigned int)(*(_DWORD*)(a1 + 16) - v10))
	{
		v20 = &off_140B5E648;
		*(_QWORD*)&v21 = 0i64;
		*((_QWORD*)&v21 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v20);
		v24 = v20;
		v27 = 0x141D42220i64;
		v25 = v21;
		v11 = sub_140196F30(&dword_140C8A240, 35, &v27, &v24);
		v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v21 + 1));
		if (v11)
		{
			DebugBreak();
			return 0i64;
		}
		return 0i64;
	}
	if (v10)
	{
		do
		{
			v12 = qword_140C63758;
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)(v12 + 8) == CurrentThreadId)
			{
				++* (_QWORD*)(v12 + 16);
			}
			else
			{
				v14 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v12 + 16), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v14 >= 0x400)
					{
						sub_14019FB60(v12 + 8, CurrentThreadId);
						goto LABEL_20;
					}
				}
				*(_DWORD*)(v12 + 8) = CurrentThreadId;
			}
		LABEL_20:
			v15 = *(_DWORD*)(a1 + 156);
			v16 = qword_140C63758 + 48;
			*(_DWORD*)(a1 + 156) = v15 + 1;
			if (v15 + 1 == *(_DWORD*)(a1 + 16))
			{
				if (a1 == *(_QWORD*)(v16 + 48))
					*(_QWORD*)(v16 + 48) = 0i64;
				else
					sub_1401D7680(v16, a1);
			}
			if (*(_QWORD*)(v12 + 16) <= 1ui64)
			{
				*(_DWORD*)(v12 + 8) = 0;
				_InterlockedExchange64((volatile __int64*)(v12 + 16), 0i64);
				if (*(_QWORD*)(v12 + 24))
				{
					if (!*(_QWORD*)(v12 + 32))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v12 + 32), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v12 + 32));
				}
			}
			else
			{
				--* (_QWORD*)(v12 + 16);
			}
			sub_1401C89C0(v16, v5, a1, v15);
			if (!*(_DWORD*)(a1 + 20))
				break;
			if (!*a2 || !(unsigned int)sub_14001C520(a2))
				return 0i64;
		} while (*(_DWORD*)(a1 + 20));
	}
	return 1i64;
}
// 1401C7A3C: variable 'v16' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A240: using guessed type _DWORD dword_140C8A240;
// 140C8A244: using guessed type _DWORD dword_140C8A244;

