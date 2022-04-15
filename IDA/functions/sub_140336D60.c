#include "../winhttp.h"

//----- (0000000140336D60) ----------------------------------------------------
__int64 __fastcall sub_140336D60(__int64 a1, _QWORD* a2, unsigned __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rbp
	unsigned __int8* v8; // r10
	__int64* v9; // rbx
	__int64 v10; // rbx
	int CurrentThreadId; // edx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	HANDLE EventW; // rcx
	__int64 v16; // r8
	unsigned __int64 v17; // r9
	char v18; // cl
	HANDLE v19; // rcx

	*a2 = 0i64;
	if (!*(_QWORD*)(a1 + 16))
	{
		result = sub_140336B00(a1);
		if ((int)result < 0)
			return result;
	}
	v7 = 0i64;
	if (!a3)
		return 0i64;
	while (1)
	{
		v8 = *(unsigned __int8**)(a1 + 24);
		if (v8 != *(unsigned __int8**)(*(_QWORD*)(a1 + 16) + 32i64))
		{
			v16 = *(_QWORD*)(a1 + 32);
			v17 = 8 - v16;
			if (8 - v16 > a3 - v7)
				v17 = a3 - v7;
			v18 = v7;
			v7 += v17;
			*a2 |= (((1i64 << v17) - 1) & ((unsigned __int64)*v8 >> v16)) << v18;
			*(_QWORD*)(a1 + 32) = ((_BYTE)v16 + (_BYTE)v17) & 7;
			if ((((_BYTE)v16 + (_BYTE)v17) & 7) == 0)
			{
				++* (_DWORD*)(a1 + 8);
				*(_QWORD*)(a1 + 24) = v8 + 1;
			}
			goto LABEL_28;
		}
		v9 = *(__int64**)(a1 + 40);
		if (!v9 || !*(_QWORD*)(a1 + 48))
			return 2147942438i64;
		v10 = *v9;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v10 == CurrentThreadId)
		{
			++* (_QWORD*)(v10 + 8);
		}
		else
		{
			v12 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v12 >= 0x400)
				{
					sub_14019FB60(v10, CurrentThreadId);
					goto LABEL_14;
				}
			}
			*(_DWORD*)v10 = CurrentThreadId;
		}
	LABEL_14:
		if (*(_QWORD*)(a1 + 16))
			sub_140338730(*(__int64**)(a1 + 40), **(_QWORD***)(a1 + 48));
		v13 = **(_QWORD**)(a1 + 48);
		if (!v13)
			break;
		*(_QWORD*)(a1 + 16) = v13;
		v14 = *(_QWORD*)(v13 + 16);
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 24) = v14;
		if (*(_QWORD*)(v10 + 8) <= 1ui64)
		{
			*(_DWORD*)v10 = 0;
			_InterlockedExchange64((volatile __int64*)(v10 + 8), 0i64);
			if (*(_QWORD*)(v10 + 16))
			{
				if (!*(_QWORD*)(v10 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v10 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v10 + 8);
		}
	LABEL_28:
		if (v7 >= a3)
			return 0i64;
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	if (*(_QWORD*)(v10 + 8) > 1ui64)
	{
		--* (_QWORD*)(v10 + 8);
		return 2147942438i64;
	}
	*(_DWORD*)v10 = 0;
	_InterlockedExchange64((volatile __int64*)(v10 + 8), 0i64);
	if (*(_QWORD*)(v10 + 16))
	{
		if (!*(_QWORD*)(v10 + 24))
		{
			v19 = CreateEventW(0i64, 0, 0, 0i64);
			if (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 24), (signed __int64)v19, 0i64))
				CloseHandle(v19);
		}
		SetEvent(*(HANDLE*)(v10 + 24));
	}
	return 2147942438i64;
}

