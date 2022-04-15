#include "../winhttp.h"

//----- (0000000140039FE0) ----------------------------------------------------
__int64 sub_140039FE0()
{
	__int64 v0; // rax
	int v1; // r11d

	if (*(_DWORD*)(qword_140C66E30 + 168) == 1)
	{
		v0 = sub_1400E9080(*(_QWORD**)(qword_140C66E30 + 72), L"RememberIPAddress");
		v1 = 0;
		if (v0)
			LOBYTE(v1) = sub_1401301F0(v0);
		sub_140038A90(qword_140C66E30, v1);
	}
	return 0i64;
}
// 14003A024: variable 'v1' is possibly undefined
// 1409F6238: using guessed type wchar_t aRememberipaddr[18];
// 140C66E30: using guessed type __int64 qword_140C66E30;

