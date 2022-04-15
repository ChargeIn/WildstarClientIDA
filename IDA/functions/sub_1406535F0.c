#include "../winhttp.h"

//----- (00000001406535F0) ----------------------------------------------------
__int64 __fastcall sub_1406535F0(__int64 a1)
{
	int* v2; // rax
	int v3; // edi
	__int64 v4; // rax
	bool v5; // zf
	int v6; // eax
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (!v2 || (v4 = sub_1403D90D0(qword_140C65898, *v2)) == 0 || (v5 = *(_DWORD*)(v4 + 592) == 0, v6 = 1, v5))
		v6 = 0;
	v7 = *(_DWORD**)(a1 + 16);
	v5 = v6 == 0;
	result = 1i64;
	LOBYTE(v3) = !v5;
	v7[2] = 1;
	*v7 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

