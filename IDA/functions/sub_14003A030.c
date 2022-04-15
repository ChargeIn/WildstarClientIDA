#include "../winhttp.h"

//----- (000000014003A030) ----------------------------------------------------
__int64 sub_14003A030()
{
	_QWORD* v0; // rbx
	__int64 v1; // rbp
	__int64 v2; // r14
	__int64 v3; // rdi
	__int64 v4; // rsi
	__int64 v5; // rax
	int v6; // ecx
	__int64 v7; // rbx

	if (*(_DWORD*)(qword_140C66E30 + 168) == 1)
	{
		v0 = *(_QWORD**)(qword_140C66E30 + 72);
		v1 = sub_1400E9080(v0, L"LoginForm");
		v2 = sub_1400E9080(v0, L"AuthForm");
		v3 = sub_1400E9080(v0, L"Account");
		v4 = sub_1400E9080(v0, L"Password");
		v5 = sub_1400E9080(v0, L"IpVerifyForm");
		v6 = dword_140C3ADD0;
		v7 = v5;
		if (*(_DWORD*)qword_140C63750 < dword_140C3ADD0)
			v6 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C3ADE0 + v6))
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 80i64))(v4, 0i64);
		sub_1400D42F0(v1, 1, 0, 4.0);
		sub_1400D42F0(v2, 0, 0, 4.0);
		sub_1400D42F0(v7, 0, 0, 4.0);
		sub_140038BD0(qword_140C66E30);
		*(_DWORD*)(qword_140C66E30 + 168) = 0;
	}
	return 0i64;
}
// 1409F6220: using guessed type wchar_t aLoginform_2[10];
// 1409F6260: using guessed type wchar_t aAccount_5[8];
// 1409F6270: using guessed type wchar_t aAuthform_2[9];
// 1409F6290: using guessed type wchar_t aIpverifyform_2[13];
// 1409F62B0: using guessed type wchar_t aPassword_5[9];
// 140C3ADD0: using guessed type int dword_140C3ADD0;
// 140C3ADE0: using guessed type int dword_140C3ADE0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66E30: using guessed type __int64 qword_140C66E30;

