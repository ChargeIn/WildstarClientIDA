#include "../winhttp.h"

//----- (00000001402843C0) ----------------------------------------------------
__int64 __fastcall sub_1402843C0(__int64 a1, __int64 a2, _QWORD* a3)
{
	_DWORD* v6; // rbx
	int CurrentThreadId; // r10d
	volatile signed __int64* v8; // r14
	__int64 v9; // rcx
	int* v10; // rax
	_QWORD* v11; // rbp
	int v12; // esi
	__int64 v13; // rdi
	int* v14; // rbx
	void(__fastcall * **v15)(_QWORD); // rax
	int v16; // edi
	HANDLE EventW; // rcx
	__int64 v19; // [rsp+68h] [rbp+10h]

	if (!a2 || !a3)
		return 2147942487i64;
	v6 = (_DWORD*)(a1 + 24);
	v19 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v8 = (volatile signed __int64*)(v19 + 8);
	if (*v6 == CurrentThreadId)
	{
		++* v8;
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64(v8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(v19, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v19 = CurrentThreadId;
	}
LABEL_10:
	v10 = sub_14018B280(88i64, 0);
	if (v10)
		v11 = (_QWORD*)sub_1402BC050((__int64)v10, a1);
	else
		v11 = 0i64;
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 32i64))(a2);
	v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 72i64))(a2);
	v14 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 64i64))(a2);
	v15 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2);
	v16 = sub_1402BC140((__int64)v11, v15, v14, v13, v12);
	if (v16 >= 0)
	{
		*a3 = v11;
		v16 = 0;
	}
	else if (v11)
	{
		sub_1402BC0C0(v11);
		sub_14018B900((__int64)v11, 0);
	}
	if (*v8 <= 1ui64)
	{
		*(_DWORD*)v19 = 0;
		_InterlockedExchange64(v8, 0i64);
		if (*(_QWORD*)(v19 + 16))
		{
			if (!*(_QWORD*)(v19 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v19 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v19 + 24));
		}
	}
	else
	{
		--* v8;
	}
	return (unsigned int)v16;
}

