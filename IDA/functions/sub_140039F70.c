#include "../winhttp.h"

//----- (0000000140039F70) ----------------------------------------------------
__int64 sub_140039F70()
{
	__int64 v0; // rax
	bool v1; // r8
	int v2; // edx

	if (!*(_DWORD*)(qword_140C66E30 + 168))
	{
		v0 = sub_1400E9080(*(_QWORD**)(qword_140C66E30 + 72), L"SaveIP");
		v1 = v0 && (*(_BYTE*)(v0 + 432) & 2) != 0 && sub_1401301F0(v0);
		v2 = dword_140C3AE10;
		if (*(_DWORD*)qword_140C63750 < dword_140C3AE10)
			v2 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3AE00, v2, v1);
	}
	return 0i64;
}
// 1409F6210: using guessed type wchar_t aSaveip_0[7];
// 140C3AE00: using guessed type __int64 (__fastcall *off_140C3AE00)();
// 140C3AE10: using guessed type int dword_140C3AE10;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66E30: using guessed type __int64 qword_140C66E30;

