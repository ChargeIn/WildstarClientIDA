#include "../winhttp.h"

//----- (00000001407B28E0) ----------------------------------------------------
__int64 __fastcall sub_1407B28E0(__int64 a1, int** a2)
{
	unsigned int v2; // ebx
	__int64 v4; // rdx
	int v5; // eax
	int v7; // [rsp+30h] [rbp-68h]
	int v8[16]; // [rsp+40h] [rbp-58h] BYREF

	v2 = 0;
	v7 = *(_DWORD*)(a1 + 12);
	sub_1401A3210(v8, 0x20ui64, 0i64, 0i64, 0, L"%d", v7);
	v4 = 0i64;
	if (LOWORD(v8[0]))
	{
		do
			++v4;
		while (*((_WORD*)v8 + v4));
	}
	v5 = sub_1401C5740(v8, 2 * v4 + 2, a2);
	if (v5 < 0)
		return (unsigned int)v5;
	return v2;
}
// 140B539C4: using guessed type wchar_t aD_79[3];

