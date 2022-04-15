#include "../winhttp.h"

//----- (00000001400DE3E0) ----------------------------------------------------
__int64 __fastcall sub_1400DE3E0(_QWORD* a1)
{
	__int64 v2; // rbx
	unsigned int v3; // xmm8_4
	unsigned int v4; // xmm7_4
	unsigned int v5; // xmm6_4
	double v6; // xmm0_8
	int v7; // eax
	unsigned int v8; // xmm3_4
	__int128 v10; // [rsp+50h] [rbp-D8h]
	__int128 v11[5]; // [rsp+80h] [rbp-A8h] BYREF
	int v12; // [rsp+D0h] [rbp-58h]

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		*(float*)&v3 = sub_140056C40(a1, 2u);
		*(float*)&v4 = sub_140056C40(a1, 3u);
		*(float*)&v5 = sub_140056C40(a1, 4u);
		v6 = sub_140056C40(a1, 5u);
		v7 = *(_DWORD*)(v2 + 144) | 0x300;
		v11[0] = *(_OWORD*)(v2 + 64);
		v12 = v7;
		*(float*)&v8 = v6;
		v11[2] = *(_OWORD*)(v2 + 96);
		*(_QWORD*)&v10 = __PAIR64__(v4, v3);
		*((_QWORD*)&v10 + 1) = __PAIR64__(v8, v5);
		v11[1] = *(_OWORD*)(v2 + 80);
		v11[3] = v10;
		v11[4] = *(_OWORD*)(v2 + 128);
		sub_1400CC680(v2, (__int64)v11);
	}
	return 0i64;
}

