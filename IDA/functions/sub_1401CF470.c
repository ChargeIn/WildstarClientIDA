#include "../winhttp.h"

//----- (00000001401CF470) ----------------------------------------------------
signed int __fastcall sub_1401CF470(_QWORD* a1)
{
	HANDLE IoCompletionPort; // rax
	signed int result; // eax
	int* v4; // rax
	__int64 v5; // r8
	__int64* v6; // rbx
	int v7; // [rsp+20h] [rbp-28h] BYREF
	_QWORD* v8; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v9)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v10; // [rsp+38h] [rbp-10h]

	IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFi64, 0i64, 1ui64, 0);
	a1[10] = IoCompletionPort;
	if (IoCompletionPort)
	{
		if (*(_DWORD*)(*a1 + 2160i64))
		{
			v4 = sub_14018B280(1184i64, 0);
			v6 = (__int64*)v4;
			if (v4)
			{
				*((_QWORD*)v4 + 146) = 0i64;
				*((_QWORD*)v4 + 147) = 0i64;
				*(_QWORD*)v4 = a1;
				*((_QWORD*)v4 + 135) = 0i64;
				*((_QWORD*)v4 + 136) = -1i64;
				*((_QWORD*)v4 + 137) = -1i64;
			}
			else
			{
				v6 = 0i64;
			}
			if ((int)sub_1401CECC0(v6, (const WCHAR*)(*a1 + 1600i64), v5) < 0 && v6)
			{
				sub_1401CEC10(v6);
				sub_14018B900((__int64)v6, 0);
			}
		}
		if (a1[26])
		{
			v7 = 0;
			v9 = sub_1401CF590;
			v8 = a1;
			v10 = 0i64;
			sub_140195960((__int64)(a1 + 1), 0, (__int64)&v7, 2);
		}
		return 0;
	}
	else
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}
// 1401CF51C: variable 'v5' is possibly undefined

