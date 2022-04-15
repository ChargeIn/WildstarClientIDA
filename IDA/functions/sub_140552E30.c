#include "../winhttp.h"

//----- (0000000140552E30) ----------------------------------------------------
_BOOL8 __fastcall sub_140552E30(__int64 a1)
{
	unsigned int* v1; // rax
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rcx
	__int64 v8; // [rsp+8h] [rbp+8h]

	v1 = *(unsigned int**)(a1 + 8);
	if (!v1[109])
		return 1i64;
	v3 = *v1;
	v4 = *(_QWORD*)(qword_140C65930 + 264);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v8 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v8 = *(_QWORD*)(qword_140C65930 + 264);
	return v8 != v4 && (v7 = *(_QWORD**)(v8 + 40)) != 0i64 && sub_140488520(v7, v3);
}
// 140C65930: using guessed type __int64 qword_140C65930;

