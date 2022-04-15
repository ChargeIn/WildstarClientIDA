#include "../winhttp.h"

//----- (000000014073C040) ----------------------------------------------------
__int64 __fastcall sub_14073C040(_QWORD* a1)
{
	int* v1; // rax
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rcx

	v1 = (int*)sub_140056AB0(a1, 0xFFFFFFFF);
	if (v1)
		v2 = *v1;
	else
		v2 = 16;
	v3 = qword_140C65B98;
	if ((unsigned int)sub_1405BED30(qword_140C65B98, v2)
		&& !*(_QWORD*)(v3 + 208)
		&& !*(_DWORD*)(v3 + 172)
		&& !*(_DWORD*)(v3 + 180))
	{
		sub_1405C3660(v4, v2);
	}
	return 0i64;
}
// 14073C09A: variable 'v4' is possibly undefined
// 140C65B98: using guessed type __int64 qword_140C65B98;

