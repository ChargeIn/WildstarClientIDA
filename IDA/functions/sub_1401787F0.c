#include "../winhttp.h"

//----- (00000001401787F0) ----------------------------------------------------
__int64 __fastcall sub_1401787F0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // rdx

	v2 = *(_QWORD*)(sub_140177AC0(a1) + 1040);
	v3 = *(int*)(v2 + 1032);
	if ((_DWORD)v3 == -1 || *(int*)(v2 + 1144) <= 0 || (int)v3 < 0 || (int)v3 >= *(_DWORD*)(v2 + 1160))
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8 * v3);
	v5 = *(int*)(v4 + 24) <= 0 ? 0i64 : **(_QWORD**)(v4 + 16);
	if (!v5)
		return 0i64;
	v6 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v5 + 176));
	v7 = a1[2];
	*(_QWORD*)v7 = *v6;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
	a1[2] += 16i64;
	return 1i64;
}

