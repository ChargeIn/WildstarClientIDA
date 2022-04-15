#include "../winhttp.h"

//----- (00000001401971E0) ----------------------------------------------------
__int64 sub_1401971E0(_DWORD* a1, int a2, _QWORD* a3, ...)
{
	__int64 v4; // rdi
	int CurrentThreadId; // r10d
	__int64 v7; // rcx
	int v8; // ecx
	int v9; // eax
	const wchar_t* v10; // r9
	HANDLE EventW; // rcx
	__int64 v13; // [rsp+30h] [rbp-15C8h] BYREF
	struct _EXCEPTION_POINTERS ExceptionInfo; // [rsp+38h] [rbp-15C0h] BYREF
	__int64 v15; // [rsp+48h] [rbp-15B0h]
	int v16[4]; // [rsp+50h] [rbp-15A8h] BYREF
	__int64 v17; // [rsp+60h] [rbp-1598h]
	int v18; // [rsp+68h] [rbp-1590h]
	char* v19; // [rsp+70h] [rbp-1588h]
	struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-1508h] BYREF
	char v21[2046]; // [rsp+5C0h] [rbp-1038h] BYREF
	__int16 v22; // [rsp+DBEh] [rbp-83Ah]
	char v23[2048]; // [rsp+DC0h] [rbp-838h] BYREF
	__int64 retaddr; // [rsp+15F8h] [rbp+0h]
	va_list va; // [rsp+1618h] [rbp+20h] BYREF

	va_start(va, a3);
	v4 = a2;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	v8 = dword_140C63730 + 1;
	dword_140C63730 = v8;
	if (v8 == 1)
	{
		v9 = sub_1407DDA14(v21, 0x3FFui64, (unsigned __int16*)(*a3 - 19899968i64), (__int64)va);
		if (v9 < 0 || (unsigned __int64)v9 >= 0x3FF)
			v22 = 0;
		v15 = 0i64;
		v13 = 0x141D3E438i64;
		if (!(unsigned int)sub_1401A3130(v4, 0, &v13, v21))
		{
			sub_140196A10();
			return 0i64;
		}
		v8 = dword_140C63730;
		if (dword_140C63730 == 1 && *a1 < (unsigned int)dword_140C1E44C)
		{
			if ((int)v4 >= 131)
				v10 = L"Unknown";
			else
				v10 = off_140C2CE70[v4];
			sub_14001B370(v23, 1024i64, L"(%s) Error: %s\n", v10, v21);
			++* a1;
			if (!IsDebuggerPresent())
			{
				sub_1407E4830(v16, 0i64, 0x98ui64);
				sub_1407E4830((int*)&ContextRecord, 0i64, 0x4D0ui64);
				RtlCaptureContext(&ContextRecord);
				v17 = retaddr;
				v16[0] = -805371903;
				v19 = v23;
				v16[1] = 0;
				ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v16;
				v18 = 1;
				ExceptionInfo.ContextRecord = &ContextRecord;
				if ((unsigned int)TopLevelExceptionFilter(&ExceptionInfo) == 1)
					ExitProcess(1u);
			}
			v8 = dword_140C63730;
		}
	}
	dword_140C63730 = v8 - 1;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		if (qword_140C67410)
		{
			if (!hObject)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	return 0i64;
}
// 140A43DD8: using guessed type wchar_t aSErrorS_0[16];
// 140A46EE8: using guessed type wchar_t aUnknown_5[8];
// 140C1E44C: using guessed type int dword_140C1E44C;
// 140C2CE70: using guessed type wchar_t *off_140C2CE70[131];
// 140C63730: using guessed type int dword_140C63730;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;

