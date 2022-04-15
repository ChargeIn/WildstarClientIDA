#include "../winhttp.h"

//----- (00000001402F3780) ----------------------------------------------------
__int64 __fastcall sub_1402F3780(__int64 a1, int* a2, __int64 a3, void(__fastcall*** a4)(_QWORD), int a5)
{
	__int64 v5; // r15
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rdi
	unsigned __int64 v13; // rbx
	_DWORD* v14; // rcx
	int* v15; // rbx
	int v16; // eax
	int CurrentThreadId; // edx
	__int64 v18; // rcx
	_QWORD* v19; // rcx
	__int64 v20; // rax
	HANDLE EventW; // rcx

	v5 = *(_QWORD*)(a1 + 1816);
	if (a2)
	{
		v10 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v10;
			while (*((_WORD*)a2 + v10));
		}
		v11 = sub_14018B280(2 * v10 + 18, 0);
		if (v11)
		{
			*((_QWORD*)v11 + 1) = v10;
			*(_QWORD*)v11 = off_140B55060;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = v11 + 4;
		v13 = 2 * v10;
		sub_1407DB590(v11 + 4, a2, v13);
		*(_WORD*)((char*)v12 + v13) = 0;
		*(_QWORD*)(a1 + 1816) = v12;
	}
	else
	{
		*(_QWORD*)(a1 + 1816) = 0i64;
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	*(_QWORD*)(a1 + 16) = a3;
	*(_QWORD*)(a1 + 56) = a4;
	(**a4)(a4);
	v14 = *(_DWORD**)(a1 + 16);
	*(_DWORD*)(a1 + 40) = a5;
	v15 = (int*)(a3 + 40);
	*(_DWORD*)(a1 + 1396) = v14[55] - 1;
	*(_DWORD*)(a1 + 1400) = v14[56] - 3;
	v16 = v14[52];
	*(_DWORD*)(a1 + 1408) = 0;
	--v16;
	*(_QWORD*)(a1 + 44) = 0i64;
	*(_DWORD*)(a1 + 52) = 0;
	*(_DWORD*)(a1 + 1452) = v16;
	*(_DWORD*)(a1 + 1404) = v16;
	*(_QWORD*)(a1 + 860) = 0xBF800000BF800000ui64;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a3 + 40) == CurrentThreadId)
	{
		++* (_QWORD*)(a3 + 48);
	}
	else
	{
		v18 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a3 + 48), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v18 >= 0x400)
			{
				sub_14019FB60((__int64)v15, CurrentThreadId);
				goto LABEL_18;
			}
		}
		*v15 = CurrentThreadId;
	}
LABEL_18:
	v19 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 136i64);
	if (!*(_QWORD*)(a1 + 24))
	{
		*(_QWORD*)(a1 + 24) = v19;
		*(_QWORD*)(a1 + 32) = *v19;
		*v19 = a1;
		v20 = *(_QWORD*)(a1 + 32);
		if (v20)
			*(_QWORD*)(v20 + 24) = a1 + 32;
	}
	if (*(_QWORD*)(a3 + 48) <= 1ui64)
	{
		*v15 = 0;
		_InterlockedExchange64((volatile __int64*)(a3 + 48), 0i64);
		if (*(_QWORD*)(a3 + 56))
		{
			if (!*(_QWORD*)(a3 + 64))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a3 + 64), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a3 + 64));
		}
		return 0i64;
	}
	else
	{
		--* (_QWORD*)(a3 + 48);
		return 0i64;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

