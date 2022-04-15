#include "../winhttp.h"

//----- (0000000140283D30) ----------------------------------------------------
__int64 __fastcall sub_140283D30(__int64 a1, void(__fastcall*** a2)(_QWORD), int* a3, __int64 a4, int a5, _QWORD* a6)
{
	__int64 v6; // rdi
	_DWORD* v10; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v12; // rdx
	volatile signed __int64* v13; // rsi
	__int64 v14; // rcx
	unsigned __int64 v15; // r15
	_QWORD* v16; // rbx
	int* v17; // rax
	void(__fastcall * **v18)(_QWORD); // rbx
	void(__fastcall * ***v19)(_QWORD); // rbx
	int v20; // edi
	HANDLE EventW; // rcx
	__int64 v23[3]; // [rsp+38h] [rbp-60h] BYREF
	int v24; // [rsp+50h] [rbp-48h]
	__int64 v26; // [rsp+B8h] [rbp+20h]

	v6 = a4;
	if (a4 == -1)
	{
		v6 = 0i64;
		if (a3)
		{
			if (*(_WORD*)a3)
			{
				do
					++v6;
				while (*((_WORD*)a3 + v6));
			}
		}
	}
	if (!a2 || !a3 && v6 || !a6)
		return 2147942487i64;
	v10 = (_DWORD*)(a1 + 24);
	v26 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v12 = CurrentThreadId;
	v13 = (volatile signed __int64*)(v26 + 8);
	if (*v10 == CurrentThreadId)
	{
		++* v13;
	}
	else
	{
		v14 = 0i64;
		while (_InterlockedCompareExchange64(v13, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v14 >= 0x400)
			{
				sub_14019FB60(v26, CurrentThreadId);
				goto LABEL_16;
			}
		}
		*(_DWORD*)v26 = CurrentThreadId;
	}
LABEL_16:
	v23[0] = (__int64)a2;
	v23[1] = (__int64)a3;
	v23[2] = v6;
	v24 = a5;
	v15 = (*(__int64(__fastcall**)(__int64*, __int64))(a1 + 160))(v23, v12);
	v16 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8 * (v15 % *(_QWORD*)(a1 + 144)));
	if (!v16)
		goto LABEL_20;
	while (v15 != *v16 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 168))(v23, v16 + 2))
	{
		v16 = (_QWORD*)v16[1];
		if (!v16)
			goto LABEL_20;
	}
	v19 = (void(__fastcall****)(_QWORD))(v16 + 6);
	if (v19)
	{
		v18 = *v19;
		(**v18)(v18);
	}
	else
	{
	LABEL_20:
		v17 = sub_14018B280(296i64, 0);
		if (v17)
			v18 = (void(__fastcall***)(_QWORD))sub_1402BAE20((__int64)v17, a1);
		else
			v18 = 0i64;
		v20 = sub_1402BB1F0((__int64)v18, a2, a3, v6, a5);
		if (v20 < 0)
		{
			if (v18)
			{
				sub_1402BAF40((__int64)v18);
				sub_14018B900((__int64)v18, 0);
			}
			goto LABEL_25;
		}
	}
	v20 = 0;
	*a6 = v18;
LABEL_25:
	if (*v13 <= 1ui64)
	{
		*(_DWORD*)v26 = 0;
		_InterlockedExchange64(v13, 0i64);
		if (*(_QWORD*)(v26 + 16))
		{
			if (!*(_QWORD*)(v26 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v26 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v26 + 24));
		}
		return (unsigned int)v20;
	}
	else
	{
		--* v13;
		return (unsigned int)v20;
	}
}
// 140283E2F: variable 'v12' is possibly undefined

