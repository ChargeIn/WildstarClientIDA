#include "../winhttp.h"

//----- (00000001407EEE58) ----------------------------------------------------
__int64 __fastcall sub_1407EEE58(int a1)
{
	__int64 v1; // rdi
	__int64 v2; // rbx
	void* v3; // rax
	int LastError; // ebx

	v1 = a1;
	if (sub_1407F55A4(a1) == -1
		|| ((_DWORD)v1 == 1 && (*(_BYTE*)(qword_140C60410[0] + 184) & 1) != 0
			|| (_DWORD)v1 == 2 && (*(_BYTE*)(qword_140C60410[0] + 96) & 1) != 0)
		&& (v2 = sub_1407F55A4(2), sub_1407F55A4(1) == v2)
		|| (v3 = (void*)sub_1407F55A4(v1), CloseHandle(v3)))
	{
		LastError = 0;
	}
	else
	{
		LastError = GetLastError();
	}
	sub_1407F54F8(v1);
	*(_BYTE*)(qword_140C60410[v1 >> 5] + 88 * (v1 & 0x1F) + 8) = 0;
	if (!LastError)
		return 0i64;
	sub_1407DE160(LastError);
	return 0xFFFFFFFFi64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

