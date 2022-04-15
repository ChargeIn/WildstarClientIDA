//----- (0000000140039CB0) ----------------------------------------------------
__int64 sub_140039CB0()
{
	_QWORD* v0; // rdi
	__int64 v1; // rsi
	__int64 v2; // rbp
	unsigned int v3; // eax
	_QWORD* v4; // rcx
	char* v5; // rdx

	if (!*(_DWORD*)(qword_140C66E30 + 168))
	{
		v0 = *(_QWORD**)(qword_140C66E30 + 72);
		sub_1400E9080(v0, L"LoginWindow");
		v1 = sub_1400E9080(v0, L"Account");
		v2 = sub_1400E9080(v0, L"Password");
		sub_1400F26A0((__int64)(v0 + 48), 1);
		v3 = sub_1400F26A0((__int64)(v0 + 48), 2);
		if (sub_1400E9140((__int64)v0, v3) == v1 || qword_140C63630)
		{
			v4 = *(_QWORD**)(v2 + 32);
			v5 = (char*)v2;
		}
		else
		{
			v4 = *(_QWORD**)(v1 + 32);
			v5 = (char*)v1;
		}
		sub_1400E8C50(v4, v5);
	}
	return 0i64;
}
// 1409F6188: using guessed type wchar_t aAccount_3[8];
// 1409F6198: using guessed type wchar_t aLoginwindow_3[12];
// 1409F61C0: using guessed type wchar_t aPassword_3[9];
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C66E30: using guessed type __int64 qword_140C66E30;

