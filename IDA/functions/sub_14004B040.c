#include "../winhttp.h"

//----- (000000014004B040) ----------------------------------------------------
__int64 __fastcall sub_14004B040(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v2 = (__int64*)sub_140056AB0(a1, 1u);
		if (v2)
		{
			v3 = *v2;
			v4 = *(_QWORD*)(v3 + 16);
			if (v4)
				sub_14004DC10(*(_QWORD*)(v4 + 5088), *(__int64**)(v3 + 16));
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

