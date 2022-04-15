#include "../winhttp.h"

//----- (00000001408640C0) ----------------------------------------------------
__int64 __fastcall sub_1408640C0(int a1)
{
	float v1; // xmm2_4
	unsigned int v2; // ecx
	__int64 result; // rax

	v1 = (float)a1;
	dword_140C110B4 = a1;
	v2 = a1 << 7;
	dword_140C110B8 = (int)(float)(1024.0 / (float)(v1 * 0.001));
	dword_140C110BC = (int)(float)((float)(1024000.0 / v1) * 0.5);
	result = 91625969 * v2;
	dword_140C110C0 = v2 / 0xBB80;
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C110B8: using guessed type int dword_140C110B8;
// 140C110BC: using guessed type int dword_140C110BC;
// 140C110C0: using guessed type int dword_140C110C0;

