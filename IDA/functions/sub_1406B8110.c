#include "../winhttp.h"

//----- (00000001406B8110) ----------------------------------------------------
__int64 __fastcall sub_1406B8110(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	BOOL* v5; // rcx
	BOOL v6; // edx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (BOOL*)a1[2];
		v6 = (*(_BYTE*)(v4 + 12) & 6) != 0;
		v5[2] = 1;
		result = 1i64;
		*v5 = v6;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

