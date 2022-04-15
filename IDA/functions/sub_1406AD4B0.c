#include "../winhttp.h"

//----- (00000001406AD4B0) ----------------------------------------------------
__int64 __fastcall sub_1406AD4B0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	_DWORD* v4; // rdx
	__int64 result; // rax
	__int64 v6; // rax
	int v7; // edx
	_DWORD* v8; // rax

	v2 = sub_1406A93C0(a1);
	v3 = 0;
	if (v2)
	{
		v6 = v2 + 8;
		if (v6)
			v7 = *(_DWORD*)(v6 + 92) & 2;
		else
			v7 = 0;
		v8 = (_DWORD*)a1[2];
		LOBYTE(v3) = v7 != 0;
		v8[2] = 1;
		*v8 = v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}

