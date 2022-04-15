#include "../winhttp.h"

//----- (0000000140668200) ----------------------------------------------------
__int64 __fastcall sub_140668200(_QWORD* a1)
{
	__int64* v2; // rax
	int v3; // ecx
	__int64 v4; // rdx
	_DWORD* v5; // r9
	__int64 result; // rax
	bool v7; // cf
	_DWORD* v8; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2)
	{
		v4 = *v2;
		v5 = (_DWORD*)a1[2];
		result = 1i64;
		v7 = *(_DWORD*)(*(_QWORD*)(v4 + 8) + 300i64) < 4u;
		v5[2] = 1;
		LOBYTE(v3) = v7;
		*v5 = v3;
		a1[2] += 16i64;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

