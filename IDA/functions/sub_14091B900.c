#include "../winhttp.h"

//----- (000000014091B900) ----------------------------------------------------
__int64 __fastcall sub_14091B900(__int64 a1, unsigned __int16* a2)
{
	int v2; // r10d
	__int64 v3; // r8
	bool v4; // cc
	int v5; // edx
	unsigned int v6; // edx

	v2 = *(_DWORD*)(a1 + 316);
	if (v2)
	{
		v3 = *a2;
		if ((*a2 & 0xFC00) == 55296)
			v3 = (((v3 & 0x3FF) << 10) | a2[1] & 0x3FF) + 0x10000;
		v4 = (unsigned int)v3 <= 0x7F;
	}
	else
	{
		v3 = *a2;
		v4 = (unsigned int)v3 <= 0xFF;
	}
	if (v4)
		v5 = *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + v3);
	else
		v5 = v3;
	v6 = v3 ^ v5;
	if ((unsigned int)v3 <= 0x7F && v6 == 32)
		return 32i64;
	if (((v6 - 1) & v6) != 0)
		return 0i64;
	if (!v2 || (unsigned int)v3 <= 0xFFFF)
		goto LABEL_18;
	if (v6 >= 0x400)
	{
		v6 >>= 10;
	LABEL_18:
		if (v6 >= 0x100)
			return (v6 | 0x10000) >> 8;
		return v6;
	}
	if (v6 >= 0x100)
		return (v6 | 0x30000) >> 8;
	else
		return v6 | 0x200;
}

