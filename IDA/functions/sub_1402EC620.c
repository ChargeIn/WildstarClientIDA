#include "../winhttp.h"

//----- (00000001402EC620) ----------------------------------------------------
__int64 __fastcall sub_1402EC620(__int64 a1, __m128i* a2, __int64(__fastcall** a3)(__int64 a1))
{
	unsigned int* v5; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v7; // r8
	__int64 v8; // rdx
	volatile signed __int64* v9; // rdi
	__int64 v10; // r9
	__int64 v11; // rcx
	unsigned __int64 v12; // r14
	_QWORD* v13; // rbx
	int* v14; // rax
	__int64(__fastcall * v15)(__int64); // rbx
	int v16; // esi
	__int64 v17; // rbx
	HANDLE EventW; // rcx
	__m128i* v20; // [rsp+58h] [rbp+10h] BYREF
	__int64 v21; // [rsp+68h] [rbp+20h]

	v20 = a2;
	if (!a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	v5 = (unsigned int*)(a1 + 8);
	v21 = a1 + 8;
	CurrentThreadId = GetCurrentThreadId();
	v8 = *v5;
	v9 = (volatile signed __int64*)(v21 + 8);
	v10 = CurrentThreadId;
	if ((_DWORD)v8 == CurrentThreadId)
	{
		++* v9;
	}
	else
	{
		v11 = 0i64;
		v8 = 1i64;
		while (_InterlockedCompareExchange64(v9, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(v21, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v21 = CurrentThreadId;
	}
LABEL_10:
	v12 = (*(__int64(__fastcall**)(__m128i**, __int64, __int64, __int64))(a1 + 80))(&v20, v8, v7, v10);
	v13 = *(_QWORD**)(*(_QWORD*)(a1 + 72) + 8 * (v12 % *(_QWORD*)(a1 + 64)));
	if (!v13)
		goto LABEL_14;
	while (v12 != *v13 || !(*(unsigned int(__fastcall**)(__m128i**, _QWORD*))(a1 + 88))(&v20, v13 + 2))
	{
		v13 = (_QWORD*)v13[1];
		if (!v13)
			goto LABEL_14;
	}
	if (v13 == (_QWORD*)-24i64)
	{
	LABEL_14:
		v14 = sub_14018B280(520i64, 0);
		if (v14)
			v15 = (__int64(__fastcall*)(__int64))sub_14030D310((__int64)v14);
		else
			v15 = 0i64;
		v16 = sub_14030D6A0(v15, a1, v20);
		if (v16 < 0)
		{
			if (v15)
			{
				sub_14030D400((__int64)v15);
				sub_14018B900((__int64)v15, 0);
			}
			goto LABEL_26;
		}
		*a3 = v15;
	}
	else
	{
		if (a3)
			*a3 = (__int64(__fastcall*)(__int64))v13[3];
		(**(void(__fastcall***)(__int64(__fastcall*)(__int64))) * a3)(*a3);
	}
	v16 = 0;
LABEL_26:
	if (*v9 <= 1ui64)
	{
		*(_DWORD*)v21 = 0;
		_InterlockedExchange64(v9, 0i64);
		if (*(_QWORD*)(v21 + 16))
		{
			v17 = v21;
			if (!*(_QWORD*)(v21 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v17 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v17 + 24));
		}
	}
	else
	{
		--* v9;
	}
	return (unsigned int)v16;
}
// 1402EC6C3: variable 'v8' is possibly undefined
// 1402EC6C3: variable 'v7' is possibly undefined
// 1402EC6C3: variable 'v10' is possibly undefined

