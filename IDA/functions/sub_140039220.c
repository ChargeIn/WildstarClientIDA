#include "../winhttp.h"

//----- (0000000140039220) ----------------------------------------------------
void __fastcall sub_140039220(__int64 a1)
{
	unsigned __int16* v2; // rdx
	int** v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rbp
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx
	int* v10; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(unsigned __int16**)(qword_140C7AAC0 + 24);
	if (v2)
	{
		v3 = sub_14018DD50(&v10, v2);
	}
	else
	{
		v10 = 0i64;
		v3 = &v10;
	}
	sub_1400B4840(a1, (const char*)*v3);
	if (v10)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	v4 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"LoginWindow");
	v5 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"LoginForm");
	v6 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthForm");
	v7 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"IpVerifyForm");
	v8 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"VerificationCode");
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 80i64))(v8, 0i64);
	sub_1400D42F0(v4, 1, 1, 4.0);
	sub_1400D42F0(v7, 1, 0, 4.0);
	sub_1400D42F0(v6, 0, 0, 4.0);
	sub_1400D42F0(v5, 0, 0, 4.0);
	v9 = *(_QWORD*)(a1 + 72);
	if (v9)
		Apollo_LUAEvent(v9, "NetworkStatus", &unk_1409D01F2);
	*(_DWORD*)(a1 + 168) = 0;
}
// 140039267: variable 'a1' is possibly undefined
// 1409F5DF0: using guessed type wchar_t aLoginform_1[10];
// 1409F5E08: using guessed type wchar_t aLoginwindow_1[12];
// 1409F5E20: using guessed type wchar_t aIpverifyform_1[13];
// 1409F5E40: using guessed type wchar_t aAuthform_1[9];
// 1409F5E68: using guessed type wchar_t aVerificationco[17];
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

