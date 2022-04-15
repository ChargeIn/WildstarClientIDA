#include "../winhttp.h"

//----- (00000001402E7180) ----------------------------------------------------
__int64 __fastcall sub_1402E7180(_QWORD* a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rbp
	__int64 result; // rax
	__int64 v7; // rbx
	int CurrentThreadId; // edx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rax
	HANDLE EventW; // rcx

	v4 = a3;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD*))(**(_QWORD**)(a2 + 24) + 72i64))(
		*(_QWORD*)(a2 + 24),
		a3,
		a1 + 3);
	if ((int)result >= 0)
	{
		a1[2] = a2;
		(**(void(__fastcall***)(__int64))a2)(a2);
		v7 = a1[2] + 2088i64;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v7 == CurrentThreadId)
		{
			++* (_QWORD*)(v7 + 8);
		}
		else
		{
			v9 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v9 >= 0x400)
				{
					sub_14019FB60(v7, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v7 = CurrentThreadId;
		}
	LABEL_9:
		*(_QWORD*)(a1[2] + 8 * v4 + 32) = a1;
		v10 = (_QWORD*)(a1[2] + 2080i64);
		if (!a1[45])
		{
			a1[45] = v10;
			a1[46] = *v10;
			*v10 = a1;
			v11 = a1[46];
			if (v11)
				*(_QWORD*)(v11 + 360) = a1 + 46;
		}
		a1[6] = 0i64;
		if (*(_QWORD*)(v7 + 8) <= 1ui64)
		{
			*(_DWORD*)v7 = 0;
			_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
			if (*(_QWORD*)(v7 + 16))
			{
				if (!*(_QWORD*)(v7 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v7 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v7 + 8);
		}
		return 0i64;
	}
	return result;
}

