//----- (00000001408C8800) ----------------------------------------------------
__int64 __fastcall sub_1408C8800(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	double v5; // xmm0_8
	__int64 v6; // rax
	float v7; // xmm1_4
	float v8; // xmm0_4
	unsigned int v9; // eax

	if (!*(_BYTE*)(a1 + 300))
		return 1i64;
	v4 = *(_QWORD*)(a1 + 328);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)(v4 + 100) * 0.0099999998);
	v6 = *(unsigned int*)(v4 + 92);
	v7 = *(float*)&v5 * *(float*)(&off_1409B0C70)[5 * v6 + 1];
	v8 = *(float*)&v5 * *(float*)(&off_1409B0C70)[5 * v6 + 2];
	if (v7 >= v8)
		v7 = v8;
	v9 = (int)(float)((float)*(int*)(a1 + 292) * (float)(v7 * 0.001));
	if (v9)
		return sub_1408CAA70(a1 + 176, a2, v9);
	else
		return 1i64;
}
// 1409B0C70: using guessed type wchar_t *off_1409B0C70;

