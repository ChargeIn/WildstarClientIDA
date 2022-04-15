#include "../winhttp.h"

//----- (00000001401C73A0) ----------------------------------------------------
void __fastcall sub_1401C73A0(__int64* a1)
{
	int v2; // ebx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rcx
	HANDLE EventW; // rcx
	int v14[4]; // [rsp+20h] [rbp-58h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v16; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v17)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v18; // [rsp+58h] [rbp-20h]
	__int64 v19; // [rsp+80h] [rbp+8h] BYREF

	if ((*((_BYTE*)a1 + 12) & 0x10) != 0)
	{
		if (*((int*)a1 + 10) > 0)
		{
			v3 = *a1;
			*((_DWORD*)a1 + 13) = 1;
			(*(void (**)(void))(v3 + 104))();
			v4 = *a1;
			v14[0] = -1;
			(*(void(__fastcall**)(__int64*, int*))(v4 + 32))(a1, v14);
			*((_DWORD*)a1 + 13) = 0;
		}
		v5 = qword_140C63758;
		CurrentThreadId = GetCurrentThreadId();
		v7 = CurrentThreadId;
		if (*(_DWORD*)(v5 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v5 + 16);
		}
		else
		{
			v8 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v8 >= 0x400)
				{
					sub_14019FB60(v5 + 8, CurrentThreadId);
					goto LABEL_13;
				}
			}
			*(_DWORD*)(v5 + 8) = CurrentThreadId;
		}
	LABEL_13:
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1[4] + 24i64))(a1[4], v7);
		v9 = *((_DWORD*)a1 + 4);
		*((_DWORD*)a1 + 10) = 0;
		*((_DWORD*)a1 + 12) = 0;
		*((_DWORD*)a1 + 5) = v9;
		v10 = 0i64;
		if (v9)
		{
			do
			{
				v11 = (unsigned int)v10;
				v10 = (unsigned int)(v10 + 1);
				v12 = 8 * v11;
				*(_DWORD*)(v12 + a1[3]) = 0;
				*(_DWORD*)(a1[3] + v12 + 4) = -1608318975;
			} while ((unsigned int)v10 < *((_DWORD*)a1 + 4));
		}
		(*(void(__fastcall**)(__int64*, __int64))(*a1 + 144))(a1, v10);
		if (*(_QWORD*)(v5 + 16) <= 1ui64)
		{
			*(_DWORD*)(v5 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v5 + 16), 0i64);
			if (*(_QWORD*)(v5 + 24))
			{
				if (!*(_QWORD*)(v5 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v5 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v5 + 16);
		}
	}
	else
	{
		*(_QWORD*)&v16 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v17 = TlsValue;
		v19 = 0x141D42168i64;
		v18 = v16;
		v2 = sub_140196F30(&dword_140C8A250, 35, &v19, &v17);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
		if (v2)
			DebugBreak();
	}
}
// 1401C74FD: variable 'v7' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A250: using guessed type _DWORD dword_140C8A250;
// 1401C73A0: using guessed type int var_58[4];

