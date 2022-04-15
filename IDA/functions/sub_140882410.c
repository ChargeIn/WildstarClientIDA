#include "../winhttp.h"

//----- (0000000140882410) ----------------------------------------------------
__int64 __fastcall sub_140882410(int a1)
{
	bool v1; // zf
	int v2; // eax
	int v3; // ecx
	bool v4; // sf
	__int64 result; // rax

	v1 = (a1 & -a1) == 0;
	v2 = a1 & -a1;
	v3 = 32;
	if (v1)
		v3 = 31;
	if ((v2 & 0xFFFF0000) == 0)
	{
		v2 <<= 16;
		v3 -= 16;
	}
	if ((v2 & 0xFF000000) == 0)
	{
		v2 <<= 8;
		v3 -= 8;
	}
	if ((v2 & 0xF0000000) == 0)
	{
		v2 *= 16;
		v3 -= 4;
	}
	if ((v2 & 0xC0000000) == 0)
	{
		v2 *= 4;
		v3 -= 2;
	}
	v4 = v2 < 0;
	result = (unsigned int)(v3 - 2);
	if (v4)
		return (unsigned int)(v3 - 1);
	return result;
}

