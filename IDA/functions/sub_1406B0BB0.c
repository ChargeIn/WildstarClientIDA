#include "../winhttp.h"

//----- (00000001406B0BB0) ----------------------------------------------------
__int64 __fastcall sub_1406B0BB0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax

	v1 = sub_140056AB0(a1, 1u);
	if (v1 && qword_140C659F0)
	{
		v3 = *(_QWORD*)(v1 + 16);
		if (v3)
			v4 = sub_1404B6E50(v2, v3);
		else
			v4 = sub_1404C9B90(v2, *(_DWORD*)(v1 + 8));
		if (v4)
			sub_1404B8440(qword_140C659F0, *(_DWORD*)(v4 + 496), 0);
	}
	return 0i64;
}
// 1406B0BDD: variable 'v2' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

