#include "../winhttp.h"

//----- (00000001407F0524) ----------------------------------------------------
LPVOID __fastcall sub_1407F0524(LPVOID lpMem, SIZE_T dwBytes)
{
	SIZE_T v2; // rbx
	LPVOID v5; // rsi
	_QWORD* v6; // rbx
	int v7; // eax
	_QWORD* v8; // rbx
	int LastError; // eax

	v2 = dwBytes;
	if (!lpMem)
		return sub_1407E1500(dwBytes);
	if (!dwBytes)
	{
		sub_1407E14C0(lpMem);
		return 0i64;
	}
	if (dwBytes > 0xFFFFFFFFFFFFFFE0ui64)
	{
	LABEL_12:
		sub_1407E2E34(v2);
		*(_DWORD*)sub_1407DE1B0() = 12;
		return 0i64;
	}
	while (1)
	{
		if (!v2)
			v2 = 1i64;
		v5 = HeapReAlloc(hHeap, 0, lpMem, v2);
		if (v5)
			return v5;
		if (!dword_140C6082C)
		{
			v8 = sub_1407DE1B0();
			LastError = GetLastError();
			*(_DWORD*)v8 = sub_1407DE1D0(LastError);
			return v5;
		}
		if (!sub_1407E2E34(v2))
		{
			v6 = sub_1407DE1B0();
			v7 = GetLastError();
			*(_DWORD*)v6 = sub_1407DE1D0(v7);
			return 0i64;
		}
		if (v2 > 0xFFFFFFFFFFFFFFE0ui64)
			goto LABEL_12;
	}
}
// 140C6082C: using guessed type int dword_140C6082C;

