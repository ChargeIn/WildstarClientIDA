#include "../winhttp.h"

//----- (0000000140661880) ----------------------------------------------------
__int64 __fastcall sub_140661880(__int64 a1)
{
	int* v2; // rax
	int v3; // edi
	__int64 v4; // rax
	__int64 v5; // rax
	bool v6; // zf
	int v7; // eax
	_DWORD* v8; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (!v2
		|| (v4 = sub_1403D90D0(qword_140C65898, *v2)) == 0
		|| (v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 192))) == 0
		|| (v6 = *(_DWORD*)(v5 + 128) == 3, v7 = 1, !v6))
	{
		v7 = 0;
	}
	v8 = *(_DWORD**)(a1 + 16);
	v6 = v7 == 0;
	result = 1i64;
	LOBYTE(v3) = !v6;
	v8[2] = 1;
	*v8 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

