//----- (0000000140345F60) ----------------------------------------------------
__int64 __fastcall sub_140345F60(__int64 a1, float* a2)
{
	float v2; // xmm6_4
	float v4; // xmm6_4
	float v5; // xmm7_4
	float v6; // xmm7_4
	float v7; // xmm7_4
	float v8; // xmm7_4
	float v9; // xmm7_4
	float v10; // xmm7_4
	float v11; // xmm7_4
	int v12; // eax
	unsigned int v13; // ecx
	__int128 v15; // [rsp+20h] [rbp-60h]
	__int128 v16; // [rsp+20h] [rbp-60h]
	__int128 v17; // [rsp+20h] [rbp-60h]
	float v18; // [rsp+30h] [rbp-50h] BYREF
	float v19; // [rsp+34h] [rbp-4Ch]
	float v20; // [rsp+38h] [rbp-48h]
	float v21; // [rsp+3Ch] [rbp-44h]
	float v22; // [rsp+40h] [rbp-40h]
	float v23; // [rsp+44h] [rbp-3Ch]
	float v24; // [rsp+48h] [rbp-38h]
	float v25; // [rsp+4Ch] [rbp-34h]
	float v26; // [rsp+50h] [rbp-30h]

	v2 = a2[8];
	v15 = 0i64;
	if ((unsigned int)sub_1407DDB6C(v2))
		v24 = v2;
	else
		v24 = 0.0;
	v4 = a2[9];
	if ((unsigned int)sub_1407DDB6C(v4))
		v25 = v4;
	else
		v25 = 0.0;
	v5 = -a2[10];
	if ((unsigned int)sub_1407DDB6C(v5))
		v26 = v5;
	else
		v26 = -*((float*)&v15 + 2);
	v6 = a2[4];
	v16 = xmmword_140C77880;
	if ((unsigned int)sub_1407DDB6C(v6))
		v18 = v6;
	else
		v18 = *(float*)&v16;
	v7 = a2[5];
	if ((unsigned int)sub_1407DDB6C(v7))
		v19 = v7;
	else
		v19 = *((float*)&v16 + 1);
	v8 = -a2[6];
	if ((unsigned int)sub_1407DDB6C(v8))
		v20 = v8;
	else
		v20 = -*((float*)&v16 + 2);
	v9 = *a2;
	v17 = xmmword_140C77870;
	if ((unsigned int)sub_1407DDB6C(*a2))
		v21 = v9;
	else
		v21 = *(float*)&v17;
	v10 = a2[1];
	if ((unsigned int)sub_1407DDB6C(v10))
		v22 = v10;
	else
		v22 = *((float*)&v17 + 1);
	v11 = -a2[2];
	if ((unsigned int)sub_1407DDB6C(v11))
		v23 = v11;
	else
		v23 = -*((float*)&v17 + 2);
	v12 = sub_140828630((__int64)&v18, 0);
	v13 = 0;
	if (v12 != 1)
		return (unsigned int)-2147467259;
	return v13;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;

