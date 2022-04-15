#include "../winhttp.h"

//----- (0000000140649BC0) ----------------------------------------------------
__int64 __fastcall sub_140649BC0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rcx
	__int64 result; // rax
	_DWORD* v6; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0 && *(_DWORD*)(v3 + 128) != 20)
	{
		v4 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v6 = *(_DWORD**)(a1 + 16);
		v6[2] = 1;
		*v6 = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

