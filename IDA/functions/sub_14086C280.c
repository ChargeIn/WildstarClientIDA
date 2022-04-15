#include "../winhttp.h"

//----- (000000014086C280) ----------------------------------------------------
__int64 __fastcall sub_14086C280(__int16* a1)
{
	int v1; // eax
	__int16 v3; // di

	v1 = 0;
	v3 = a1[2] - a1[1];
	if (v3)
		v1 = (int)((double)(int)sub_1407DDB28() * 0.00003051850947599719 * (double)v3 + 0.5);
	LOWORD(v1) = a1[1] + v1;
	return (unsigned int)(*a1 + v1);
}

