#include "../winhttp.h"

//----- (0000000140466260) ----------------------------------------------------
__int64 __fastcall sub_140466260(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rax
	int v4; // xmm0_4
	__int64 v5; // rax
	int v6; // eax
	float v7; // xmm4_4

	v1 = dword_140DC2EBC;
	if ((dword_140DC2EBC & 1) == 0)
	{
		dword_140DC2EBC |= 1u;
		v3 = sub_140200220(0x4FAu);
		if (v3)
			v4 = *(_DWORD*)(v3 + 32);
		else
			v4 = 1056964608;
		v1 = dword_140DC2EBC;
		dword_140DC2EC0 = v4;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2EBC = v1 | 2;
		v5 = sub_140200220(0x4FAu);
		if (v5)
			v6 = *(_DWORD*)(v5 + 8);
		else
			v6 = 1;
		dword_140DC2EC4 = v6;
	}
	v7 = sub_140466000(a1);
	if (v7 > (float)(1.0 - (float)((float)dword_140DC2EC4 * 0.0099999998)))
		return (float)(1.0 - (float)(*(float*)&dword_140DC2EC0 * 0.0099999998)) >= v7;
	else
		return 2i64;
}
// 140DC2EBC: using guessed type int dword_140DC2EBC;
// 140DC2EC0: using guessed type int dword_140DC2EC0;
// 140DC2EC4: using guessed type int dword_140DC2EC4;

