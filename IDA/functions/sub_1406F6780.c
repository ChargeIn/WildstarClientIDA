#include "../winhttp.h"

//----- (00000001406F6780) ----------------------------------------------------
__int64 __fastcall sub_1406F6780(__int64 a1)
{
	int* v2; // rax
	int v3; // edi
	__int64 v4; // rcx
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (!v2 || (v4 = sub_1403D90D0(qword_140C65898, *v2)) == 0 || (v5 = 1, v4 != *(_QWORD*)(qword_140C65898 + 25744)))
		v5 = 0;
	v6 = *(_DWORD**)(a1 + 16);
	v7 = v5 == 0;
	result = 1i64;
	LOBYTE(v3) = !v7;
	v6[2] = 1;
	*v6 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

