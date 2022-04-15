//----- (00000001403323A0) ----------------------------------------------------
_QWORD* __fastcall sub_1403323A0(_QWORD* a1, __int64 a2)
{
	unsigned __int64 v4; // rdx
	__int64 v5; // rbp
	int* v6; // rbx
	int CurrentThreadId; // eax
	LARGE_INTEGER v8; // rcx
	_QWORD** i; // rax
	HANDLE EventW; // rcx
	_BYTE* v12; // rbx
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF
	__int64 v14; // [rsp+60h] [rbp+18h] BYREF

	v4 = (*(unsigned __int16(__fastcall**)(_QWORD*))(*a1 + 64i64))(a1);
	if (v4 < a1[22] && (v5 = *(_QWORD*)(a1[21] + 8 * v4)) != 0)
	{
		v6 = (int*)(*(_QWORD*)a2 + 288i64);
		CurrentThreadId = GetCurrentThreadId();
		v8.QuadPart = (unsigned int)*v6;
		if (v8.LowPart == CurrentThreadId)
		{
			++* ((_QWORD*)v6 + 1);
		}
		else
		{
			v8.QuadPart = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)v6 + 1, 1i64, 0i64))
			{
				_mm_pause();
				if (++v8.QuadPart >= 0x400ui64)
				{
					sub_14019FB60((__int64)v6, CurrentThreadId);
					goto LABEL_10;
				}
			}
			*v6 = CurrentThreadId;
		}
	LABEL_10:
		if (*(_QWORD*)(*(_QWORD*)a2 + 408i64))
		{
			QueryPerformanceCounter(&PerformanceCount);
			*(_QWORD*)(v5 + 768) = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
			a1[32] += sub_140338040((_QWORD*)(*(_QWORD*)a2 + 408i64));
		}
		for (i = (_QWORD**)(*(_QWORD*)a2 + 408i64); *i; i = (_QWORD**)(*(_QWORD*)a2 + 408i64))
		{
			if (*(_QWORD*)(v5 + 80))
			{
				v8 = *(LARGE_INTEGER*)(v5 + 88);
				if (v8.QuadPart)
				{
					sub_140337F20((LARGE_INTEGER)v8.QuadPart, *i);
					if (!*(_QWORD*)(v5 + 56))
						sub_140336B00(v5 + 40);
				}
			}
		}
		if (*((_QWORD*)v6 + 1) <= 1ui64)
		{
			*v6 = 0;
			_InterlockedExchange64((volatile __int64*)v6 + 1, 0i64);
			if (*((_QWORD*)v6 + 2))
			{
				if (!*((_QWORD*)v6 + 3))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)v6 + 3, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*((HANDLE*)v6 + 3));
			}
		}
		else
		{
			--* ((_QWORD*)v6 + 1);
		}
		sub_140332AE0(v8, v5);
		return sub_1403321A0((__int64)a1, *(_DWORD*)(v5 + 16));
	}
	else
	{
		v12 = (_BYTE*)(*(_QWORD*)a2 + 200i64);
		if (!*v12)
			sub_140334D90(*(_QWORD*)a2 + 144i64);
		v14 = 0x141DEC0F8i64;
		return (_QWORD*)sub_1401A2E50(0xBu, 0, &v14, v12);
	}
}
// 140332519: variable 'v8' is possibly undefined

