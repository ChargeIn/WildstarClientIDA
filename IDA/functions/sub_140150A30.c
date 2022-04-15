#include "../winhttp.h"

//----- (0000000140150A30) ----------------------------------------------------
__int64 __fastcall sub_140150A30(__int64 a1)
{
	int v1; // edx
	_QWORD* v2; // r8
	int v3; // ecx
	_QWORD* v4; // rax

	v1 = *(_DWORD*)(a1 + 48);
	if (v1 < 0)
		return 0i64;
	v2 = *(_QWORD**)(a1 + 8);
	v3 = 0;
	v4 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 == v2)
		return 0i64;
	while (v3 != v1)
	{
		v4 = (_QWORD*)*v4;
		++v3;
		if (v4 == v2)
			return 0i64;
	}
	return v4[2];
}

