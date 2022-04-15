#include "../winhttp.h"

//----- (0000000140039E20) ----------------------------------------------------
__int64 sub_140039E20()
{
	_QWORD* v0; // rbx
	__int64 v1; // rdi
	__int64 v2; // rbx
	bool v3; // r8
	int v4; // edx
	int v5; // eax
	int* v6; // rbx
	int v7; // edx
	char v9[8]; // [rsp+20h] [rbp-28h] BYREF
	int* v10; // [rsp+28h] [rbp-20h]
	int* v11; // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	if (!*(_DWORD*)(qword_140C66E30 + 168))
	{
		v0 = *(_QWORD**)(qword_140C66E30 + 72);
		v1 = sub_1400E9080(v0, L"Account");
		sub_1400E9080(v0, L"Password");
		v2 = sub_1400E9080(v0, L"Save");
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 112i64))(v1);
		v3 = v2 && (*(_BYTE*)(v2 + 432) & 2) != 0 && sub_1401301F0(v2);
		v4 = dword_140C3ADD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v4 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3ADC0, v4, v3);
		v5 = dword_140C3ADD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v5 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&off_140C3ADC0 + v5 + 32))
		{
			v6 = sub_14018B280(2i64, 0);
			v10 = v6;
			v12 = (__int64)v6 + 2;
			sub_1407DB590(v6, (int*)&unk_1409D0EEC, 0i64);
			v11 = v6;
			if (v6)
				*(_WORD*)v6 = 0;
			v7 = dword_140C667D0;
			if (*(_DWORD*)qword_140C63750 < dword_140C667D0)
				v7 = *(_DWORD*)qword_140C63750;
			sub_14001A9B0((__int64)&unk_140C667C0, v7, (__int64)v9);
			if (v6)
				sub_14018B900((__int64)v6, 0);
		}
	}
	return 0i64;
}
// 1409F61B0: using guessed type wchar_t aAccount_4[8];
// 1409F61D8: using guessed type wchar_t aSave_1[5];
// 1409F61F0: using guessed type wchar_t aPassword_4[9];
// 140C3ADC0: using guessed type __int64 (__fastcall *off_140C3ADC0)();
// 140C3ADD0: using guessed type int dword_140C3ADD0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C667D0: using guessed type int dword_140C667D0;
// 140C66E30: using guessed type __int64 qword_140C66E30;
// 140039E20: using guessed type char var_28[8];

