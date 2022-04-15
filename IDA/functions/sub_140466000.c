#include "../winhttp.h"

//----- (0000000140466000) ----------------------------------------------------
float __fastcall sub_140466000(__int64 a1)
{
	int v1; // eax
	float v3; // xmm9_4
	__int64 v4; // xmm8_8
	__int64 v5; // rax
	int v6; // xmm0_4
	__int64 v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // xmm0_4
	int v13; // ebx
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rax
	int v17; // eax
	float v18; // xmm6_4
	float v19; // xmm0_4
	float v20; // xmm6_4
	double v21; // xmm0_8

	v1 = dword_140DC2EA0;
	v3 = *(float*)(a1 + 2796);
	v4 = *(unsigned int*)(a1 + 1988);
	if ((dword_140DC2EA0 & 1) == 0)
	{
		dword_140DC2EA0 |= 1u;
		v5 = sub_140200220(0x4FAu);
		if (v5)
			v6 = *(_DWORD*)(v5 + 24);
		else
			v6 = 1056964608;
		v1 = dword_140DC2EA0;
		dword_140DC2EA4 = v6;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2EA0 = v1 | 2;
		v7 = sub_140200220(0x4FAu);
		if (v7)
			v8 = *(_DWORD*)(v7 + 28);
		else
			v8 = 1056964608;
		v1 = dword_140DC2EA0;
		dword_140DC2EA8 = v8;
	}
	if ((v1 & 4) == 0)
	{
		dword_140DC2EA0 = v1 | 4;
		v9 = sub_140200220(0x4FAu);
		if (v9)
			v10 = *(_DWORD*)(v9 + 32);
		else
			v10 = 1056964608;
		v1 = dword_140DC2EA0;
		dword_140DC2EAC = v10;
	}
	if ((v1 & 8) == 0)
	{
		dword_140DC2EA0 = v1 | 8;
		v11 = sub_140200220(0x4FAu);
		if (v11)
			v12 = *(_DWORD*)(v11 + 36);
		else
			v12 = 1056964608;
		v1 = dword_140DC2EA0;
		dword_140DC2EB0 = v12;
	}
	v13 = 1;
	if ((v1 & 0x10) == 0)
	{
		dword_140DC2EA0 = v1 | 0x10;
		v14 = sub_140200220(0x4FAu);
		if (v14)
			v15 = *(_DWORD*)(v14 + 4);
		else
			v15 = 1;
		dword_140DC2EB4 = v15;
		v1 = dword_140DC2EA0;
	}
	if ((v1 & 0x20) != 0)
	{
		v13 = dword_140DC2EB8;
	}
	else
	{
		dword_140DC2EA0 = v1 | 0x20;
		v16 = sub_140200220(0x4FAu);
		if (v16)
			v13 = *(_DWORD*)(v16 + 8);
		dword_140DC2EB8 = v13;
	}
	v17 = *(_DWORD*)(a1 + 60);
	if (!v17)
		v17 = *(_DWORD*)(a1 + 56);
	v18 = (float)(*(float*)&dword_140DC2EA4 / (float)v17) * *(float*)&dword_140DC2EA8;
	v19 = (float)(*(float*)&dword_140DC2EAC - (float)dword_140DC2EB4) / v18;
	if (*(float*)&v4 >= v19)
	{
		*(float*)&v4 = *(float*)&v4 - v19;
		HIDWORD(v21) = HIDWORD(v4);
		*(float*)&v21 = (float)(*(float*)&v4 / (float)(*(float*)&dword_140DC2EB0 + *(float*)&v4))
			* (float)(*(float*)&dword_140C45858 * 0.5);
		v20 = (float)(sub_1408FC950(v21) * (float)(*(float*)&v4 * v18)) + *(float*)&dword_140DC2EAC;
	}
	else
	{
		v20 = (float)(v18 * *(float*)&v4) + (float)dword_140DC2EB4;
	}
	if (v20 > (float)v13)
		v20 = (float)v13;
	return fmaxf(0.0, fminf(v3 - (float)(v20 * 0.0099999998), 2.0));
}
// 140C45858: using guessed type int dword_140C45858;
// 140DC2EA0: using guessed type int dword_140DC2EA0;
// 140DC2EA4: using guessed type int dword_140DC2EA4;
// 140DC2EA8: using guessed type int dword_140DC2EA8;
// 140DC2EAC: using guessed type int dword_140DC2EAC;
// 140DC2EB0: using guessed type int dword_140DC2EB0;
// 140DC2EB4: using guessed type int dword_140DC2EB4;
// 140DC2EB8: using guessed type int dword_140DC2EB8;

