#include "../winhttp.h"

//----- (0000000140345990) ----------------------------------------------------
__int64 __fastcall sub_140345990(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
	unsigned int v8; // r12d
	unsigned __int64 v9; // rsi
	__int64 v10; // rbx
	float* v11; // rdi
	__int64 v12; // rbp
	float v13; // xmm6_4
	float v14; // xmm6_4
	float v15; // xmm6_4
	float* v16; // rbp
	__int64 v17; // rdi
	float v18; // xmm6_4
	float v19; // xmm6_4
	float v20; // xmm6_4
	__int128 v22; // [rsp+20h] [rbp-78h]
	__int128 v23; // [rsp+30h] [rbp-68h]

	if (*(_QWORD*)(a1 + 2528) < a4)
		sub_140115D60((__int64*)(a1 + 2520), a4);
	v8 = 0;
	v9 = 0i64;
	if (a4)
	{
		v10 = 0i64;
		do
		{
			v11 = *(float**)(a3 + 8 * v9);
			v12 = *(_QWORD*)(a1 + 2520);
			v22 = 0i64;
			v13 = v11[4];
			if (!(unsigned int)sub_1407DDB6C(v13))
				v13 = 0.0;
			*(float*)(v10 + v12) = v13;
			v14 = v11[5];
			if (!(unsigned int)sub_1407DDB6C(v14))
				v14 = 0.0;
			*(float*)(v10 + v12 + 4) = v14;
			v15 = -v11[6];
			if (!(unsigned int)sub_1407DDB6C(v15))
				v15 = -*((float*)&v22 + 2);
			*(float*)(v10 + v12 + 8) = v15;
			v16 = *(float**)(a3 + 8 * v9);
			v17 = *(_QWORD*)(a1 + 2520);
			v23 = xmmword_140C77880;
			v18 = *v16;
			if (!(unsigned int)sub_1407DDB6C(*v16))
				v18 = *(float*)&v23;
			*(float*)(v10 + v17 + 12) = v18;
			v19 = v16[1];
			if (!(unsigned int)sub_1407DDB6C(v19))
				v19 = *((float*)&v23 + 1);
			*(float*)(v10 + v17 + 16) = v19;
			v20 = -v16[2];
			if (!(unsigned int)sub_1407DDB6C(v20))
				v20 = -*((float*)&v23 + 2);
			++v9;
			*(float*)(v10 + v17 + 20) = v20;
			v10 += 24i64;
		} while (v9 < a4);
	}
	if ((unsigned int)sub_1408287A0(a2, *(_QWORD*)(a1 + 2520), a4, (unsigned int)(a5 != 0) + 1) != 1)
		return (unsigned int)-2147467259;
	return v8;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C77880: using guessed type __int128 xmmword_140C77880;

