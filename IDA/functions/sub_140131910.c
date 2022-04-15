#include "../winhttp.h"

//----- (0000000140131910) ----------------------------------------------------
__int64 __fastcall sub_140131910(_QWORD* a1)
{
	__int64 v2; // rax
	bool v3; // al
	_DWORD* v4; // r11
	bool v5; // zf
	__int64 result; // rax

	v2 = sub_140131630(a1, 1u);
	v3 = sub_1401301F0(v2);
	v4[2] = 1;
	v5 = !v3;
	result = 1i64;
	*v4 = !v5;
	a1[2] += 16i64;
	return result;
}
// 140131931: variable 'v4' is possibly undefined

