#include "../winhttp.h"

//----- (00000001404A18F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A18F0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	__int64 v6; // r10
	int v7; // eax
	unsigned __int8 v8; // al
	__int64 v9; // rcx

	if (!a2)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		return 0i64;
	v7 = *(_DWORD*)(v6 + 8);
	if (*(_DWORD*)(a2 + 8) != v7)
		return 0i64;
	v8 = sub_1404D6A60(*(_DWORD*)(a2 + 8) == v7, a4);
	return sub_1404A2090(v9, a3, v8, a5);
}
// 1404A1936: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

