#include "../winhttp.h"

//----- (000000014033B1D0) ----------------------------------------------------
void __fastcall sub_14033B1D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // rdx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // r14
	__int64 v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	HANDLE EventW; // rcx

	if (a2)
	{
		v4 = a1 + 288;
		CurrentThreadId = GetCurrentThreadId();
		v6 = CurrentThreadId;
		if (*(_DWORD*)v4 == CurrentThreadId)
		{
			++* (_QWORD*)(v4 + 8);
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60(v4, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v4 = CurrentThreadId;
		}
	LABEL_9:
		v8 = *(_QWORD**)(a2 + 208);
		if (v8)
			*v8 = *(_QWORD*)(a2 + 216);
		v9 = a2 + 216;
		v10 = *(_QWORD*)(a2 + 216);
		if (v10)
			*(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 208);
		*(_QWORD*)(a2 + 208) = 0i64;
		*(_QWORD*)v9 = 0i64;
		*(_QWORD*)(a2 + 40) = 0i64;
		v11 = *(_QWORD*)(a2 + 192);
		if (v11)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 8i64))(v11, v6);
			*(_QWORD*)(a2 + 192) = 0i64;
		}
		sub_14018B900(*(_QWORD*)(a2 + 200), 0);
		*(_QWORD*)(a2 + 200) = 0i64;
		*(_DWORD*)(a2 + 184) = 0;
		v12 = (_QWORD*)(a1 + 504);
		if (!*(_QWORD*)(a2 + 208))
		{
			*(_QWORD*)(a2 + 208) = v12;
			*(_QWORD*)v9 = *v12;
			*v12 = a2;
			if (*(_QWORD*)v9)
				*(_QWORD*)(*(_QWORD*)v9 + 208i64) = v9;
		}
		++* (_QWORD*)(a1 + 512);
		if (*(_QWORD*)(v4 + 8) <= 1ui64)
		{
			*(_DWORD*)v4 = 0;
			_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
			if (*(_QWORD*)(v4 + 16))
			{
				if (!*(_QWORD*)(v4 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v4 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v4 + 8);
		}
	}
}
// 14033B294: variable 'v6' is possibly undefined

