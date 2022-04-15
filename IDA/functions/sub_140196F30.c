#include "../winhttp.h"

//----- (0000000140196F30) ----------------------------------------------------
__int64 sub_140196F30(_DWORD* a1, int a2, _QWORD* a3, ...)
{
	__int64 v4; // rdi
	DWORD CurrentThreadId; // r10d
	__int64 v7; // rcx
	int v8; // ecx
	int v9; // eax
	const wchar_t* v10; // r9
	HANDLE EventW; // rcx
	__int64 v13; // [rsp+30h] [rbp-11C8h] BYREF
	struct _EXCEPTION_POINTERS ExceptionInfo; // [rsp+38h] [rbp-11C0h] BYREF
	__int64 v15; // [rsp+48h] [rbp-11B0h]
	int v16[4]; // [rsp+50h] [rbp-11A8h] BYREF
	__int64 v17; // [rsp+60h] [rbp-1198h]
	int v18; // [rsp+68h] [rbp-1190h]
	char* v19; // [rsp+70h] [rbp-1188h]
	struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-1108h] BYREF
	char v21[1024]; // [rsp+5C0h] [rbp-C38h] BYREF
	char v22[2048]; // [rsp+9C0h] [rbp-838h] BYREF
	__int64 retaddr; // [rsp+11F8h] [rbp+0h]
	va_list va; // [rsp+1218h] [rbp+20h] BYREF

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
				sub_14019FB60(&qword_140C67400, CurrentThreadId);
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
		v9 = sub_1407DF5FC(v21, 0x3FFui64, (signed __int8*)(*a3 - 19899968i64), (int*)va);
		if (v9 < 0 || (unsigned __int64)v9 >= 0x3FF)
			v21[1023] = 0;
		v15 = 0i64;
		v13 = 0x141D3E400i64;
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
			sub_14001B370(v22, 1024i64, L"(%s) Error: %S\n", v10, v21);
			++* a1;
			if (!IsDebuggerPresent())
			{
				sub_1407E4830(v16, 0i64, 0x98ui64);
				sub_1407E4830((int*)&ContextRecord, 0i64, 0x4D0ui64);
				RtlCaptureContext(&ContextRecord);
				v17 = retaddr;
				v16[0] = -805371903;
				v19 = v22;
				v16[1] = 0;
				ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v16;
				v18 = 1;
				ExceptionInfo.ContextRecord = &ContextRecord;
				if (TopLevelExceptionFilter(&ExceptionInfo) == 1)
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
// 14019FB60: using guessed type __int64 __fastcall sub_14019FB60(_QWORD, _QWORD);
// 140A43DA0: using guessed type wchar_t aSErrorS[16];
// 140A46EE8: using guessed type wchar_t aUnknown_5[8];
// 140C1E44C: using guessed type int dword_140C1E44C;
// 140C2CE70: using guessed type wchar_t *off_140C2CE70[131];
// 140C63730: using guessed type int dword_140C63730;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;

