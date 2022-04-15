#include "../winhttp.h"

//----- (00000001401D9A60) ----------------------------------------------------
__int64 __fastcall sub_1401D9A60(__int64 a1, unsigned int a2)
{
	__int64 v2; // r15
	__int64 v4; // rsi
	int* v5; // rbx
	int v6; // edx
	__int64 v7; // rcx
	HANDLE v9; // rcx
	_DWORD* v10; // rcx
	__int64 v11; // rsi
	unsigned int* v12; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v14; // rdx
	__int64 v15; // rcx
	HANDLE EventW; // rcx

	v2 = a2;
	*(_QWORD*)(a1 + 192) += a2;
	if (*(_QWORD*)(a1 + 192) >= (unsigned __int64)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 184) + 16i64))(*(_QWORD*)(a1 + 184)))
	{
		v10 = *(_DWORD**)(a1 + 16);
		if (v10[2] == 1)
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v10 + 208i64))(v10);
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v12 = (unsigned int*)(v11 + 4856);
		CurrentThreadId = GetCurrentThreadId();
		v14 = CurrentThreadId;
		if (*(_DWORD*)(v11 + 4856) == CurrentThreadId)
		{
			++* (_QWORD*)(v11 + 4864);
		}
		else
		{
			v15 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 4864), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v15 >= 0x400)
				{
					sub_14019FB60(v11 + 4856, CurrentThreadId);
					goto LABEL_26;
				}
			}
			*v12 = CurrentThreadId;
		}
	LABEL_26:
		++* (_QWORD*)(v11 + 4824);
		*(_QWORD*)(v11 + 4832) += v2;
		if ((*(_QWORD*)(v11 + 4768))-- == 1i64)
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 4848) + 16i64))(*(_QWORD*)(v11 + 4848), v14);
		if (*(_QWORD*)(v11 + 4864) <= 1ui64)
		{
			*v12 = 0;
			_InterlockedExchange64((volatile __int64*)(v11 + 4864), 0i64);
			if (*(_QWORD*)(v11 + 4872))
			{
				if (!*(_QWORD*)(v11 + 4880))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 4880), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v11 + 4880));
			}
		}
		else
		{
			--* (_QWORD*)(v11 + 4864);
		}
		return sub_1401DA7C0(a1);
	}
	else
	{
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v5 = (int*)(v4 + 4856);
		v6 = GetCurrentThreadId();
		if (*(_DWORD*)(v4 + 4856) == v6)
		{
			++* (_QWORD*)(v4 + 4864);
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 4864), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60(v4 + 4856, v6);
					goto LABEL_9;
				}
			}
			*v5 = v6;
		}
	LABEL_9:
		*(_QWORD*)(v4 + 4832) += v2;
		if (*(_QWORD*)(v4 + 4864) <= 1ui64)
		{
			*v5 = 0;
			_InterlockedExchange64((volatile __int64*)(v4 + 4864), 0i64);
			if (*(_QWORD*)(v4 + 4872))
			{
				if (!*(_QWORD*)(v4 + 4880))
				{
					v9 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 4880), (signed __int64)v9, 0i64))
						CloseHandle(v9);
				}
				SetEvent(*(HANDLE*)(v4 + 4880));
			}
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, 1i64);
		}
		else
		{
			--* (_QWORD*)(v4 + 4864);
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, 1i64);
		}
	}
}
// 1401D9BF5: variable 'v14' is possibly undefined

