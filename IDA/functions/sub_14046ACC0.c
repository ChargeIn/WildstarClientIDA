//----- (000000014046ACC0) ----------------------------------------------------
int __fastcall sub_14046ACC0(__int64 a1, __int64 a2, int a3)
{
	void** v3; // rax
	__int64 v4; // rdi
	__int64 v6; // rbp
	LONGLONG v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v11; // rdx
	__int64 v12; // rcx
	int* v13; // rax
	PVOID* v14; // rax
	HANDLE EventW; // rcx
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	int v18; // ecx
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
	LARGE_INTEGER v22; // [rsp+88h] [rbp+20h] BYREF

	v3 = &retaddr;
	v4 = *(_QWORD*)(a1 + 5640);
	if (v4)
	{
		do
		{
			v6 = *(_QWORD*)(v4 + 136);
			if (*(_DWORD*)(v4 + 8) != a3)
			{
				if (!dword_140C796CC)
				{
					if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
						sub_1401C4FB0(33);
					else
						dword_140C796CC = 1;
				}
				QueryPerformanceCounter(&PerformanceCount);
				v7 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
				if ((dword_140DC4F10 & 1) == 0)
				{
					dword_140DC4F10 |= 1u;
					sub_1407DD89C(sub_140956CA0);
				}
				v8 = qword_140DC4F18;
				if (qword_140DC4F18)
					goto LABEL_30;
				v9 = qword_140C63760;
				CurrentThreadId = GetCurrentThreadId();
				v11 = CurrentThreadId;
				if (*(_DWORD*)(v9 + 16) == CurrentThreadId)
				{
					++* (_QWORD*)(v9 + 24);
				}
				else
				{
					v12 = 0i64;
					while (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v12 >= 0x400)
						{
							sub_14019FB60(v9 + 16, CurrentThreadId);
							goto LABEL_17;
						}
					}
					*(_DWORD*)(v9 + 16) = CurrentThreadId;
				}
			LABEL_17:
				if (!qword_140DC4F18)
				{
					v13 = sub_14018B280(128i64, 0);
					if (v13)
						v14 = sub_14019E5D0((PVOID*)v13, v11, 24);
					else
						v14 = 0i64;
					qword_140DC4F18 = (__int64)v14;
				}
				if (*(_QWORD*)(v9 + 24) <= 1ui64)
				{
					*(_DWORD*)(v9 + 16) = 0;
					_InterlockedExchange64((volatile __int64*)(v9 + 24), 0i64);
					if (*(_QWORD*)(v9 + 32))
					{
						if (!*(_QWORD*)(v9 + 40))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 40), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v9 + 40));
					}
				}
				else
				{
					--* (_QWORD*)(v9 + 24);
				}
				v8 = qword_140DC4F18;
				if (qword_140DC4F18)
					LABEL_30:
				sub_14019E8F0(v8);
				if (*(_QWORD*)(v4 + 32))
					sub_140195D70(v4 + 16);
				v16 = *(_QWORD**)(v4 + 128);
				if (v16)
					*v16 = *(_QWORD*)(v4 + 136);
				v17 = *(_QWORD*)(v4 + 136);
				if (v17)
					*(_QWORD*)(v17 + 128) = *(_QWORD*)(v4 + 128);
				*(_QWORD*)(v4 + 128) = 0i64;
				*(_QWORD*)(v4 + 136) = 0i64;
				if (*(_QWORD*)(v4 + 104) || *(_QWORD*)(v4 + 112))
				{
					v18 = *(_DWORD*)(v4 + 96);
					if (v18)
					{
						if (v18 == 1)
							(*(void(__fastcall**)(_QWORD, _QWORD))(v4 + 112))(*(_QWORD*)(v4 + 104), *(_QWORD*)(v4 + 120));
					}
					else
					{
						(*(void(__fastcall**)(_QWORD, __int64))(v4 + 112))(*(_QWORD*)(v4 + 104), v11);
					}
				}
				sub_1407A0290(v4);
				sub_14018B900(v4, 0);
				if (v8)
					sub_14019EA00(v8);
				LODWORD(v3) = QueryPerformanceCounter(&v22);
				if (!dword_140C796CC)
				{
					LODWORD(v3) = dword_140C636A8 - dword_140C785B0;
					if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
						LODWORD(v3) = sub_1401C5100(L"H Spell_Misc", 33, v22.QuadPart - v7 - ::PerformanceCount.QuadPart, 1);
					else
						dword_140C796CC = 1;
				}
			}
			v4 = v6;
		} while (v6);
	}
	return (int)v3;
}
// 14046ADEF: variable 'v11' is possibly undefined
// 140B51880: using guessed type wchar_t aHSpellMisc[13];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;
// 140DC4F10: using guessed type int dword_140DC4F10;
// 140DC4F18: using guessed type __int64 qword_140DC4F18;

