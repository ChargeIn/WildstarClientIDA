#include "../winhttp.h"

//----- (0000000140166030) ----------------------------------------------------
__int64 __fastcall sub_140166030(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rax

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	if (v3 < 0
		|| v3 >= *(_DWORD*)(v2 + 1144)
		|| (v3 || (*(_BYTE*)(v2 + 664) & 1) != 0 && *(_QWORD*)(v2 + 1144) != 1i64
			? (v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 1136) + 8i64 * v3) + 4i64))
			: (v4 = *(_DWORD*)(v2 + 724) - *(_DWORD*)(v2 + 716)),
			v4 <= 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	else
	{
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (double)v4;
	}
	a1[2] += 16i64;
	return 1i64;
}

