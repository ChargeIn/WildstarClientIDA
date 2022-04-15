#include "../winhttp.h"

//----- (0000000140337C90) ----------------------------------------------------
__int64 __fastcall sub_140337C90(_QWORD* a1)
{
	__int64 v1; // rbx
	_QWORD* v3; // rdx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rbx
	int CurrentThreadId; // edx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 i; // rdi
	__int64 v11; // rax
	HANDLE EventW; // rcx

	v1 = a1[6];
	if (v1)
	{
		v6 = *(_QWORD*)(v1 + 16);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v6 == CurrentThreadId)
		{
			++* (_QWORD*)(v6 + 8);
		}
		else
		{
			v8 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v8 >= 0x400)
				{
					sub_14019FB60(v6, CurrentThreadId);
					goto LABEL_12;
				}
			}
			*(_DWORD*)v6 = CurrentThreadId;
		}
	LABEL_12:
		v9 = (_QWORD*)a1[7];
		for (i = a1[4] - a1[2]; v9; i += v11)
		{
			v11 = v9[4] - v9[2];
			v9 = (_QWORD*)v9[7];
		}
		if (*(_QWORD*)(v6 + 8) <= 1ui64)
		{
			*(_DWORD*)v6 = 0;
			_InterlockedExchange64((volatile __int64*)(v6 + 8), 0i64);
			if (*(_QWORD*)(v6 + 16))
			{
				if (!*(_QWORD*)(v6 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v6 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v6 + 8);
		}
		return i;
	}
	else
	{
		v3 = (_QWORD*)a1[7];
		for (result = a1[4] - a1[2]; v3; result += v5)
		{
			v5 = v3[4] - v3[2];
			v3 = (_QWORD*)v3[7];
		}
	}
	return result;
}

