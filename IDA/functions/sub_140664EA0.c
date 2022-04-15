#include "../winhttp.h"

//----- (0000000140664EA0) ----------------------------------------------------
__int64 __fastcall sub_140664EA0(_QWORD* a1)
{
	__int64* v1; // rax
	__int64* v2; // rbx
	int v3; // eax
	__int64 v4; // r10
	__int64 v5; // rax

	v1 = (__int64*)sub_140056AB0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		v3 = sub_14054F410(*v1);
		sub_1405FCAD0(*(_QWORD*)qword_140C65B80, **(_DWORD**)(v4 + 8), v3 == 0);
		v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64) + 8i64);
		while (v5)
		{
			if (*(_DWORD*)(v5 + 32) < **(_DWORD**)(*v2 + 8))
				v5 = *(_QWORD*)(v5 + 24);
			else
				v5 = *(_QWORD*)(v5 + 16);
		}
	}
	return 0i64;
}
// 140664ED9: variable 'v4' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

