#include "../winhttp.h"

//----- (000000014044A2D0) ----------------------------------------------------
__int64 __fastcall sub_14044A2D0(int* a1, __int128* a2)
{
	float v2; // xmm4_4
	float v3; // xmm1_4
	float v4; // xmm2_4
	__int64 result; // rax
	__int128 v6; // [rsp+0h] [rbp-38h]
	__int128 v7; // [rsp+10h] [rbp-28h]

	v2 = *((float*)&xmmword_140C7CE00 + 1);
	v6 = xmmword_140C7CE20;
	v7 = xmmword_140C7CE30;
	v3 = (float)((float)(*(float*)&xmmword_140C7CE00 * 3.0) * 0.25) * (float)*a1;
	v4 = (float)(*((float*)&xmmword_140C7CE20 + 2) - (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5))
		+ (float)((float)a1[1] * *((float*)&xmmword_140C7CE00 + 1));
	*((float*)&v6 + 2) = v4;
	result = *a1 & 0x80000001;
	if (*a1 < 0)
		result = ((unsigned __int8)((*(_BYTE*)a1 & 1) - 1) | 0xFFFFFFFE) + 1;
	if ((_DWORD)result == 1)
	{
		v4 = v4 + (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5);
		*((float*)&v6 + 2) = v4;
	}
	*(float*)&v7 = *(float*)&xmmword_140C7CE00
		+ (float)((float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5)) + v3);
	*(float*)&v6 = (float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5)) + v3;
	*a2 = v6;
	*((float*)&v7 + 2) = v2 + v4;
	a2[1] = v7;
	return result;
}
// 140C7CE00: using guessed type __int128 xmmword_140C7CE00;
// 140C7CE20: using guessed type __int128 xmmword_140C7CE20;
// 140C7CE30: using guessed type __int128 xmmword_140C7CE30;

