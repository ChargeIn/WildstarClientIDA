#include "../winhttp.h"

//----- (000000014041CE30) ----------------------------------------------------
__int64 __fastcall sub_14041CE30(_QWORD* a1)
{
	int* v2; // rax
	int v4; // ecx
	__int64 v5; // rax
	__int64 v6; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = v2[106];
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		if (v4)
			*(double*)v5 = (double)v4;
		else
			*(_QWORD*)v5 = 0i64;
		a1[2] += 16i64;
		v6 = a1[2];
		*(_QWORD*)v6 = 0i64;
		*(_DWORD*)(v6 + 8) = 3;
		a1[2] += 16i64;
		return 2i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

