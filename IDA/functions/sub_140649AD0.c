#include "../winhttp.h"

//----- (0000000140649AD0) ----------------------------------------------------
__int64 __fastcall sub_140649AD0(__int64 a1)
{
	int* v2; // rax
	int v3; // edi
	__int64 v4; // rax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (v2)
		v4 = sub_1403D90D0(qword_140C65898, *v2);
	else
		v4 = 0i64;
	v5 = *(_DWORD**)(a1 + 16);
	v6 = v4 == 0;
	result = 1i64;
	LOBYTE(v3) = !v6;
	v5[2] = 1;
	*v5 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

