#include "../winhttp.h"

//----- (0000000140703C60) ----------------------------------------------------
__int64 __fastcall sub_140703C60(__int64 a1)
{
	__int64 v2; // rax
	int v3; // ecx
	__int64 v4; // rax

	if ((dword_140DC4C3C & 1) != 0)
	{
		v3 = dword_140DC4C40;
	}
	else
	{
		dword_140DC4C3C |= 1u;
		v2 = sub_140200220(0x3DEu);
		if (v2)
		{
			v3 = *(_DWORD*)(v2 + 4);
			dword_140DC4C40 = v3;
		}
		else
		{
			v3 = 5000;
			dword_140DC4C40 = 5000;
		}
	}
	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (float)((float)v3 * 0.001);
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140DC4C3C: using guessed type int dword_140DC4C3C;
// 140DC4C40: using guessed type int dword_140DC4C40;

