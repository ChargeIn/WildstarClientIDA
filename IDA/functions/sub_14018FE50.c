//----- (000000014018FE50) ----------------------------------------------------
__int64 __fastcall sub_14018FE50(
	_BYTE* a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	__int64 a8,
	__int64 a9)
{
	unsigned __int64 v10; // rdx
	float v11; // xmm1_4
	unsigned __int64 v12; // r8
	float v13; // xmm1_4
	float v14; // xmm2_4

	v10 = a3;
	v11 = (float)(int)a3;
	if (a3 < 0)
		v11 = v11 + 1.8446744e19;
	v12 = 0i64;
	if ((unsigned __int64)a3 >= 0x19000)
	{
		do
		{
			++v12;
			v13 = (float)(int)v10;
			if ((v10 & 0x8000000000000000ui64) != 0i64)
				v13 = v13 + 1.8446744e19;
			v10 >>= 10;
			v11 = v13 * (float)(1.0 / (float)1024);
		} while (v10 >= 0x19000);
		if (v12 >= 9)
			v12 = 8i64;
	}
	if ((unsigned __int64)a3 < 0x400)
		return sub_14001B370(a1, 32i64, L"%.0f%s", v11, off_140B5E4D0[v12], a6, a7, a8, a9);
	if (v10 > 0x2800)
		return sub_14001B370(a1, 32i64, L"%.0f%s", v11, off_140B5E4D0[v12], a6, a7, a8, a9);
	v14 = v11 - (float)(int)v11;
	if (v14 < 0.0099999998)
		return sub_14001B370(a1, 32i64, L"%.0f%s", v11, off_140B5E4D0[v12], a6, a7, a8, a9);
	if (v10 > 0x400 || v14 < 0.1)
		return sub_14001B370(a1, 32i64, L"%.1f%s", v11, off_140B5E4D0[v12], a6, a7, a8, a9);
	return sub_14001B370(a1, 32i64, L"%.2f%s", v11, off_140B5E4D0[v12], a6, a7, a8, a9);
}
// 140A409F0: using guessed type wchar_t a1fS[7];
// 140A40A00: using guessed type wchar_t a0fS[7];
// 140A40A10: using guessed type wchar_t a2fS[7];
// 140B5E4D0: using guessed type wchar_t *off_140B5E4D0[9];

