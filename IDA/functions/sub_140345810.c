#include "../winhttp.h"

//----- (0000000140345810) ----------------------------------------------------
__int64 __fastcall sub_140345810(__int64 a1, __int64 a2, float* a3)
{
	float v3; // xmm6_4
	float v6; // xmm6_4
	float v7; // xmm6_4
	float v8; // xmm6_4
	float v9; // xmm6_4
	float v10; // xmm6_4
	int v11; // eax
	unsigned int v12; // ecx
	__int128 v14; // [rsp+20h] [rbp-58h]
	__int128 v15; // [rsp+20h] [rbp-58h]
	float v16; // [rsp+30h] [rbp-48h] BYREF
	float v17; // [rsp+34h] [rbp-44h]
	float v18; // [rsp+38h] [rbp-40h]
	float v19; // [rsp+3Ch] [rbp-3Ch]
	float v20; // [rsp+40h] [rbp-38h]
	float v21; // [rsp+44h] [rbp-34h]

	v3 = a3[4];
	v14 = 0i64;
	if ((unsigned int)sub_1407DDB6C(v3))
		v16 = v3;
	else
		v16 = 0.0;
	v6 = a3[5];
	if ((unsigned int)sub_1407DDB6C(v6))
		v17 = v6;
	else
		v17 = 0.0;
	v7 = -a3[6];
	if ((unsigned int)sub_1407DDB6C(v7))
		v18 = v7;
	else
		v18 = -*((float*)&v14 + 2);
	v8 = *a3;
	v15 = xmmword_140C77880;
	if ((unsigned int)sub_1407DDB6C(*a3))
		v19 = v8;
	else
		v19 = *(float*)&v15;
	v9 = a3[1];
	if ((unsigned int)sub_1407DDB6C(v9))
		v20 = v9;
	else
		v20 = *((float*)&v15 + 1);
	v10 = -a3[2];
	if ((unsigned int)sub_1407DDB6C(v10))
		v21 = v10;
	else
		v21 = -*((float*)&v15 + 2);
	v11 = sub_140828930(a2, (__int64)&v16);
	v12 = 0;
	if (v11 != 1)
		return (unsigned int)-2147467259;
	return v12;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C77880: using guessed type __int128 xmmword_140C77880;

