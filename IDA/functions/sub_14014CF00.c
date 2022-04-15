#include "../winhttp.h"

//----- (000000014014CF00) ----------------------------------------------------
__int64 __fastcall sub_14014CF00(_QWORD* a1)
{
	double v2; // xmm9_8
	float v3; // xmm9_4
	double v4; // xmm8_8
	float v5; // xmm8_4
	double v6; // xmm6_8
	float v7; // xmm6_4
	__int64 v8; // rbx
	__int64 v9; // r9
	__int128 v11; // [rsp+20h] [rbp-88h] BYREF

	HIDWORD(v2) = 0;
	v3 = sub_140056C40(a1, 1u);
	HIDWORD(v4) = 0;
	v5 = sub_140056C40(a1, 2u);
	HIDWORD(v6) = 0;
	v7 = sub_140056C40(a1, 3u);
	*(float*)&v6 = v7 * 0.5;
	sub_1408FE3D0(v6);
	sub_1408FC950(v6);
	*(float*)&v4 = v5 * 0.5;
	sub_1408FE3D0(v4);
	sub_1408FC950(v4);
	*(float*)&v2 = v3 * 0.5;
	sub_1408FE3D0(v2);
	sub_1408FC950(v2);
	*(float*)&v11 = (float)((float)(*(float*)&v2 * *(float*)&v4) * *(float*)&v6)
		+ (float)((float)(*(float*)&v2 * *(float*)&v4) * *(float*)&v6);
	*((float*)&v11 + 2) = (float)((float)(*(float*)&v2 * *(float*)&v4) * *(float*)&v6)
		- (float)((float)(*(float*)&v2 * *(float*)&v4) * *(float*)&v6);
	*((float*)&v11 + 1) = *((float*)&v11 + 2);
	*((float*)&v11 + 3) = *(float*)&v11;
	*(_OWORD*)sub_140059170(a1, 0x10ui64) = v11;
	v8 = a1[4];
	*(_QWORD*)&v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v9 = a1[2];
	DWORD2(v11) = 4;
	sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

