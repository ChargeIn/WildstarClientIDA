#include "../winhttp.h"

//----- (00000001401A40C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401A40C0(unsigned __int64 a1)
{
	unsigned __int64 v1; // rdx
	char v2; // al
	unsigned __int8 v3; // al
	__int64 v4; // rdx
	unsigned __int64 result; // rax

	if (a1 < 2)
		goto LABEL_16;
	v1 = a1 - 1;
	v2 = 1;
	if (((a1 - 1) & 0xFFFFFFFF00000000ui64) != 0)
	{
		v2 = 33;
		v1 >>= 32;
	}
	if ((v1 & 0xFFFF0000) != 0)
	{
		v2 += 16;
		v1 >>= 16;
	}
	if ((v1 & 0xFF00) != 0)
	{
		v2 += 8;
		v1 >>= 8;
	}
	if ((v1 & 0xF0) != 0)
	{
		v2 += 4;
		v1 >>= 4;
	}
	if ((v1 & 0xC) != 0)
	{
		v2 += 2;
		v1 >>= 2;
	}
	if ((v1 & 2) != 0)
		++v2;
	if ((unsigned __int8)v2 < 4u)
		LABEL_16:
	v3 = 0;
	else
		v3 = v2 - 4;
	v4 = v3;
	result = *(_QWORD*)&asc_140B5E820[8 * v3];
	if (a1 > result)
		return *(_QWORD*)&asc_140B5E820[8 * v4 + 8];
	return result;
}

