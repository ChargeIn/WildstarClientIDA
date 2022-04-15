#include "../winhttp.h"

//----- (00000001405A3D50) ----------------------------------------------------
float sub_1405A3D50()
{
	__int64 v0; // rax
	float result; // xmm0_4

	if (dword_140DC347C)
		return *(float*)&dword_140DC3478;
	dword_140DC347C = 1;
	v0 = sub_140200220(0x3C4u);
	if (v0)
	{
		result = *(float*)(v0 + 24);
		dword_140DC3478 = LODWORD(result);
	}
	else
	{
		result = 0.0;
		dword_140DC3478 = 0;
	}
	return result;
}
// 140DC3478: using guessed type int dword_140DC3478;
// 140DC347C: using guessed type int dword_140DC347C;

