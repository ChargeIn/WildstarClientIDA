#include "../winhttp.h"

//----- (000000014014CB50) ----------------------------------------------------
__int64 __fastcall sub_14014CB50(_QWORD* a1)
{
	unsigned int v2; // xmm6_4
	double v3; // xmm7_8
	double v4; // xmm8_8
	float v5; // xmm0_4
	_OWORD* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int128 v11; // [rsp+20h] [rbp-C8h] BYREF
	int v12[12]; // [rsp+30h] [rbp-B8h] BYREF
	__int128 v13; // [rsp+60h] [rbp-88h]

	*(float*)&v2 = sub_140056C40(a1, 1u);
	HIDWORD(v3) = 0;
	*(float*)&v3 = sub_140056C40(a1, 2u);
	HIDWORD(v4) = 0;
	*(float*)&v4 = sub_140056C40(a1, 3u);
	sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v2));
	sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v2));
	sub_1408FE3D0(v3);
	sub_1408FC950(v3);
	sub_1408FE3D0(v4);
	v5 = sub_1408FC950(v4);
	v12[8] = LODWORD(v3);
	v12[3] = 0;
	v12[7] = 0;
	*(float*)v12 = v5 * *(float*)&v3;
	*(float*)&v12[2] = (float)(*(float*)&v4 * *(float*)&v2) - (float)((float)(*(float*)&v3 * *(float*)&v2) * v5);
	*(float*)&v12[5] = (float)(v5 * *(float*)&v2) - (float)((float)(*(float*)&v3 * *(float*)&v2) * *(float*)&v4);
	*(float*)&v12[1] = (float)((float)(*(float*)&v3 * *(float*)&v2) * v5) + (float)(*(float*)&v4 * *(float*)&v2);
	*(float*)&v12[6] = (float)((float)(*(float*)&v3 * *(float*)&v2) * *(float*)&v4) + (float)(v5 * *(float*)&v2);
	*(float*)&v12[10] = *(float*)&v3 * *(float*)&v2;
	*(float*)&v12[4] = -(float)(*(float*)&v4 * *(float*)&v3);
	*(float*)&v12[9] = -(float)(*(float*)&v3 * *(float*)&v2);
	v13 = xmmword_140C78440;
	v12[11] = 0;
	sub_1401B1D60((float*)&v11, (float*)v12);
	v6 = (_OWORD*)sub_140059170(a1, 0x10ui64);
	*v6 = v11;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v9 = a1[2];
	*(_QWORD*)&v11 = v8;
	DWORD2(v11) = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78440: using guessed type __int128 xmmword_140C78440;

