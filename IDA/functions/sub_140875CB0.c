#include "../winhttp.h"

//----- (0000000140875CB0) ----------------------------------------------------
__int64 __fastcall sub_140875CB0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	float v5; // xmm2_4
	float v6; // xmm6_4
	int v8; // [rsp+50h] [rbp+8h] BYREF
	int v9; // [rsp+54h] [rbp+Ch]

	v8 = sub_140855A70(a1);
	v5 = 0.0;
	v6 = *(float*)(a1 + 96) - *(float*)(a1 + 92);
	v9 = *(_BYTE*)(a1 + 62) & 0x1F;
	if (v6 != 0.0)
		v5 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v6;
	return sub_1408380A0(
		qword_140C61BB0,
		*(_DWORD*)(a1 + 56),
		(float)(v5 + *(float*)(a1 + 92)) + *(float*)(a1 + 88),
		a3,
		&v8,
		*(_DWORD*)(a1 + 100));
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

