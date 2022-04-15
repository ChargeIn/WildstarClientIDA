#include "../winhttp.h"

//----- (00000001401773E0) ----------------------------------------------------
__int64 __fastcall sub_1401773E0(__int64* a1, int a2)
{
	_DWORD* v2; // r9
	int v4; // r8d
	int v5; // eax
	__int64 v6; // rbx
	void* v7; // rax

	v2 = (_DWORD*)a1[130];
	v4 = v2[290] - 1;
	if (a2 < v4)
		v4 = a2;
	v5 = -1;
	if (v4 > -1)
		v5 = v4;
	v2[258] = v5;
	v2[260] = v5;
	v6 = *a1;
	v7 = sub_1401774A0((__int64)a1, *(_DWORD*)(a1[130] + 1032));
	return (*(__int64(__fastcall**)(__int64*, void*))(v6 + 80))(a1, v7);
}

