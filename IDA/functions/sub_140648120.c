#include "../winhttp.h"

//----- (0000000140648120) ----------------------------------------------------
__m128 __fastcall sub_140648120(__int64 a1, unsigned int* a2, unsigned int* a3)
{
	__int128 v3; // xmm6
	unsigned int* v4; // rdi
	__int64 v6; // rbp
	__int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rax

	v3 = 0x3F800000u;
	v4 = a3;
	if (a2)
	{
		if (!a3)
			v4 = a2 + 2;
		v6 = sub_140209F60(a2[80]);
		v7 = sub_140209B20(a2[82]);
		v8 = sub_14020A3A0(a2[81]);
		v9 = sub_14020CE20(*v4);
		if (v6)
			v3 = *(unsigned int*)(v6 + 20);
		if (v7)
			*(float*)&v3 = *(float*)&v3 * *(float*)(v7 + 28);
		if (v8)
			*(float*)&v3 = *(float*)&v3 * *(float*)(v8 + 28);
		if (v9)
			*(float*)&v3 = *(float*)&v3 * *(float*)(v9 + 8);
	}
	return (__m128)v3;
}

