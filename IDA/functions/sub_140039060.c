//----- (0000000140039060) ----------------------------------------------------
void __fastcall sub_140039060(__int64 a1)
{
	__int64 v2; // rbp
	__int64 v3; // r15
	__int64 v4; // r12
	__int64 v5; // rbx
	char* v6; // rdi
	__int64 v7; // r13
	__int64 v8; // r14
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	char* v11; // rdx
	__int64 v12; // [rsp+60h] [rbp+8h]

	v2 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"LoginWindow");
	v3 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"LoginForm");
	v4 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthForm");
	v5 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"Account");
	v6 = (char*)sub_1400E9080(*(_QWORD**)(a1 + 72), L"Password");
	v7 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"SteamIndicator");
	v8 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AccountInputDisabled");
	v12 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"IpVerifyForm");
	(*(void(__fastcall**)(char*, _QWORD))(*(_QWORD*)v6 + 80i64))(v6, 0i64);
	v9 = *(_QWORD*)(a1 + 176);
	if (v9 && *(_QWORD*)(v9 - 8))
	{
		v10 = (_QWORD*)*((_QWORD*)v6 + 4);
		v11 = v6;
	}
	else
	{
		v10 = *(_QWORD**)(v5 + 32);
		v11 = (char*)v5;
	}
	sub_1400E8C50(v10, v11);
	sub_1400D42F0(v2, 1, 1, 4.0);
	sub_1400D42F0(v3, 1, 0, 4.0);
	sub_1400D42F0(v5, qword_140C63630 == 0, 0, 4.0);
	sub_1400D42F0(v4, 0, 0, 4.0);
	sub_1400D42F0(v7, qword_140C63630 != 0, 0, 4.0);
	sub_1400D42F0(v8, qword_140C63630 != 0, 0, 4.0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 80i64))(v8, *(_QWORD*)(a1 + 176));
	sub_1400D42F0(v12, 0, 0, 4.0);
}
// 1409F5D10: using guessed type wchar_t aLoginform_0[10];
// 1409F5D28: using guessed type wchar_t aLoginwindow_0[12];
// 1409F5D40: using guessed type wchar_t aAccount_0[8];
// 1409F5D50: using guessed type wchar_t aAuthform_0[9];
// 1409F5D68: using guessed type wchar_t aSteamindicator[15];
// 1409F5D88: using guessed type wchar_t aPassword_0[9];
// 1409F5DA0: using guessed type wchar_t aIpverifyform_0[13];
// 1409F5DC0: using guessed type wchar_t aAccountinputdi[21];
// 140C63630: using guessed type __int64 qword_140C63630;

