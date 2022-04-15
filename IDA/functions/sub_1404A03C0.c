#include "../winhttp.h"

//----- (00000001404A03C0) ----------------------------------------------------
__int64 __fastcall sub_1404A03C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 i; // rcx
	__int64 j; // rcx

	if (!qword_140C65970 || !a4)
		return 0i64;
	v5 = *(_QWORD*)(qword_140C65970 + 136);
	v6 = *(_QWORD*)(v5 + 16);
	if (v6 == v5)
		return 0i64;
	while (*(_DWORD*)(v6 + 36) != *(_DWORD*)(a4 + 8))
	{
		v7 = *(_QWORD*)(v6 + 24);
		if (v7)
		{
			v6 = *(_QWORD*)(v6 + 24);
			for (i = *(_QWORD*)(v7 + 16); i; i = *(_QWORD*)(i + 16))
				v6 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = j;
			if (*(_QWORD*)(v6 + 24) != j)
				v6 = j;
		}
		if (v6 == v5)
			return 0i64;
	}
	return 1i64;
}
// 14057275A: conditional instruction was optimized away because r9.8!=0
// 140C65970: using guessed type __int64 qword_140C65970;

