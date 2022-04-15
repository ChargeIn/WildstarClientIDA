#include "../winhttp.h"

//----- (0000000140662190) ----------------------------------------------------
float sub_140662190()
{
	__int64 v0; // rax
	float result; // xmm0_4

	if (dword_140DC4AD4)
		return *(float*)&dword_140DC4AD0;
	dword_140DC4AD4 = 1;
	v0 = sub_140200220(0x525u);
	if (v0)
	{
		result = *(float*)(v0 + 24);
		dword_140DC4AD0 = LODWORD(result);
	}
	else
	{
		result = 0.0;
		dword_140DC4AD0 = 0;
	}
	return result;
}
// 140DC4AD0: using guessed type int dword_140DC4AD0;
// 140DC4AD4: using guessed type int dword_140DC4AD4;

