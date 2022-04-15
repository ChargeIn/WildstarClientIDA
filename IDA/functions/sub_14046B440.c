//----- (000000014046B440) ----------------------------------------------------
int __fastcall sub_14046B440(__int64 a1)
{
	void** v1; // rax
	__int64 i; // rdi
	LONGLONG v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v8; // rdx
	__int64 v9; // rcx
	int* v10; // rax
	PVOID* v11; // rax
	HANDLE EventW; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	int v15; // ecx
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
	LARGE_INTEGER v19; // [rsp+78h] [rbp+10h] BYREF

	v1 = &retaddr;
	for (i = *(_QWORD*)(a1 + 5640); i; i = *(_QWORD*)(a1 + 5640))
	{
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
			goto LABEL_29;
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
					goto LABEL_16;
				}
			}
			*(_DWORD*)(v6 + 16) = CurrentThreadId;
		}
	LABEL_16:
		if (!qword_140DC4F18)
		{
			v10 = sub_14018B280(128i64, 0);
			if (v10)
				v11 = sub_14019E5D0((PVOID*)v10, v8, 24);
			else
				v11 = 0i64;
			qword_140DC4F18 = (__int64)v11;
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
			LABEL_29:
		sub_14019E8F0(v5);
		if (*(_QWORD*)(i + 32))
			sub_140195D70(i + 16);
		v13 = *(_QWORD**)(i + 128);
		if (v13)
			*v13 = *(_QWORD*)(i + 136);
		v14 = *(_QWORD*)(i + 136);
		if (v14)
			*(_QWORD*)(v14 + 128) = *(_QWORD*)(i + 128);
		*(_QWORD*)(i + 128) = 0i64;
		*(_QWORD*)(i + 136) = 0i64;
		if (*(_QWORD*)(i + 104) || *(_QWORD*)(i + 112))
		{
			v15 = *(_DWORD*)(i + 96);
			if (v15)
			{
				if (v15 == 1)
					(*(void(__fastcall**)(_QWORD, _QWORD))(i + 112))(*(_QWORD*)(i + 104), *(_QWORD*)(i + 120));
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, __int64))(i + 112))(*(_QWORD*)(i + 104), v8);
			}
		}
		sub_1407A0290(i);
		sub_14018B900(i, 0);
		if (v5)
			sub_14019EA00(v5);
		LODWORD(v1) = QueryPerformanceCounter(&v19);
		if (!dword_140C796CC)
		{
			LODWORD(v1) = dword_140C636A8 - dword_140C785B0;
			if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
				LODWORD(v1) = sub_1401C5100(L"H Spell_Misc", 33, v19.QuadPart - v4 - ::PerformanceCount.QuadPart, 1);
			else
				dword_140C796CC = 1;
		}
	}
	return (int)v1;
}
// 14046B559: variable 'v8' is possibly undefined
// 140B51880: using guessed type wchar_t aHSpellMisc[13];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;
// 140DC4F10: using guessed type int dword_140DC4F10;
// 140DC4F18: using guessed type __int64 qword_140DC4F18;

