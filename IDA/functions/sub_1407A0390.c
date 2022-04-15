#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001407A0390) ----------------------------------------------------
int __fastcall sub_1407A0390(__int64 a1)
{
	LONGLONG v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // rdx
	__int64 v7; // rcx
	PVOID* v8; // rax
	HANDLE EventW; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	int v12; // ecx
	int result; // eax
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
	LARGE_INTEGER v15; // [rsp+48h] [rbp+10h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(33);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v2 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	if ((dword_140DC4F10 & 1) == 0)
	{
		dword_140DC4F10 |= 1u;
		sub_1407DD89C(sub_140956CA0);
	}
	v3 = qword_140DC4F18;
	if (qword_140DC4F18)
		goto LABEL_27;
	v4 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	v6 = CurrentThreadId;
	if (*(_DWORD*)(v4 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 24);
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v4 + 16, CurrentThreadId);
				goto LABEL_15;
			}
		}
		*(_DWORD*)(v4 + 16) = CurrentThreadId;
	}
LABEL_15:
	if (!qword_140DC4F18)
	{
		v8 = (PVOID*)sub_14018B280(128i64, 0);
		if (v8)
			v8 = sub_14019E5D0(v8, v6, 24);
		qword_140DC4F18 = (__int64)v8;
	}
	if (*(_QWORD*)(v4 + 24) <= 1ui64)
	{
		*(_DWORD*)(v4 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 24), 0i64);
		if (*(_QWORD*)(v4 + 32))
		{
			if (!*(_QWORD*)(v4 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v4 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 24);
	}
	v3 = qword_140DC4F18;
	if (qword_140DC4F18)
		LABEL_27:
	sub_14019E8F0(v3);
	if (*(_QWORD*)(a1 + 32))
		sub_140195D70(a1 + 16);
	v10 = *(_QWORD**)(a1 + 128);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 136);
	v11 = *(_QWORD*)(a1 + 136);
	if (v11)
		*(_QWORD*)(v11 + 128) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	if (*(_QWORD*)(a1 + 104) || *(_QWORD*)(a1 + 112))
	{
		v12 = *(_DWORD*)(a1 + 96);
		if (v12)
		{
			if (v12 == 1)
				(*(void(__fastcall**)(_QWORD, _QWORD))(a1 + 112))(*(_QWORD*)(a1 + 104), *(_QWORD*)(a1 + 120));
		}
		else
		{
			(*(void(__fastcall**)(_QWORD, __int64))(a1 + 112))(*(_QWORD*)(a1 + 104), v6);
		}
	}
	sub_1407A0290(a1);
	sub_14018B900(a1, 0);
	if (v3)
		sub_14019EA00(v3);
	result = QueryPerformanceCounter(&v15);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(L"H Spell_Misc", 33, v15.QuadPart - v2 - ::PerformanceCount.QuadPart, 1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 1407A0480: variable 'v6' is possibly undefined
// 140B51880: using guessed type wchar_t aHSpellMisc[13];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;
// 140DC4F10: using guessed type int dword_140DC4F10;
// 140DC4F18: using guessed type __int64 qword_140DC4F18;

