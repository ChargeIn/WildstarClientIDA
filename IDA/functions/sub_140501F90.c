#include "../winhttp.h"

//----- (0000000140501F90) ----------------------------------------------------
__int64 __fastcall sub_140501F90(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rdx
	__int64 v5; // rax
	double v6; // xmm0_8

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = a1[2];
		v6 = (double)(int)*v2;
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = v6;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
		*(_DWORD*)(v3 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}

