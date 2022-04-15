//----- (00000001401A0CC0) ----------------------------------------------------
void sub_1401A0CC0()
{
	int v0; // ebx
	DWORD CurrentThreadId; // edx
	LONGLONG v2; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF
	LARGE_INTEGER v5; // [rsp+38h] [rbp+10h] BYREF

	if (!dword_140C884A4)
		return;
	v0 = sub_14018CDF0() + 30000;
	if (!dword_140C884A4)
		return;
	while (1)
	{
		if (!dword_140C7F94C)
			sub_14018CC40();
		CurrentThreadId = GetCurrentThreadId();
		if (dword_140C67440 == CurrentThreadId)
		{
			++qword_140C67448;
		}
		else
		{
			if (_InterlockedCompareExchange64(&qword_140C67448, 1i64, 0i64))
				goto LABEL_18;
			dword_140C67440 = CurrentThreadId;
		}
		if ((dword_140C8E0D0 & 1) == 0)
		{
			dword_140C8E0D0 |= 1u;
			QueryPerformanceCounter(&PerformanceCount);
			qword_140C8E0D8 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		}
		QueryPerformanceCounter(&v5);
		v2 = v5.QuadPart - ::PerformanceCount.QuadPart - qword_140C8E0D8;
		qword_140C8E0D8 = v5.QuadPart - ::PerformanceCount.QuadPart;
		dword_140C884A0 += (v2 + qword_140C8A198) / (unsigned __int64)qword_140C88498;
		qword_140C8A198 = v2
			+ qword_140C8A198
			- qword_140C88498 * (unsigned int)((v2 + qword_140C8A198) / (unsigned __int64)qword_140C88498);
		if ((unsigned __int64)qword_140C67448 <= 1)
		{
			dword_140C67440 = 0;
			_InterlockedExchange64(&qword_140C67448, 0i64);
			if (qword_140C67450)
			{
				if (!qword_140C67458)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C67458, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C67458);
			}
		}
		else
		{
			--qword_140C67448;
		}
	LABEL_18:
		if (dword_140C884A0 - v0 >= 0)
			break;
		Sleep(1u);
		if (!dword_140C884A4)
			return;
	}
	if (dword_140C884A4)
	{
		OutputDebugStringA("ThreadShutdown: Threads remaining after 30 seconds");
		if (IsDebuggerPresent())
			DebugBreak();
	}
}
// 140C67440: using guessed type int dword_140C67440;
// 140C67448: using guessed type __int64 qword_140C67448;
// 140C67450: using guessed type __int64 qword_140C67450;
// 140C7F94C: using guessed type int dword_140C7F94C;
// 140C88498: using guessed type __int64 qword_140C88498;
// 140C884A0: using guessed type int dword_140C884A0;
// 140C884A4: using guessed type int dword_140C884A4;
// 140C8A198: using guessed type __int64 qword_140C8A198;
// 140C8E0D0: using guessed type int dword_140C8E0D0;
// 140C8E0D8: using guessed type __int64 qword_140C8E0D8;

