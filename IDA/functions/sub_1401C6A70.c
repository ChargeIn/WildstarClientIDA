#include "../winhttp.h"

//----- (00000001401C6A70) ----------------------------------------------------
int __fastcall sub_1401C6A70(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int CurrentThreadId; // r9d
	__int64 v6; // rcx
	int v7; // edi
	unsigned __int64 v8; // rax
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v12; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v13)(); // [rsp+40h] [rbp-38h] BYREF
	__int128 v14; // [rsp+48h] [rbp-30h]
	__int64 v15; // [rsp+80h] [rbp+8h] BYREF

	v2 = qword_140C63758;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v2 + 8) == CurrentThreadId)
	{
		++* (_QWORD*)(v2 + 16);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v2 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v2 + 8) = CurrentThreadId;
	}
LABEL_8:
	if (*(_DWORD*)(a1 + 40) == 4 || *(_DWORD*)(a1 + 56))
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v12 = 0i64;
		*((_QWORD*)&v12 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = TlsValue;
		v15 = 0x141D42130i64;
		v14 = v12;
		v7 = sub_140196F30(&dword_140C8A258, 35, &v15, &v13);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v12 + 1));
		if (v7)
			DebugBreak();
	}
	else
	{
		*(_QWORD*)(a1 + 72) = a2[1];
		*(_QWORD*)(a1 + 64) = *a2;
	}
	v8 = *(_QWORD*)(v2 + 16);
	if (v8 <= 1)
	{
		*(_DWORD*)(v2 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
		v8 = *(_QWORD*)(v2 + 24);
		if (v8)
		{
			if (!*(_QWORD*)(v2 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v8) = SetEvent(*(HANDLE*)(v2 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 16);
	}
	return v8;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A258: using guessed type _DWORD dword_140C8A258;

