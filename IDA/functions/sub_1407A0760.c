#include "../winhttp.h"

//----- (00000001407A0760) ----------------------------------------------------
int __fastcall sub_1407A0760(__int64 a1)
{
	LONGLONG v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rdx
	PVOID* v9; // rax
	HANDLE EventW; // rcx
	int result; // eax
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
	LARGE_INTEGER v13; // [rsp+48h] [rbp+10h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(34);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v2 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	if ((dword_140DC4F20 & 1) == 0)
	{
		dword_140DC4F20 |= 1u;
		sub_1407DD89C(sub_140956CC0);
	}
	v3 = qword_140DC4F28;
	if (qword_140DC4F28)
		goto LABEL_28;
	v4 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v4 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 24);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4 + 16, CurrentThreadId);
				goto LABEL_15;
			}
		}
		*(_DWORD*)(v4 + 16) = CurrentThreadId;
	}
LABEL_15:
	if (!qword_140DC4F28)
	{
		v7 = sub_14018B280(128i64, 0);
		if (v7)
			v9 = sub_14019E5D0((PVOID*)v7, v8, 24);
		else
			v9 = 0i64;
		qword_140DC4F28 = (__int64)v9;
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
	v3 = qword_140DC4F28;
	if (qword_140DC4F28)
		LABEL_28:
	sub_14019E8F0(v3);
	if (a1)
	{
		sub_1407A06D0(a1);
		sub_14018B900(a1, 0);
	}
	if (v3)
		sub_14019EA00(v3);
	result = QueryPerformanceCounter(&v13);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(L"H Spell_Misc", 34, v13.QuadPart - v2 - ::PerformanceCount.QuadPart, 1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 1407A0869: variable 'v8' is possibly undefined
// 140B51840: using guessed type wchar_t aHSpellMisc_0[13];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;
// 140DC4F20: using guessed type int dword_140DC4F20;
// 140DC4F28: using guessed type __int64 qword_140DC4F28;

