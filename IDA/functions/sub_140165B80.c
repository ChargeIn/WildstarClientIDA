#include "../winhttp.h"

//----- (0000000140165B80) ----------------------------------------------------
__int64 __fastcall sub_140165B80(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // r8
	bool v4; // zf
	__int64 result; // rax

	v2 = sub_1401657E0(a1);
	v3 = (_DWORD*)a1[2];
	v4 = *(_BYTE*)(v2 + 1064) == 0;
	v3[2] = 1;
	result = 1i64;
	*v3 = !v4;
	a1[2] += 16i64;
	return result;
}

