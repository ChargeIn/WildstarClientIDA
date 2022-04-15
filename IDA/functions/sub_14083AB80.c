#include "../winhttp.h"

//----- (000000014083AB80) ----------------------------------------------------
__int64 __fastcall sub_14083AB80(__int64 a1, __int64* a2, __int64 a3, float a4, int a5, int a6, int a7)
{
	__int64 v8; // rdx
	int v9; // r10d
	char v10; // al
	float v11; // xmm0_4
	float v12; // xmm1_4
	float v13; // xmm0_4
	float v14; // xmm2_4
	float v15; // xmm2_4
	float v16; // xmm3_4
	float v17; // xmm3_4
	float v18; // xmm3_4
	float v19; // xmm0_4
	int v20; // eax
	int SpinCount; // r8d
	__int64 result; // rax
	float v23; // xmm0_4

	v8 = *a2;
	v9 = a3;
	v10 = *((_BYTE*)a2 + 72);
	*a2 = a3;
	if ((v10 & 1) != 0)
	{
		if ((v10 & 2) != 0)
		{
			v11 = *((float*)a2 + 4);
			v12 = 0.0;
			*((float*)a2 + 2) = v11;
			v13 = v11 * 0.050000001;
			if (v13 >= -37.0)
			{
				if ((dword_140C61BFC & 1) != 0)
				{
					v15 = *(float*)&dword_140C61BF8;
				}
				else
				{
					v15 = 27866352.0;
					dword_140C61BFC |= 1u;
					dword_140C61BF8 = 1272224376;
				}
				v14 = (float)((float)((float)((float)(COERCE_FLOAT(
					((int)(float)((float)(v15 * v13) + 1065353200.0) & 0x7FFFFF)
					+ 1065353216)
					* 0.32518977)
					+ 0.020805772)
					* COERCE_FLOAT(((int)(float)((float)(v15 * v13) + 1065353200.0) & 0x7FFFFF) + 1065353216))
					+ 0.65304345)
					* COERCE_FLOAT((int)(float)((float)(v15 * v13) + 1065353200.0) & 0xFF800000);
			}
			else
			{
				v14 = 0.0;
			}
			v16 = a4 * 0.050000001;
			*((float*)a2 + 2) = v14;
			if (v16 < -37.0)
				goto LABEL_20;
			if ((dword_140C61BFC & 1) != 0)
			{
				v17 = v16 * *(float*)&dword_140C61BF8;
			}
			else
			{
				dword_140C61BF8 = 1272224376;
				v17 = v16 * 27866352.0;
				dword_140C61BFC |= 1u;
			}
		}
		else
		{
			v18 = a4 * 0.050000001;
			if (v18 < -37.0)
			{
				v12 = 0.0;
			LABEL_20:
				if (a7 == 2)
					v12 = v12 * *((float*)a2 + 3);
				*((float*)a2 + 3) = v12;
				goto LABEL_28;
			}
			if ((dword_140C61BFC & 1) != 0)
			{
				v19 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v19 = 27866352.0;
				dword_140C61BF8 = 1272224376;
				dword_140C61BFC |= 1u;
			}
			v17 = v18 * v19;
		}
		v12 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)(v17 + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)(v17 + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)(v17 + 1065353200.0) & 0xFF800000);
		goto LABEL_20;
	}
	if ((v10 & 2) != 0)
		*((_DWORD*)a2 + 2) = *((_DWORD*)a2 + 4);
	if (a7 == 2)
		a4 = a4 + *((float*)a2 + 3);
	*((float*)a2 + 3) = a4;
LABEL_28:
	if (*((float*)a2 + 3) <= *((float*)a2 + 2) && ((a6 - 3) & 0xFFFFFFFD) != 0)
		v20 = 8 - a6;
	else
		v20 = a6;
	*((_DWORD*)a2 + 16) = v20;
	SpinCount = qword_140C61B68[4].SpinCount;
	if (v8 == *a2 && (v9 & 0xF000000) != 0)
	{
		result = (unsigned int)((dword_140C110B8 + a5 - 1) / dword_140C110B8);
		v23 = (float)((dword_140C110B8 + a5 - 1) / dword_140C110B8);
		if (v23 >= (float)(*((float*)a2 + 6) - (float)((float)SpinCount - *((float*)a2 + 5))))
			v23 = *((float*)a2 + 6) - (float)((float)SpinCount - *((float*)a2 + 5));
	}
	else
	{
		result = (unsigned int)((dword_140C110B8 + a5 - 1) / dword_140C110B8);
		v23 = (float)((dword_140C110B8 + a5 - 1) / dword_140C110B8);
	}
	*((float*)a2 + 6) = v23;
	*((_DWORD*)a2 + 8) = SpinCount;
	*((float*)a2 + 5) = (float)SpinCount;
	return result;
}
// 140C110B8: using guessed type int dword_140C110B8;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

