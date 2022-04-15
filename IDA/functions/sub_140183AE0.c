#include "../winhttp.h"

//----- (0000000140183AE0) ----------------------------------------------------
__int64 __fastcall sub_140183AE0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // eax
	_DWORD* v4; // r8
	bool v5; // zf
	__int64 result; // rax

	v2 = sub_140183600(a1);
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 672i64))(v2);
	v4 = (_DWORD*)a1[2];
	v5 = v3 == 0;
	v4[2] = 1;
	result = 1i64;
	*v4 = !v5;
	a1[2] += 16i64;
	return result;
}

