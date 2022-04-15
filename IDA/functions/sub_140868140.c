#include "../winhttp.h"

//----- (0000000140868140) ----------------------------------------------------
__int64 __fastcall sub_140868140(__int64 a1, __int64 a2, int a3)
{
	float v5; // xmm2_4
	float v6; // xmm1_4
	int v7; // edx
	float v8; // xmm2_4
	float v9; // xmm3_4
	float v10; // xmm1_4
	int v11; // ecx
	int v12; // eax
	_QWORD* v13; // r10
	int v14; // eax
	_QWORD* v15; // rax
	_QWORD* v16; // r8
	__int64 v17; // rdx
	bool v18; // zf

	*(_QWORD*)a1 = *(_QWORD*)(a2 + 8);
	*(_BYTE*)(a1 + 72) ^= (*(_BYTE*)(a2 + 32) ^ *(_BYTE*)(a1 + 72)) & 1;
	v5 = *(float*)(a2 + 16);
	v6 = *(float*)(a2 + 20);
	if (*(_BYTE*)(a2 + 32))
	{
		v7 = dword_140C61BFC;
		v8 = v5 * 0.050000001;
		if (v8 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v9 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v9 = 27866352.0;
				v7 = dword_140C61BFC | 1;
				dword_140C61BFC |= 1u;
				dword_140C61BF8 = 1272224376;
			}
			v5 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v8 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v8 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v8 * v9) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v9 = *(float*)&dword_140C61BF8;
			v5 = 0.0;
		}
		v10 = v6 * 0.050000001;
		if (v10 >= -37.0)
		{
			if ((v7 & 1) == 0)
			{
				v9 = 27866352.0;
				dword_140C61BFC = v7 | 1;
				dword_140C61BF8 = 1272224376;
			}
			v6 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v10 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v10 * v9) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v10 * v9) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v6 = 0.0;
		}
	}
	*(float*)(a1 + 8) = v5;
	*(float*)(a1 + 16) = v5;
	*(float*)(a1 + 12) = v6;
	if (*(_BYTE*)(a2 + 33) && v5 >= v6 && (v11 = *(_DWORD*)(a2 + 28), ((v11 - 3) & 0xFFFFFFFD) != 0))
		v12 = 8 - v11;
	else
		v12 = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 64) = v12;
	v13 = 0i64;
	*(float*)(a1 + 20) = (float)a3;
	v14 = (dword_140C110B8 + *(_DWORD*)(a2 + 24) - 1) / dword_140C110B8;
	*(_DWORD*)(a1 + 28) = 0;
	*(float*)(a1 + 24) = (float)v14;
	v15 = *(_QWORD**)(a1 + 40);
	v16 = *(_QWORD**)(a1 + 48);
	v17 = *(_QWORD*)a2;
	v18 = v15 == v16;
	if (v15 != v16)
	{
		do
		{
			if (*v15 == v17)
				break;
			++v15;
		} while (v15 != v16);
		v18 = v15 == v16;
	}
	if (!v18)
		v13 = v15;
	if (!v13)
	{
		if (!sub_14084CA80(a1 + 40, v17))
			return 2i64;
		++* (_BYTE*)(a1 + 73);
	}
	return 1i64;
}
// 140C110B8: using guessed type int dword_140C110B8;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

