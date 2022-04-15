#include "../winhttp.h"

//----- (000000014015B480) ----------------------------------------------------
__int64 __fastcall sub_14015B480(_QWORD* a1)
{
	unsigned int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rsi
	char* v8; // rax
	char* v9; // rax
	int* v10; // rax
	__m128* v11; // rsi
	_WORD* v12; // r15
	__m128i* v13; // r14
	int v14; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-39h] BYREF
	__int64 v17; // [rsp+48h] [rbp-31h]
	LPVOID Value; // [rsp+50h] [rbp-29h]
	__int64 v19[4]; // [rsp+60h] [rbp-19h] BYREF
	__int64(__fastcall * *v20)(); // [rsp+80h] [rbp+7h] BYREF
	__m128i* v21; // [rsp+88h] [rbp+Fh]
	LPVOID lpTlsValue; // [rsp+90h] [rbp+17h]
	__m128i* v23; // [rsp+98h] [rbp+1Fh]
	__int64(__fastcall * *v24)(); // [rsp+A0h] [rbp+27h] BYREF
	_WORD* v25; // [rsp+A8h] [rbp+2Fh]
	LPVOID v26; // [rsp+B0h] [rbp+37h]
	__m128i* v27; // [rsp+B8h] [rbp+3Fh]
	__int64 v28; // [rsp+E8h] [rbp+6Fh] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v20, v8);
	v9 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v24, v9);
	sub_1400D6530((__int64)a1, 3);
	v10 = sub_14018B280(384i64, 0);
	if (v10)
		v11 = (__m128*)sub_140158FD0((__int64)v10, v7);
	else
		v11 = 0i64;
	v12 = v25;
	v13 = v21;
	sub_14015AB40(v11, v21, v25);
	if (v11)
	{
		v1 = sub_14015B3A0(a1, v11);
		(*(void(__fastcall**)(__m128*))(v11->m128_u64[0] + 8))(v11);
	}
	else
	{
		v17 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v19[0] = (__int64)TlsValue;
		v19[1] = v17;
		v20 = &off_140B5E648;
		v21 = (__m128i*)L"FileName";
		v19[2] = (__int64)Value;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v20);
		v23 = v13;
		v25 = v21;
		v20 = &off_140B5E638;
		v27 = v13;
		v24 = &off_140B5E638;
		v28 = 0x141D2FEF0i64;
		v26 = lpTlsValue;
		v14 = sub_1401971E0(&dword_140C8A14C, 13, &v28, v12, v13, &v24, v19);
		v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v14)
			DebugBreak();
	}
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	return v1;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A14C: using guessed type _DWORD dword_140C8A14C;

