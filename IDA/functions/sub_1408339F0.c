//----- (00000001408339F0) ----------------------------------------------------
void __fastcall sub_1408339F0(float a1)
{
	__int64 v1; // rcx
	float v2; // xmm1_4
	__int64 v3; // rdx
	float v4; // xmm1_4
	float v5; // xmm0_4

	v1 = qword_140C61CC0;
	if (qword_140C61CC0)
	{
		v2 = a1 + *(float*)(qword_140C61CC0 + 788);
		v3 = qword_140C61CC0;
		*(float*)(qword_140C61CC0 + 788) = v2;
		v4 = v2 * 0.050000001;
		if (v4 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v5 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v5 = 27866352.0;
				dword_140C61BF8 = 1272224376;
				dword_140C61BFC |= 1u;
			}
			*(float*)(v3 + 780) = (float)((float)((float)((float)(COERCE_FLOAT(
				((int)(float)((float)(v5 * v4) + 1065353200.0) & 0x7FFFFF)
				+ 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v5 * v4) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v5 * v4) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			*(_DWORD*)(v1 + 780) = 0;
		}
	}
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 140C61CC0: using guessed type __int64 qword_140C61CC0;

