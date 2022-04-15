#include "../winhttp.h"

//----- (0000000140668570) ----------------------------------------------------
__int64 __fastcall sub_140668570(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r8d
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	_DWORD* v7; // rcx
	__int64 v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2)
	{
		v5 = *(_QWORD*)(*(_QWORD*)v2 + 8i64);
		v6 = 0i64;
		v7 = (_DWORD*)(v5 + 96);
		do
		{
			if (!*(v7 - 6))
				break;
			if (!*v7)
				break;
			++v6;
			++v3;
			++v7;
		} while (v6 < 6);
		v8 = a1[2];
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}

