#include "../winhttp.h"

//----- (00000001401DA1F0) ----------------------------------------------------
__int64 __fastcall sub_1401DA1F0(__int64 a1)
{
	__int64 v2; // rsi
	unsigned int* v3; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rcx
	HANDLE EventW; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 208i64))(*(_QWORD*)(a1 + 16));
	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	v3 = (unsigned int*)(v2 + 4856);
	CurrentThreadId = GetCurrentThreadId();
	v5 = *(unsigned int*)(v2 + 4856);
	v6 = CurrentThreadId;
	if ((_DWORD)v5 == CurrentThreadId)
	{
		++* (_QWORD*)(v2 + 4864);
	}
	else
	{
		v7 = 0i64;
		v5 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 4864), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v2 + 4856, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v3 = CurrentThreadId;
	}
LABEL_8:
	if ((*(_QWORD*)(v2 + 4768))-- == 1i64)
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v2 + 4848) + 16i64))(
			*(_QWORD*)(v2 + 4848),
			v5,
			v6);
	if (*(_QWORD*)(v2 + 4864) <= 1ui64)
	{
		*v3 = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 4864), 0i64);
		if (*(_QWORD*)(v2 + 4872))
		{
			if (!*(_QWORD*)(v2 + 4880))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 4880), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v2 + 4880));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 4864);
	}
	return sub_1401DA7C0(a1);
}
// 1401DA27D: variable 'v5' is possibly undefined
// 1401DA27D: variable 'v6' is possibly undefined

