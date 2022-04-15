//----- (000000014046AA00) ----------------------------------------------------
void __fastcall sub_14046AA00(__int64 a1, int a2, int a3)
{
	__int64 v3; // rdi
	LONGLONG v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v8; // rdx
	__int64 v9; // rcx
	PVOID* v10; // rax
	HANDLE EventW; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	int v14; // ecx
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF
	LARGE_INTEGER v16; // [rsp+58h] [rbp+20h] BYREF

	v3 = *(_QWORD*)(a1 + 5640);
	if (v3)
	{
		while (a2 != *(_DWORD*)(v3 + 4) || a3 != *(_DWORD*)(v3 + 12) && a2)
		{
			v3 = *(_QWORD*)(v3 + 136);
			if (!v3)
				return;
		}
		if (!dword_140C796CC)
		{
			if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
				sub_1401C4FB0(33);
			else
				dword_140C796CC = 1;
		}
		QueryPerformanceCounter(&PerformanceCount);
		v4 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		if ((dword_140DC4F10 & 1) == 0)
		{
			dword_140DC4F10 |= 1u;
			sub_1407DD89C(sub_140956CA0);
		}
		v5 = qword_140DC4F18;
		if (qword_140DC4F18)
			goto LABEL_33;
		v6 = qword_140C63760;
		CurrentThreadId = GetCurrentThreadId();
		v8 = CurrentThreadId;
		if (*(_DWORD*)(v6 + 16) == CurrentThreadId)
		{
			++* (_QWORD*)(v6 + 24);
		}
		else
		{
			v9 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v9 >= 0x400)
				{
					sub_14019FB60(v6 + 16, CurrentThreadId);
					goto LABEL_21;
				}
			}
			*(_DWORD*)(v6 + 16) = CurrentThreadId;
		}
	LABEL_21:
		if (!qword_140DC4F18)
		{
			v10 = (PVOID*)sub_14018B280(128i64, 0);
			if (v10)
				v10 = sub_14019E5D0(v10, v8, 24);
			qword_140DC4F18 = (__int64)v10;
		}
		if (*(_QWORD*)(v6 + 24) <= 1ui64)
		{
			*(_DWORD*)(v6 + 16) = 0;
			_InterlockedExchange64((volatile __int64*)(v6 + 24), 0i64);
			if (*(_QWORD*)(v6 + 32))
			{
				if (!*(_QWORD*)(v6 + 40))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 40), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v6 + 40));
			}
		}
		else
		{
			--* (_QWORD*)(v6 + 24);
		}
		v5 = qword_140DC4F18;
		if (qword_140DC4F18)
			LABEL_33:
		sub_14019E8F0(v5);
		if (*(_QWORD*)(v3 + 32))
			sub_140195D70(v3 + 16);
		v12 = *(_QWORD**)(v3 + 128);
		if (v12)
			*v12 = *(_QWORD*)(v3 + 136);
		v13 = *(_QWORD*)(v3 + 136);
		if (v13)
			*(_QWORD*)(v13 + 128) = *(_QWORD*)(v3 + 128);
		*(_QWORD*)(v3 + 128) = 0i64;
		*(_QWORD*)(v3 + 136) = 0i64;
		if (*(_QWORD*)(v3 + 104) || *(_QWORD*)(v3 + 112))
		{
			v14 = *(_DWORD*)(v3 + 96);
			if (v14)
			{
				if (v14 == 1)
					(*(void(__fastcall**)(_QWORD, _QWORD))(v3 + 112))(*(_QWORD*)(v3 + 104), *(_QWORD*)(v3 + 120));
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, __int64))(v3 + 112))(*(_QWORD*)(v3 + 104), v8);
			}
		}
		sub_1407A0290(v3);
		sub_14018B900(v3, 0);
		if (v5)
			sub_14019EA00(v5);
		QueryPerformanceCounter(&v16);
		if (!dword_140C796CC)
		{
			if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
				sub_1401C5100(L"H Spell_Misc", 33, v16.QuadPart - v4 - ::PerformanceCount.QuadPart, 1);
			else
				dword_140C796CC = 1;
		}
	}
}
// 14046AB2A: variable 'v8' is possibly undefined
// 140B51880: using guessed type wchar_t aHSpellMisc[13];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;
// 140DC4F10: using guessed type int dword_140DC4F10;
// 140DC4F18: using guessed type __int64 qword_140DC4F18;

