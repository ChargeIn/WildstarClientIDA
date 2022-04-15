#include "../winhttp.h"

//----- (0000000140189E90) ----------------------------------------------------
int sub_140189E90()
{
	int CurrentThreadId; // edx
	__int64 v1; // rcx
	unsigned __int64 v2; // rcx
	unsigned __int8 v3; // al
	_QWORD* v4; // rax
	__int64 v5; // rcx
	_DWORD* StackBase; // rax
	int result; // eax
	HANDLE EventW; // rcx
	struct _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	sub_1407E4830((int*)qword_140C7F970, 0i64, 0x8000ui64);
	dword_140C7F934 = 0;
	qword_140C87970 = 0i64;
	qword_140C87978 = 0i64;
	qword_140C87980 = 0i64;
	GetSystemInfo(&SystemInfo);
	v2 = SystemInfo.dwPageSize - 1i64;
	dwSize = SystemInfo.dwPageSize;
	qword_140C7F968 = v2;
	if (SystemInfo.dwPageSize >= 2ui64)
	{
		v3 = 1;
		if ((v2 & 0xFFFFFFFF00000000ui64) != 0)
		{
			v3 = 33;
			v2 >>= 32;
		}
		if ((v2 & 0xFFFF0000) != 0)
		{
			v3 += 16;
			v2 >>= 16;
		}
		if ((v2 & 0xFF00) != 0)
		{
			v3 += 8;
			v2 >>= 8;
		}
		if ((v2 & 0xF0) != 0)
		{
			v3 += 4;
			v2 >>= 4;
		}
		if ((v2 & 0xC) != 0)
		{
			v3 += 2;
			v2 >>= 2;
		}
		if ((v2 & 2) != 0)
			++v3;
	}
	else
	{
		v3 = 0;
	}
	qword_140C87F30 = 0i64;
	qword_140C87F38 = 0i64;
	qword_140C7F958 = v3;
	qword_140C87F40 = 0i64;
	qword_140C87F48 = 0i64;
	v4 = &unk_140C87AC0;
	qword_140C87F50 = 0i64;
	qword_140C87F58 = 0i64;
	qword_140C87F60 = 0i64;
	qword_140C87F68 = 0i64;
	qword_140C87F70 = 0i64;
	qword_140C87F78 = 0i64;
	qword_140C87F80 = 0i64;
	qword_140C87F88 = 0i64;
	qword_140C87F90 = 0i64;
	qword_140C87F98 = 0i64;
	qword_140C87FA0 = 0i64;
	qword_140C87FA8 = 0i64;
	qword_140C87FB0 = 0i64;
	qword_140C87FB8 = 0i64;
	qword_140C87FC0 = 0i64;
	qword_140C87FC8 = 0i64;
	qword_140C87FD0 = 0i64;
	qword_140C87FD8 = 0i64;
	qword_140C87FE0 = 0i64;
	qword_140C87FE8 = 0i64;
	qword_140C87FF0 = 0i64;
	qword_140C87FF8 = 0i64;
	qword_140C88000 = 0i64;
	qword_140C88008 = 0i64;
	qword_140C88010 = 0i64;
	qword_140C88018 = 0i64;
	qword_140C88020 = 0i64;
	qword_140C88028 = 0i64;
	v5 = 35i64;
	do
	{
		*(v4 - 2) = 0i64;
		*(v4 - 1) = 0i64;
		*v4 = 0i64;
		v4[1] = 0i64;
		v4 += 4;
		--v5;
	} while (v5);
	dword_140C63684 = TlsAlloc();
	StackBase = NtCurrentTeb()->NtTib.StackBase;
	*(StackBase - 1) = 1;
	qword_140C636A0 = (__int64)(StackBase - 1);
	result = qword_140C67408;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		result = qword_140C67410;
		if (qword_140C67410)
		{
			if (!hObject)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	return result;
}
// 140C636A0: using guessed type __int64 qword_140C636A0;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F958: using guessed type __int64 qword_140C7F958;
// 140C7F968: using guessed type __int64 qword_140C7F968;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];
// 140C87970: using guessed type __int64 qword_140C87970;
// 140C87978: using guessed type __int64 qword_140C87978;
// 140C87980: using guessed type __int64 qword_140C87980;
// 140C87F30: using guessed type __int64 qword_140C87F30;
// 140C87F38: using guessed type __int64 qword_140C87F38;
// 140C87F40: using guessed type __int64 qword_140C87F40;
// 140C87F48: using guessed type __int64 qword_140C87F48;
// 140C87F50: using guessed type __int64 qword_140C87F50;
// 140C87F58: using guessed type __int64 qword_140C87F58;
// 140C87F60: using guessed type __int64 qword_140C87F60;
// 140C87F68: using guessed type __int64 qword_140C87F68;
// 140C87F70: using guessed type __int64 qword_140C87F70;
// 140C87F78: using guessed type __int64 qword_140C87F78;
// 140C87F80: using guessed type __int64 qword_140C87F80;
// 140C87F88: using guessed type __int64 qword_140C87F88;
// 140C87F90: using guessed type __int64 qword_140C87F90;
// 140C87F98: using guessed type __int64 qword_140C87F98;
// 140C87FA0: using guessed type __int64 qword_140C87FA0;
// 140C87FA8: using guessed type __int64 qword_140C87FA8;
// 140C87FB0: using guessed type __int64 qword_140C87FB0;
// 140C87FB8: using guessed type __int64 qword_140C87FB8;
// 140C87FC0: using guessed type __int64 qword_140C87FC0;
// 140C87FC8: using guessed type __int64 qword_140C87FC8;
// 140C87FD0: using guessed type __int64 qword_140C87FD0;
// 140C87FD8: using guessed type __int64 qword_140C87FD8;
// 140C87FE0: using guessed type __int64 qword_140C87FE0;
// 140C87FE8: using guessed type __int64 qword_140C87FE8;
// 140C87FF0: using guessed type __int64 qword_140C87FF0;
// 140C87FF8: using guessed type __int64 qword_140C87FF8;
// 140C88000: using guessed type __int64 qword_140C88000;
// 140C88008: using guessed type __int64 qword_140C88008;
// 140C88010: using guessed type __int64 qword_140C88010;
// 140C88018: using guessed type __int64 qword_140C88018;
// 140C88020: using guessed type __int64 qword_140C88020;
// 140C88028: using guessed type __int64 qword_140C88028;

