#include "../winhttp.h"

//----- (0000000140121660) ----------------------------------------------------
__int64 __fastcall sub_140121660(_QWORD* a1)
{
	__int64 v2; // rbx
	_DWORD* v3; // rax
	int v4; // ecx

	v2 = sub_1400D66A0(a1, 1u);
	if ((*(_DWORD*)(v2 + 432) & 0x100) == 0)
		sub_140056570(a1, 1u, "not a GenericDialog");
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = v3[2];
	if (v4 && (v4 != 1 || *v3))
	{
		*(_DWORD*)(v2 + 1136) = 1;
		return 0i64;
	}
	else
	{
		*(_DWORD*)(v2 + 1136) = 0;
		return 0i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

