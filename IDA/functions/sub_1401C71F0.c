//----- (00000001401C71F0) ----------------------------------------------------
int __fastcall sub_1401C71F0(_DWORD* a1)
{
	__int64 v1; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	int v7; // eax
	void(__fastcall * *v8)(_DWORD*, __int64, __int64); // rax
	__int64 v9; // rcx
	__int64* v10; // rsi
	__int64* v11; // rbp
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	HANDLE EventW; // rcx

	v1 = qword_140C63758;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *(unsigned int*)(v1 + 8);
	v5 = CurrentThreadId;
	if ((_DWORD)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 16);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v1 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 8) = CurrentThreadId;
	}
LABEL_8:
	if ((a1[3] & 8) != 0)
	{
		if (!a1[12])
		{
			v7 = a1[10];
			a1[12] = 1;
			if (v7 >= 2)
			{
				if (v7 < 4)
					(*(void(__fastcall**)(_DWORD*, __int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, v4, v5);
			}
			else
			{
				v8 = *(void(__fastcall***)(_DWORD*, __int64, __int64))a1;
				a1[10] = 1;
				(*v8)(a1, v4, v5);
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 136i64))(a1);
				v9 = *((_QWORD*)a1 + 12);
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 104i64))(v9);
				v10 = (__int64*)*((_QWORD*)a1 + 10);
				if (v10)
				{
					do
					{
						v11 = (__int64*)v10[2];
						if (*v10 != *((_QWORD*)a1 + 12))
						{
							sub_1401D75A0(v10);
							sub_14018B900((__int64)v10, 0);
						}
						v10 = v11;
					} while (v11);
				}
				if (!*((_QWORD*)a1 + 10) && (int)a1[10] < 2)
					sub_1401C60B0((__int64)a1);
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 8i64))(a1);
			}
		}
	}
	else if ((int)a1[10] < 2)
	{
		v12 = *((_QWORD*)a1 + 12);
		if (v12)
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 104i64))(v12, v4, v5);
	}
	v13 = *(_QWORD*)(v1 + 16);
	if (v13 <= 1)
	{
		*(_DWORD*)(v1 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 16), 0i64);
		v13 = *(_QWORD*)(v1 + 24);
		if (v13)
		{
			if (!*(_QWORD*)(v1 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v13) = SetEvent(*(HANDLE*)(v1 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 16);
	}
	return v13;
}
// 1401C7286: variable 'v4' is possibly undefined
// 1401C7286: variable 'v5' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;

