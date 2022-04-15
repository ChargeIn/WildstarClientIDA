#include "../winhttp.h"

//----- (0000000140875C20) ----------------------------------------------------
__int64 __fastcall sub_140875C20(__int64 a1)
{
	int v2; // eax
	float v3; // xmm6_4
	float v4; // xmm6_4
	float v5; // xmm2_4
	int v7; // [rsp+50h] [rbp+8h] BYREF
	int v8; // [rsp+54h] [rbp+Ch]

	v2 = sub_140855A70(a1);
	v3 = *(float*)(a1 + 96);
	v7 = v2;
	v4 = v3 - *(float*)(a1 + 92);
	v5 = 0.0;
	v8 = *(_BYTE*)(a1 + 62) & 0x1F;
	if (v4 != 0.0)
		v5 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v4;
	return sub_1408380A0(
		qword_140C61BB0,
		*(_DWORD*)(a1 + 56),
		(float)(v5 + *(float*)(a1 + 92)) + *(float*)(a1 + 88),
		0i64,
		&v7,
		*(_DWORD*)(a1 + 100));
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

