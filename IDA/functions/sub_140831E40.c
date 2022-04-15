#include "../winhttp.h"

//----- (0000000140831E40) ----------------------------------------------------
unsigned int* __fastcall sub_140831E40(__int64 a1)
{
	__int64 v1; // rsi
	float v3; // xmm9_4
	bool v4; // al
	float v5; // xmm8_4
	float v6; // xmm1_4
	float v7; // xmm7_4
	float v8; // xmm0_4
	float v9; // xmm1_4
	unsigned __int8* v10; // r8
	unsigned int v11; // r9d
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rdx
	unsigned int* v15; // rax
	char v16; // cl
	bool v17; // di
	float v18; // xmm2_4
	float v19; // xmm0_4
	float v20; // xmm2_4
	float v21; // xmm6_4
	float v22; // xmm1_4
	int v23; // eax
	float v24; // xmm1_4
	int v25; // eax
	unsigned int* result; // rax
	unsigned int v27; // [rsp+70h] [rbp+8h] BYREF
	unsigned int v28; // [rsp+78h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(a1 + 1088);
	v27 = *(unsigned int*)(a1 + 1120);
	v28 = (v27 & 0x7FFFFF) + 1065353216;
	v3 = (float)((float)((float)((float)((float)((float)((float)((float)(*(float*)&v28 - 1.0)
		/ (float)(*(float*)&v28 + 1.0))
		* (float)((float)(*(float*)&v28 - 1.0)
			/ (float)(*(float*)&v28 + 1.0)))
		* 0.33333334)
		+ 1.0)
		* (float)((float)((float)(*(float*)&v28 - 1.0) / (float)(*(float*)&v28 + 1.0)) * 2.0))
		+ (float)((float)((float)(unsigned __int8)(v27 >> 23) - 127.0) * 0.69314718))
		* 0.43429449)
		* 20.0;
	*(float*)(a1 + 1152) = v3;
	v4 = sub_140832C30(v1, (int*)&v27, (int*)&v28);
	v5 = *(float*)&v27;
	if (v4)
	{
		*(float*)(a1 + 1156) = *(float*)&v27;
		v6 = 1.0 - (float)(1.0 / *(float*)&v28);
		*(float*)(a1 + 1160) = v6;
	}
	else
	{
		v6 = *(float*)(a1 + 1160);
	}
	v7 = 0.0;
	v8 = (float)(*(float*)(a1 + 1136) - v3) - v5;
	if (v8 > 0.0)
	{
		v8 = (float)(v8 * v6) + v5;
		v5 = v8;
	}
	if ((*(_QWORD*)(v1 + 96) & 0x200000000i64) != 0)
	{
		sub_140836340(qword_140C61BB0, v1, 33, 0i64);
		v9 = v8;
	}
	else
	{
		v10 = *(unsigned __int8**)(v1 + 80);
		v27 = dword_140C11070;
		if (v10)
		{
			v11 = *v10;
			v12 = 0i64;
			while (1)
			{
				v13 = (unsigned int)(v12 + 1);
				if (v10[v13] == 28)
					break;
				v12 = (unsigned int)v13;
				if ((unsigned int)v13 >= v11)
					goto LABEL_12;
			}
			v14 = (__int64)&v10[4 * v12 + ((v11 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_12:
			v14 = 0i64;
		}
		v15 = &v27;
		if (v14)
			v15 = (unsigned int*)v14;
		v27 = *v15;
		v9 = *(float*)&v27;
	}
	v16 = *(_BYTE*)(v1 + 328);
	*(_BYTE*)(v1 + 328) = v16 & 0xDF;
	v17 = (v16 & 0x10) != 0;
	if ((v16 & 0x20) != 0)
	{
		if (v9 <= 0.0)
			*(_DWORD*)(a1 + 1148) = 0;
		else
			*(float*)(a1 + 1148) = sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(-1024.0 / (float)(v9 * 48000.0))));
	}
	v18 = *(float*)(a1 + 1148);
	if (v17)
	{
		v19 = *(float*)(a1 + 1140);
		if (v5 < v19)
		{
			v21 = (float)((float)(1.0 - v18) * v5) + (float)(v19 * v18);
			*(float*)(a1 + 1140) = v21;
			if ((float)(v21 - v5) >= 0.5)
				*(_BYTE*)(a1 + 1124) |= 1u;
			v20 = *(float*)(a1 + 1140);
		}
		else
		{
			*(float*)(a1 + 1140) = v5;
			v20 = v5;
		}
	}
	else
	{
		if ((float)(v5 * 0.050000001) >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v22 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v22 = 27866352.0;
				dword_140C61BF8 = 1272224376;
				dword_140C61BFC |= 1u;
			}
			v23 = (int)(float)((float)((float)(v5 * 0.050000001) * v22) + 1065353200.0);
			v27 = (v23 & 0x7FFFFF) + 1065353216;
			v28 = v23 & 0xFF800000;
			v7 = (float)((float)((float)((float)(*(float*)&v27 * 0.32518977) + 0.020805772) * *(float*)&v27) + 0.65304345)
				* COERCE_FLOAT(v23 & 0xFF800000);
		}
		v24 = *(float*)(a1 + 1140);
		if (v7 < v24)
		{
			*(float*)&v27 = (float)((float)(1.0 - v18) * v7) + (float)(v24 * v18);
			*(float*)(a1 + 1140) = *(float*)&v27;
			v25 = v27 & 0x7FFFFF;
			*(float*)&v27 = (float)((float)(1.0 - v18) * v7) + (float)(v24 * v18);
			v28 = v25 + 1065353216;
			v20 = (float)((float)((float)((float)((float)((float)((float)((float)(*(float*)&v28 - 1.0)
				/ (float)(*(float*)&v28 + 1.0))
				* (float)((float)(*(float*)&v28 - 1.0)
					/ (float)(*(float*)&v28 + 1.0)))
				* 0.33333334)
				+ 1.0)
				* (float)((float)((float)(*(float*)&v28 - 1.0) / (float)(*(float*)&v28 + 1.0)) * 2.0))
				+ (float)((float)((float)(unsigned __int8)(v27 >> 23) - 127.0) * 0.69314718))
				* 0.43429449)
				* 20.0;
			if ((float)(v20 - v5) >= 0.5)
				*(_BYTE*)(a1 + 1124) |= 1u;
		}
		else
		{
			*(float*)(a1 + 1140) = v7;
			v20 = v5;
		}
	}
	*(float*)(a1 + 1144) = v20 + v3;
	result = sub_14085B160(v1, v20);
	*(_DWORD*)(a1 + 1136) = -981467136;
	return result;
}
// 140C11070: using guessed type int dword_140C11070;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

