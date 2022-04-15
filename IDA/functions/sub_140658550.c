#include "../winhttp.h"

//----- (0000000140658550) ----------------------------------------------------
__int64 __fastcall sub_140658550(__int64 a1)
{
	int* v2; // rax
	int v3; // esi
	int* v4; // rdi
	__int64 v5; // rcx
	_DWORD* v6; // rdx
	int v7; // ecx
	_DWORD* v8; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (v2)
		v4 = (int*)sub_1403D90D0(qword_140C65898, *v2);
	else
		v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	if (v5 && v4 && v4[32] == 17 && (~((unsigned int)v4[10] >> 3) & 1) != 0 && (unsigned int)sub_14045A950(v5, v4[2]))
	{
		v6 = *(_DWORD**)(a1 + 16);
		v7 = v4[1387] + 1;
		v6[2] = 1;
		LOBYTE(v3) = v7 < 3;
		*v6 = v3;
	}
	else
	{
		v8 = *(_DWORD**)(a1 + 16);
		*v8 = 0;
		v8[2] = 1;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

