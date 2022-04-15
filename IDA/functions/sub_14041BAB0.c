#include "../winhttp.h"

//----- (000000014041BAB0) ----------------------------------------------------
__int64 __fastcall sub_14041BAB0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	bool v5; // zf

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = v2[104];
		v5 = (v2[85] & 4) == 0;
		v3 = a1[2];
		if (v5)
			v4 = 1;
		*(double*)v3 = (double)v4;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
	}
	*(_DWORD*)(v3 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

