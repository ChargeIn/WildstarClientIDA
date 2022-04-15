//----- (00000001408A5270) ----------------------------------------------------
__int64 __fastcall sub_1408A5270(__int64 a1, int a2, float* a3)
{
	float v3; // xmm7_4
	float v7; // xmm6_4
	double v8; // xmm0_8
	double v9; // xmm0_8
	int v11; // [rsp+70h] [rbp+18h] BYREF
	float v12; // [rsp+78h] [rbp+20h] BYREF

	v3 = a3[2];
	if (v3 == 0.0)
	{
		sub_1408A5980(0, 0.0, 0, &v12, (float*)&v11);
	}
	else
	{
		v7 = (float)a2 * 0.5;
		HIDWORD(v8) = 0;
		*(float*)&v8 = v7 / a3[1];
		v9 = sub_1408FE170(v8);
		*(float*)&v9 = *(float*)&v9 * v3;
		*(_QWORD*)&v9 ^= 0x8000000080000000ui64;
		*(float*)&v9 = sub_1408FC7F0(v9) * v7;
		sub_1408A5980(1, v9, a2, &v12, (float*)&v11);
	}
	return sub_1408A5350(a1, a2, a3, v12, v11);
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

