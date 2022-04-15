#include "../winhttp.h"

//----- (00000001401C6C30) ----------------------------------------------------
void __fastcall sub_1401C6C30(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	int* v9; // rax
	int v10; // edi
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v13; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-38h] BYREF
	__int128 v15; // [rsp+48h] [rbp-30h]
	__int64 v16; // [rsp+88h] [rbp+10h] BYREF

	if (a2)
	{
		v2 = qword_140C63758;
		CurrentThreadId = GetCurrentThreadId();
		v6 = CurrentThreadId;
		if (*(_DWORD*)(v2 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 16);
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60(v2 + 8, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v2 + 8) = CurrentThreadId;
		}
	LABEL_9:
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 24i64))(a2, v6) != 4)
		{
			if (*(int*)(a1 + 40) < 2)
				goto LABEL_15;
			if ((*(_BYTE*)(a1 + 12) & 0x10) != 0 && !*(_DWORD*)(a1 + 16))
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 24i64))(*(_QWORD*)(a1 + 32));
				v8 = *(_QWORD*)a1;
				*(_DWORD*)(a1 + 40) = 1;
				*(_DWORD*)(a1 + 48) = 0;
				(*(void(__fastcall**)(__int64))(v8 + 144))(a1);
			}
			if (*(int*)(a1 + 40) >= 2)
			{
				*(_QWORD*)&v13 = 0i64;
				TlsValue = &off_140B5E648;
				*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v14 = TlsValue;
				v16 = 0x141D41F78i64;
				v15 = v13;
				v10 = sub_140196F30(&dword_140C8A24C, 35, &v16, &v14);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
				if (v10)
					DebugBreak();
			}
			else
			{
			LABEL_15:
				v9 = sub_14018B280(48i64, 0);
				if (v9)
					sub_1401D74C0(v9, a2, a1);
			}
		}
		if (*(_QWORD*)(v2 + 16) <= 1ui64)
		{
			*(_DWORD*)(v2 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
			if (*(_QWORD*)(v2 + 24))
			{
				if (!*(_QWORD*)(v2 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v2 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v2 + 16);
		}
	}
}
// 1401C6CAC: variable 'v6' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A24C: using guessed type _DWORD dword_140C8A24C;

