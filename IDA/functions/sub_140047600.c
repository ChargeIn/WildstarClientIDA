#include "../winhttp.h"

//----- (0000000140047600) ----------------------------------------------------
__int64 __fastcall sub_140047600(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // r10d
	__int64 v3; // rax
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // r9
	__int64 v6; // r8

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v2 = -1;
	else
		v2 = sub_140056D60(a1, 1u);
	v3 = qword_140C66E40;
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C66E40 + 208);
	if (v5)
	{
		v6 = 0i64;
		do
		{
			if (*(_DWORD*)(v6 + *(_QWORD*)(v3 + 200)) == v2)
			{
				*(_QWORD*)(v3 + 192) = v4;
				v3 = qword_140C66E40;
			}
			++v4;
			v6 += 104i64;
		} while (v4 < v5);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C66E40: using guessed type __int64 qword_140C66E40;

