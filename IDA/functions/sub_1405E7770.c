#include "../winhttp.h"

//----- (00000001405E7770) ----------------------------------------------------
__int16* __fastcall sub_1405E7770(__int64 a1, int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rdx
	signed int v5; // ecx
	__int64 v6; // rax
	__int64 v7; // rcx

	v2 = a2;
	if (a2 < 11
		&& (v3 = *(_QWORD*)(qword_140C65898 + 120)) != 0
		&& (v4 = *(_QWORD*)(v3 + 224)) != 0
		&& (v5 = *(_DWORD*)(v4 + 4 * v2 + 100), v5 < 31)
		&& (v6 = sub_140249340(v5)) != 0)
	{
		return sub_14034BDD0(v7, *(_DWORD*)(v6 + 4));
	}
	else
	{
		return 0i64;
	}
}
// 1405E77B4: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

