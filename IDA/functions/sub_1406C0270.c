#include "../winhttp.h"

//----- (00000001406C0270) ----------------------------------------------------
__int64 __fastcall sub_1406C0270(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // ecx

	v2 = sub_1406C01C0(a1);
	if (v2)
	{
		v4 = *(_DWORD*)(v2 + 2640) + 1;
		*(_DWORD*)(v2 + 2640) = v4;
		v3 = a1[2];
		*(double*)v3 = (double)v4;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0x4014000000000000i64;
	}
	*(_DWORD*)(v3 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

