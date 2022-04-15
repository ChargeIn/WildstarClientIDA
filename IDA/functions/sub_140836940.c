#include "../winhttp.h"

//----- (0000000140836940) ----------------------------------------------------
char __fastcall sub_140836940(__int64 a1, unsigned int a2, unsigned __int64 a3, _DWORD* a4, bool* a5)
{
	__int64 v7; // r10
	__int64* v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rax

	v7 = *(_QWORD*)(a1 + 8i64 * (a2 % 0xC1));
	if (!v7)
		return 0;
	while (*(_DWORD*)v7 != a2)
	{
		v7 = *(_QWORD*)(v7 + 8);
		if (!v7)
			return 0;
	}
	v9 = (__int64*)(v7 + 24);
	v10 = sub_140834F40((__int64*)(v7 + 24), a3);
	if (v10)
	{
		*a4 = *(_DWORD*)(v10 + 8);
		*a5 = a3 != 0;
		return 1;
	}
	if (!a3)
		return 0;
	*a5 = 0;
	v11 = sub_140834F40(v9, 0i64);
	if (!v11)
		return 0;
	*a4 = *(_DWORD*)(v11 + 8);
	return 1;
}
// 140836999: conditional instruction was optimized away because r10.8!=0

