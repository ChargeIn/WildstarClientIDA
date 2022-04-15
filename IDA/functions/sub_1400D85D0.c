#include "../winhttp.h"

//----- (00000001400D85D0) ----------------------------------------------------
__int64 __fastcall sub_1400D85D0(_QWORD* a1)
{
	__int64 v2; // rax
	bool v3; // al
	_DWORD* v4; // r8
	bool v5; // zf
	__int64 result; // rax

	v2 = sub_1400D66A0(a1, 1u);
	if (!v2 || (*(_BYTE*)(v2 + 28) & 1) == 0)
		return 0i64;
	v3 = sub_1400C3420((_QWORD*)v2);
	v4 = (_DWORD*)a1[2];
	v5 = !v3;
	v4[2] = 1;
	result = 1i64;
	*v4 = !v5;
	a1[2] += 16i64;
	return result;
}

