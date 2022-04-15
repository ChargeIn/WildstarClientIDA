#include "../winhttp.h"

//----- (000000014088E200) ----------------------------------------------------
__int64 __fastcall sub_14088E200(__int64 a1, int a2)
{
	int v2; // eax
	__int64 v4; // rcx
	int v5; // edx
	double v6; // xmm0_8
	__int64 result; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF
	int v9; // [rsp+34h] [rbp+Ch]

	v2 = 0;
	v4 = *(_QWORD*)(a1 + 24);
	v9 = 4;
	v5 = a2 - *(_DWORD*)(v4 + 144);
	if (v5 > 0)
		v2 = v5;
	if ((double)v2 * 1000.0 / (double)dword_140C110B4 <= 0.0)
		v6 = -0.5;
	else
		v6 = 0.5;
	v8 = (int)(v6 + (double)v2 * 1000.0 / (double)dword_140C110B4);
	result = sub_14088BB90(v4, &v8, 0xFFFFFFFF);
	*(_WORD*)(a1 + 60) |= 4u;
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;

