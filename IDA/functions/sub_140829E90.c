#include "../winhttp.h"

//----- (0000000140829E90) ----------------------------------------------------
__int64 __fastcall sub_140829E90(__int64 a1, int a2, __int64 a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	__int64* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx

	v3 = *(_DWORD**)a1;
	v4 = *(_DWORD**)(a1 + 8);
	if (v3 == v4)
		return 20i64;
	do
	{
		if (*v3 == a2)
			break;
		v3 += 4;
	} while (v3 != v4);
	if (v3 == v4)
		return 20i64;
	v5 = (__int64*)(v3 + 2);
	if (!v5)
		return 20i64;
	v6 = *v5;
	v7 = *(_QWORD*)(v6 + 8);
	if (v7)
	{
		*(_QWORD*)(a3 + 8) = v7;
		*(_QWORD*)(v6 + 8) = a3;
	}
	else
	{
		*(_QWORD*)(v6 + 8) = a3;
		*(_QWORD*)(a3 + 8) = 0i64;
	}
	return 1i64;
}

