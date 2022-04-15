//----- (0000000140197770) ----------------------------------------------------
__int64 sub_140197770(int a1, _QWORD* a2, ...)
{
	__int64 v3; // rdi
	__int64 v4; // rbx
	DWORD CurrentThreadId; // r9d
	__int64 v6; // rcx
	int v7; // eax
	const wchar_t* v8; // r9
	int v9; // edi
	DWORD v10; // eax
	char v12[8]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v13; // [rsp+38h] [rbp-C8h] BYREF
	struct _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v15; // [rsp+50h] [rbp-B0h]
	int v16[4]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v17; // [rsp+70h] [rbp-90h]
	int v18; // [rsp+78h] [rbp-88h]
	char* v19; // [rsp+80h] [rbp-80h]
	struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
	WCHAR Caption[264]; // [rsp+5D0h] [rbp+4D0h] BYREF
	char v22[2046]; // [rsp+7E0h] [rbp+6E0h] BYREF
	__int16 v23; // [rsp+FDEh] [rbp+EDEh]
	char v24[2048]; // [rsp+FE0h] [rbp+EE0h] BYREF
	WCHAR Text[1024]; // [rsp+17E0h] [rbp+16E0h] BYREF
	__int64 retaddr; // [rsp+2018h] [rbp+1F18h]
	va_list va; // [rsp+2030h] [rbp+1F30h] BYREF

	va_start(va, a2);
	v3 = a1;
	v4 = 0i64;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	if (++dword_140C63730 != 1)
		goto LABEL_28;
	v7 = sub_1407DDA14(v22, 0x3FFui64, (unsigned __int16*)(*a2 - 19899968i64), (__int64)va);
	if (v7 < 0 || (unsigned __int64)v7 >= 0x3FF)
		v23 = 0;
	v15 = 0i64;
	v13 = 0x141D3E2C0i64;
	sub_1401A3130(v3, 0, &v13, v22);
	if (dword_140C63730 != 1)
		LABEL_28:
	ExitProcess(1u);
	if ((int)v3 >= 131)
		v8 = L"Unknown";
	else
		v8 = off_140C2CE70[v3];
	sub_14001B370(v24, 1024i64, L"(%s) FatalError: %s\n", v8, v22);
	if (!dword_140C63734)
		goto LABEL_31;
	sub_140196B30(Caption);
	sub_14001B370(
		Text,
		1024i64,
		L"%s has encountered a fatal error and needs to exit:\n"
		"\n"
		"%s\n"
		"An error report will be generated and placed in the Errors directory.\n",
		Caption,
		v24);
	sub_140196AA0((__int64)v12);
	v9 = MessageBoxW(0i64, Text, Caption, 0x2010u);
	v10 = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == v10)
	{
		++qword_140C67408;
	}
	else
	{
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(&qword_140C67400, v10);
				goto LABEL_23;
			}
		}
		LODWORD(qword_140C67400) = v10;
	}
LABEL_23:
	if (v9 != 6)
	{
	LABEL_31:
		if (!IsDebuggerPresent())
		{
			sub_1407E4830(v16, 0i64, 0x98ui64);
			sub_1407E4830((int*)&ContextRecord, 0i64, 0x4D0ui64);
			RtlCaptureContext(&ContextRecord);
			v17 = retaddr;
			v16[0] = -805371902;
			v19 = v24;
			v16[1] = 1;
			ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v16;
			v18 = 1;
			ExceptionInfo.ContextRecord = &ContextRecord;
			if ((unsigned int)TopLevelExceptionFilter(&ExceptionInfo) == 1)
				ExitProcess(1u);
		}
		goto LABEL_28;
	}
	sub_140196A10();
	return 1i64;
}
// 14019FB60: using guessed type __int64 __fastcall sub_14019FB60(_QWORD, _QWORD);
// 140A43E10: using guessed type wchar_t aSHasEncountere_0[127];
// 140A43F10: using guessed type wchar_t aSFatalerrorS_0[21];
// 140A46EE8: using guessed type wchar_t aUnknown_5[8];
// 140C2CE70: using guessed type wchar_t *off_140C2CE70[131];
// 140C63730: using guessed type int dword_140C63730;
// 140C63734: using guessed type int dword_140C63734;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140197770: using guessed type char var_1FE0[8];

