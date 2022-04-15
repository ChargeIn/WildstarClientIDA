#include "../winhttp.h"

//----- (00000001401780E0) ----------------------------------------------------
__int64 __fastcall sub_1401780E0(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // eax
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // rdx

	v2 = sub_140177AC0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = *(_QWORD*)(v2 + 1040);
	if (*(int*)(v4 + 1144) <= 0 || v3 < 0 || v3 >= *(_DWORD*)(v4 + 1160))
		return 0i64;
	v5 = *(_QWORD*)(*(_QWORD*)(v4 + 1152) + 8i64 * v3);
	v6 = *(int*)(v5 + 24) <= 0 ? 0i64 : **(_QWORD**)(v5 + 16);
	if (!v6)
		return 0i64;
	v7 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v6 + 176));
	v8 = a1[2];
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	a1[2] += 16i64;
	return 1i64;
}

