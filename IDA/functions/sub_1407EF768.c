#include "../winhttp.h"

//----- (00000001407EF768) ----------------------------------------------------
__int64 __fastcall sub_1407EF768(int a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbx
	void* v4; // rax
	DWORD LastError; // ebx

	if (a1 != -2)
	{
		if (a1 < 0
			|| a1 >= (unsigned int)dword_140DC523C
			|| (v2 = (__int64)a1 >> 5, v3 = 88i64 * (a1 & 0x1F), (*(_BYTE*)(qword_140C60410[v2] + v3 + 8) & 1) == 0))
		{
			*(_DWORD*)sub_1407DE1B0() = 9;
			sub_1407DC370();
			return 0xFFFFFFFFi64;
		}
		sub_1407F5268(a1);
		if ((*(_BYTE*)(qword_140C60410[v2] + v3 + 8) & 1) != 0)
		{
			v4 = (void*)sub_1407F55A4(a1);
			if (FlushFileBuffers(v4))
				LastError = 0;
			else
				LastError = GetLastError();
			if (!LastError)
				goto LABEL_13;
			*(_DWORD*)sub_1407DE140() = LastError;
		}
		*(_DWORD*)sub_1407DE1B0() = 9;
		LastError = -1;
	LABEL_13:
		sub_1407F56C8(a1);
		return LastError;
	}
	*(_DWORD*)sub_1407DE1B0() = 9;
	return 0xFFFFFFFFi64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

