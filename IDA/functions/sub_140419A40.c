#include "../winhttp.h"

//----- (0000000140419A40) ----------------------------------------------------
__int64 __fastcall sub_140419A40(_QWORD* a1)
{
	int* v2; // rax
	int v4; // ecx
	__int64 v5; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = v2[115];
		v5 = a1[2];
		if (v4)
		{
			*(_DWORD*)(v5 + 8) = 3;
			*(double*)v5 = (double)v4;
		}
		else
		{
			*(_DWORD*)(v5 + 8) = 0;
		}
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

