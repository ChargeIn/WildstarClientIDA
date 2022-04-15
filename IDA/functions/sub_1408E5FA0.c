#include "../winhttp.h"

//----- (00000001408E5FA0) ----------------------------------------------------
__int64 __fastcall sub_1408E5FA0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rax

	v3 = (_QWORD*)(a1 + 16);
	v4 = v3[17];
	v5 = a2 - a3;
	if (v4)
		v3[17] = v5 + v4;
	v6 = v3[5];
	if (v6)
		v3[5] = v5 + v6;
	v7 = v3[6];
	if (v7)
		v3[6] = v5 + v7;
	return 1i64;
}

