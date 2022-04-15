#include "../winhttp.h"

//----- (000000014085E450) ----------------------------------------------------
__int64 __fastcall sub_14085E450(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	int v4; // edx
	unsigned int v6; // r8d
	float v7; // xmm2_4
	float v8; // xmm3_4
	unsigned int i; // r11d
	int v10; // ebx
	float v11; // xmm1_4
	float v12; // xmm1_4
	int v13; // eax
	int v14; // ecx
	__int64 result; // rax
	float v16; // xmm1_4
	__int64 v17; // rcx
	float v18; // xmm3_4
	unsigned int v19; // ebx
	__int64 v20; // r9
	int v21; // ecx
	float v22; // xmm1_4
	float v23; // xmm1_4
	int v24; // eax
	int v25; // ecx

	v2 = *(_QWORD*)(a1 + 176) + 24i64;
	v4 = dword_140C61BFC;
	v6 = 0;
	v7 = *(float*)&dword_140C61BF8;
	if (*(_BYTE*)(a1 + 280))
	{
		v8 = *(float*)&dword_140C10F58;
		for (i = 0; i < 4; ++i)
		{
			v10 = *(_DWORD*)v2;
			if (!*(_DWORD*)v2)
				break;
			v11 = *(float*)(a1 + 276) * 0.050000001;
			if (v11 >= -37.0)
			{
				if ((v4 & 1) == 0)
				{
					v7 = 27866352.0;
					v4 |= 1u;
					dword_140C61BFC = v4;
					dword_140C61BF8 = 1272224376;
				}
				v13 = (int)(float)((float)(v7 * v11) + 1065353200.0);
				v14 = v13 & 0x7FFFFF;
				result = v13 & 0xFF800000;
				v12 = (float)((float)((float)((float)(COERCE_FLOAT(v14 + 1065353216) * 0.32518977) + 0.020805772)
					* COERCE_FLOAT(v14 + 1065353216))
					+ 0.65304345)
					* *(float*)&result;
			}
			else
			{
				v12 = 0.0;
			}
			v16 = v12 * *(float*)(v2 + 4);
			if (v16 > v8)
			{
				result = v6++;
				v17 = 3 * result;
				*(float*)(a2 + 4 * v17 + 4) = v16;
				*(_DWORD*)(a2 + 4 * v17) = v10;
				*(_DWORD*)(a2 + 4 * v17 + 8) = 0;
			}
			v2 += 8i64;
		}
	}
	v18 = *(float*)&dword_140C10F5C;
	v19 = 0;
	v20 = a1 + 244;
	while (v6 < 8)
	{
		v21 = *(_DWORD*)(v20 + 16);
		if (v21 && *(float*)v20 > v18)
		{
			result = v6;
			v22 = *(float*)v20 * 0.050000001;
			*(_DWORD*)(a2 + 12i64 * v6) = v21;
			if (v22 >= -37.0)
			{
				if ((v4 & 1) == 0)
				{
					v7 = 27866352.0;
					v4 |= 1u;
					dword_140C61BFC = v4;
					dword_140C61BF8 = 1272224376;
				}
				v24 = (int)(float)((float)(v7 * v22) + 1065353200.0);
				v25 = v24 & 0x7FFFFF;
				result = v24 & 0xFF800000;
				v23 = (float)((float)((float)((float)(COERCE_FLOAT(v25 + 1065353216) * 0.32518977) + 0.020805772)
					* COERCE_FLOAT(v25 + 1065353216))
					+ 0.65304345)
					* *(float*)&result;
			}
			else
			{
				v23 = 0.0;
			}
			*(float*)(a2 + 12i64 * v6 + 4) = v23;
			*(_DWORD*)(a2 + 12i64 * v6++ + 8) = 1;
		}
		++v19;
		v20 += 4i64;
		if (v19 >= 4)
		{
			if (v6 < 8)
			{
				result = v6;
				*(_DWORD*)(a2 + 12i64 * v6) = 0;
			}
			return result;
		}
	}
	return result;
}
// 140C10F58: using guessed type int dword_140C10F58;
// 140C10F5C: using guessed type int dword_140C10F5C;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

