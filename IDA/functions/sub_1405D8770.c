#include "../winhttp.h"

//----- (00000001405D8770) ----------------------------------------------------
__int64 __fastcall sub_1405D8770(__int64 a1)
{
	__int64 v2; // rax
	float v3; // xmm2_4
	int v4; // edi
	float v5; // xmm10_4
	__int64 v6; // xmm9_8
	int v7; // eax
	__int64 v8; // rax
	int v9; // xmm0_4
	__int64 v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rax
	int v13; // xmm0_4
	__int64 v14; // rax
	int v15; // xmm0_4
	int v16; // ebx
	__int64 v17; // rax
	int v18; // ecx
	__int64 v19; // rax
	float v20; // xmm0_4
	float v21; // xmm7_4
	float v22; // xmm7_4
	double v23; // xmm0_8

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v3 = 1.0;
	if (v2 && (*(_BYTE*)(a1 + 340) & 2) == 0)
	{
		v4 = *(_DWORD*)(v2 + 60);
		if (!v4)
			v4 = *(_DWORD*)(v2 + 56);
		v5 = *(float*)(v2 + 2796);
		v6 = *(unsigned int*)(v2 + 1988);
		v7 = dword_140DC34F8;
		if ((dword_140DC34F8 & 1) == 0)
		{
			dword_140DC34F8 |= 1u;
			v8 = sub_140200220(0x4FAu);
			if (v8)
				v9 = *(_DWORD*)(v8 + 24);
			else
				v9 = 1056964608;
			v7 = dword_140DC34F8;
			dword_140DC34FC = v9;
		}
		if ((v7 & 2) == 0)
		{
			dword_140DC34F8 = v7 | 2;
			v10 = sub_140200220(0x4FAu);
			if (v10)
				v11 = *(_DWORD*)(v10 + 28);
			else
				v11 = 1056964608;
			v7 = dword_140DC34F8;
			dword_140DC3500 = v11;
		}
		if ((v7 & 4) == 0)
		{
			dword_140DC34F8 = v7 | 4;
			v12 = sub_140200220(0x4FAu);
			if (v12)
				v13 = *(_DWORD*)(v12 + 32);
			else
				v13 = 1056964608;
			v7 = dword_140DC34F8;
			dword_140DC3504 = v13;
		}
		if ((v7 & 8) == 0)
		{
			dword_140DC34F8 = v7 | 8;
			v14 = sub_140200220(0x4FAu);
			if (v14)
				v15 = *(_DWORD*)(v14 + 36);
			else
				v15 = 1056964608;
			v7 = dword_140DC34F8;
			dword_140DC3508 = v15;
		}
		v16 = 1;
		if ((v7 & 0x10) != 0)
		{
			v18 = dword_140DC350C;
		}
		else
		{
			dword_140DC34F8 = v7 | 0x10;
			v17 = sub_140200220(0x4FAu);
			if (v17)
			{
				v18 = *(_DWORD*)(v17 + 4);
				v7 = dword_140DC34F8;
				dword_140DC350C = v18;
			}
			else
			{
				v7 = dword_140DC34F8;
				v18 = 1;
				dword_140DC350C = 1;
			}
		}
		if ((v7 & 0x20) != 0)
		{
			v16 = dword_140DC3510;
		}
		else
		{
			dword_140DC34F8 = v7 | 0x20;
			v19 = sub_140200220(0x4FAu);
			if (v19)
				v16 = *(_DWORD*)(v19 + 8);
			v18 = dword_140DC350C;
			dword_140DC3510 = v16;
		}
		v20 = (float)v18;
		v21 = (float)(*(float*)&dword_140DC34FC / (float)v4) * *(float*)&dword_140DC3500;
		if (*(float*)&v6 >= *(float*)&dword_140DC3504)
		{
			*(float*)&v6 = *(float*)&v6 - (float)((float)(*(float*)&dword_140DC3504 - v20) / v21);
			HIDWORD(v23) = HIDWORD(v6);
			*(float*)&v23 = (float)(*(float*)&v6 / (float)(*(float*)&dword_140DC3508 + *(float*)&v6))
				* (float)(*(float*)&dword_140C4A728 * 0.5);
			v22 = (float)(sub_1408FC950(v23) * (float)(*(float*)&v6 * v21)) + *(float*)&dword_140DC3504;
		}
		else
		{
			v22 = (float)(v21 * *(float*)&v6) + v20;
		}
		if (v22 > (float)v16)
			v22 = (float)v16;
		v3 = fmaxf(0.0, fminf(v5 - (float)(v22 * 0.0099999998), 2.0));
	}
	return (unsigned int)(int)(float)((float)((float)*(int*)(*(_QWORD*)(a1 + 176) + 56i64) * v3) + 0.5);
}
// 140C4A728: using guessed type int dword_140C4A728;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC34F8: using guessed type int dword_140DC34F8;
// 140DC34FC: using guessed type int dword_140DC34FC;
// 140DC3500: using guessed type int dword_140DC3500;
// 140DC3504: using guessed type int dword_140DC3504;
// 140DC3508: using guessed type int dword_140DC3508;
// 140DC350C: using guessed type int dword_140DC350C;
// 140DC3510: using guessed type int dword_140DC3510;

