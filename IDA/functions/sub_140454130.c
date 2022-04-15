#include "../winhttp.h"

//----- (0000000140454130) ----------------------------------------------------
__int64 sub_140454130()
{
	__int64 v0; // rax
	int v1; // xmm6_4
	__int64 v2; // rsi
	unsigned __int64 i; // rdi
	int v4; // eax
	int v5; // ebx
	unsigned int v6; // eax
	unsigned int v7; // edi
	unsigned int v8; // ebx
	__int64 v9; // rax
	_DWORD* v10; // rcx
	int v11; // eax
	int v12; // ecx
	__int64(__fastcall * *v14)(); // [rsp+38h] [rbp-29h] BYREF
	__int64 v15; // [rsp+40h] [rbp-21h]
	LPVOID v16; // [rsp+48h] [rbp-19h]
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-9h] BYREF
	__int64 v18; // [rsp+60h] [rbp-1h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp+7h]
	__int64 v20; // [rsp+C8h] [rbp+67h] BYREF

	v0 = sub_140200220(0x1ADu);
	if (v0)
		v1 = *(_DWORD*)(v0 + 24);
	else
		v1 = 1120403456;
	v2 = 0i64;
	for (i = 0i64; i < 0x1CB0; i += 72i64)
	{
		if (*(float*)((char*)&unk_140C48150 + i + 52) == 0.0)
			*(_DWORD*)((char*)&unk_140C48150 + i + 52) = v1;
		if (*(_DWORD*)((char*)&unk_140C48150 + i) != v2)
		{
			TlsValue = &off_140B5E648;
			v18 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = TlsValue;
			v15 = v18;
			v16 = lpTlsValue;
			v20 = 0x141E02240i64;
			v4 = sub_1401971E0(&dword_140C8ACB8, 22, &v20, v2, &v14);
			TlsValue = &off_140B5E648;
			v5 = v4;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v5)
				DebugBreak();
		}
		++v2;
	}
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A6BA90, qword_140C63858);
	}
	else
	{
		if (dword_140C653C8)
		{
			v7 = 0;
			goto LABEL_19;
		}
		if ((int)sub_14021B5E0() < 0)
		{
			v7 = 0;
			goto LABEL_19;
		}
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D90 + 40i64))(qword_140C63D90);
	}
	v7 = v6;
LABEL_19:
	v8 = 0;
	if (v7)
	{
		while (!qword_140C63848)
		{
			if (dword_140C653C8)
			{
				v10 = 0i64;
			}
			else
			{
				if ((int)sub_14021B5E0() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D90 + 32i64))(qword_140C63D90, v8);
					goto LABEL_27;
				}
				v10 = 0i64;
			}
		LABEL_28:
			LODWORD(v20) = v10[1];
			v11 = v10[2];
			v12 = v10[3];
			HIDWORD(v20) = v11;
			LODWORD(v15) = v12;
			v14 = (__int64(__fastcall**)())v20;
			sub_140480A60((__int64)&unk_140C7CF40, (__int64)&TlsValue, &v14);
			if (++v8 >= v7)
				return 0i64;
		}
		v9 = qword_140C63848(off_140A6BA90, v8, qword_140C63858);
	LABEL_27:
		v10 = (_DWORD*)v9;
		goto LABEL_28;
	}
	return 0i64;
}
// 140A6BA90: using guessed type wchar_t *off_140A6BA90[2];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D90: using guessed type __int64 qword_140C63D90;
// 140C653C8: using guessed type int dword_140C653C8;
// 140C8ACB8: using guessed type _DWORD dword_140C8ACB8;

