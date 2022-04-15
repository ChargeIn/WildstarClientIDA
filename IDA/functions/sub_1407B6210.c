//----- (00000001407B6210) ----------------------------------------------------
__int64 __fastcall sub_1407B6210(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm1_4
	float v6; // xmm0_4
	float v7; // xmm1_4
	float v8; // xmm0_4
	float v9; // xmm1_4

	v3 = *(float*)(a3 + 16 * a1 + 8);
	v4 = *(float*)(a3 + 16 * a2 + 8);
	if (v3 < v4)
		return 0xFFFFFFFFi64;
	if (v3 > v4)
		return 1i64;
	v6 = *(float*)(a3 + 16 * a1);
	v7 = *(float*)(a3 + 16 * a2);
	if (v6 < v7)
		return 0xFFFFFFFFi64;
	if (v6 > v7)
		return 1i64;
	v8 = *(float*)(a3 + 16 * a1 + 4);
	v9 = *(float*)(a3 + 16 * a2 + 4);
	if (v8 < v9)
		return 0xFFFFFFFFi64;
	if (v8 > v9)
		return 1i64;
	if (a1 < a2)
		return 0xFFFFFFFFi64;
	return a1 > a2;
}

