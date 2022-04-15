#include "../winhttp.h"

//----- (0000000140039AA0) ----------------------------------------------------
__int64 sub_140039AA0()
{
	_QWORD* v0; // rbx
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rbx
	int* v4; // rbp
	int* v5; // r15
	bool v6; // r8
	int v7; // edx
	int v8; // eax
	int* v9; // rdi
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // r14
	_WORD* v13; // rax
	int v14; // edx
	char v16[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v17; // [rsp+28h] [rbp-30h]
	_WORD* v18; // [rsp+30h] [rbp-28h]
	__int64 v19; // [rsp+38h] [rbp-20h]

	if (!*(_DWORD*)(qword_140C66E30 + 168))
	{
		v0 = *(_QWORD**)(qword_140C66E30 + 72);
		v1 = sub_1400E9080(v0, L"Account");
		v2 = sub_1400E9080(v0, L"Password");
		v3 = sub_1400E9080(v0, L"Save");
		v4 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 112i64))(v1);
		v5 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 112i64))(v2);
		v6 = v3 && (*(_BYTE*)(v3 + 432) & 2) != 0 && sub_1401301F0(v3);
		v7 = dword_140C3ADD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v7 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3ADC0, v7, v6);
		v8 = dword_140C3ADD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v8 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&off_140C3ADC0 + v8 + 32))
		{
			v9 = (int*)&unk_1409D0ED4;
			if (v4)
				v9 = v4;
		}
		else
		{
			v9 = (int*)&unk_1409D0EB4;
		}
		v10 = 0i64;
		v11 = 0i64;
		v17 = 0i64;
		v19 = 0i64;
		if (*(_WORD*)v9)
		{
			do
				++v10;
			while (*((_WORD*)v9 + v10));
		}
		v12 = (2 * v10) >> 1;
		if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v11 = sub_14018B280(2 * (v12 + 1), 0);
			v17 = v11;
			v19 = (__int64)v11 + 2 * v12 + 2;
		}
		sub_1407DB590(v11, v9, 2 * v12);
		v13 = (_WORD*)v11 + v12;
		v18 = v13;
		if (v13)
			*v13 = 0;
		v14 = dword_140C667D0;
		if (*(_DWORD*)qword_140C63750 < dword_140C667D0)
			v14 = *(_DWORD*)qword_140C63750;
		sub_14001A9B0((__int64)&unk_140C667C0, v14, (__int64)v16);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		if (v4 && *(_WORD*)v4 && v5 && *(_WORD*)v5)
			sub_140038570(qword_140C66E30, v4, v5);
	}
	return 0i64;
}
// 1409F6120: using guessed type wchar_t aAccount_2[8];
// 1409F6150: using guessed type wchar_t aSave_0[5];
// 1409F6168: using guessed type wchar_t aPassword_2[9];
// 140C3ADC0: using guessed type __int64 (__fastcall *off_140C3ADC0)();
// 140C3ADD0: using guessed type int dword_140C3ADD0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C667D0: using guessed type int dword_140C667D0;
// 140C66E30: using guessed type __int64 qword_140C66E30;
// 140039AA0: using guessed type char var_38[8];

