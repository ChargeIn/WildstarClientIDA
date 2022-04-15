#include "../winhttp.h"

//----- (000000014014C6E0) ----------------------------------------------------
__int64 __fastcall sub_14014C6E0(_QWORD* a1)
{
	unsigned int v2; // xmm6_4
	double v3; // xmm7_8
	double v4; // xmm8_8
	float v5; // xmm10_4
	float v6; // xmm12_4
	float v7; // xmm6_4
	float v8; // xmm0_4
	_OWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int128 v14; // [rsp+20h] [rbp-C8h] BYREF
	int v15[12]; // [rsp+30h] [rbp-B8h] BYREF
	__int128 v16; // [rsp+60h] [rbp-88h]

	*(float*)&v2 = sub_140056C40(a1, 1u);
	HIDWORD(v3) = 0;
	*(float*)&v3 = sub_140056C40(a1, 2u);
	HIDWORD(v4) = 0;
	*(float*)&v4 = sub_140056C40(a1, 3u);
	sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v2));
	v5 = *(float*)&v2;
	sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v2));
	v6 = *(float*)&v2;
	sub_1408FE3D0(v3);
	sub_1408FC950(v3);
	sub_1408FE3D0(v4);
	v7 = *(float*)&v4;
	v8 = sub_1408FC950(v4);
	v15[3] = 0;
	v15[7] = 0;
	v15[11] = 0;
	*(float*)&v15[4] = -*(float*)&v4;
	*(float*)v15 = v8 * *(float*)&v3;
	*(float*)&v15[2] = (float)((float)(v7 * v7) * *(float*)&v3) - (float)(*(float*)&v3 * v6);
	*(float*)&v15[5] = v8 * v6;
	*(float*)&v15[1] = (float)((float)(*(float*)&v4 * v6) * *(float*)&v3) + (float)(*(float*)&v3 * v5);
	*(float*)&v15[9] = (float)((float)(*(float*)&v4 * v6) * *(float*)&v3) - (float)(*(float*)&v3 * v5);
	*(float*)&v15[6] = v8 * v5;
	*(float*)&v15[8] = v8 * *(float*)&v3;
	*(float*)&v15[10] = (float)((float)(v7 * v7) * *(float*)&v3) + (float)(*(float*)&v3 * v6);
	v16 = xmmword_140C78440;
	sub_1401B1D60((float*)&v14, (float*)v15);
	v9 = (_OWORD*)sub_140059170(a1, 0x10ui64);
	*v9 = v14;
	v10 = a1[4];
	v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v12 = a1[2];
	*(_QWORD*)&v14 = v11;
	DWORD2(v14) = 4;
	sub_14005E8E0((__int64)a1, v10 + 160, (int*)&v14, v12);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78440: using guessed type __int128 xmmword_140C78440;

