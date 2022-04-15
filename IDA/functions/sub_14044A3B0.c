#include "../winhttp.h"

//----- (000000014044A3B0) ----------------------------------------------------
_OWORD* __fastcall sub_14044A3B0(__int64 a1, int* a2)
{
	__int64 v2; // r8
	_OWORD* v3; // r9
	float v4; // xmm2_4
	_OWORD* result; // rax
	__int128 v6; // [rsp+30h] [rbp-68h]
	__int128 v7; // [rsp+40h] [rbp-58h] BYREF

	sub_14044A2D0(a2, &v7);
	v6 = xmmword_140C7CE30;
	v4 = (float)(*((float*)&xmmword_140C7CE20 + 2) - (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5))
		+ (float)((float)(*(_DWORD*)(v2 + 12) - HIDWORD(qword_140C77768)) * *((float*)&xmmword_140C7CE00 + 1));
	if ((*(_DWORD*)(v2 + 8) - (int)qword_140C77768) % 2 == 1)
		v4 = v4 + (float)(*((float*)&xmmword_140C7CE00 + 1) * 0.5);
	*(float*)&v6 = *(float*)&xmmword_140C7CE00
		+ (float)((float)(*(float*)&xmmword_140C7CE20 - (float)(*(float*)&xmmword_140C7CE00 * 0.5))
			+ (float)((float)((float)(*(float*)&xmmword_140C7CE00 * 3.0) * 0.25)
				* (float)(*(_DWORD*)(v2 + 8) - qword_140C77768)));
	result = v3;
	*((float*)&v6 + 2) = *((float*)&xmmword_140C7CE00 + 1) + v4;
	*v3 = v7;
	v3[1] = v6;
	return result;
}
// 14044A3D6: variable 'v2' is possibly undefined
// 14044A4A8: variable 'v3' is possibly undefined
// 140C77768: using guessed type __int64 qword_140C77768;
// 140C7CE00: using guessed type __int128 xmmword_140C7CE00;
// 140C7CE20: using guessed type __int128 xmmword_140C7CE20;
// 140C7CE30: using guessed type __int128 xmmword_140C7CE30;

