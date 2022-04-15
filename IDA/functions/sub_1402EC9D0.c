#include "../winhttp.h"

//----- (00000001402EC9D0) ----------------------------------------------------
__int64 __fastcall sub_1402EC9D0(unsigned int a1, unsigned int a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ecx
	int v7; // edx

	v4 = sub_1402185A0(a1);
	v5 = sub_1402185A0(a2);
	v6 = *(_DWORD*)(v4 + 4);
	v7 = *(_DWORD*)(v5 + 4);
	if (v6 < v7)
		return 0xFFFFFFFFi64;
	if (v6 > v7)
		return 1i64;
	if (a1 < a2)
		return 0xFFFFFFFFi64;
	return a1 > a2;
}

