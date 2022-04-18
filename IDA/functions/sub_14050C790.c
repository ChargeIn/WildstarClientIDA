#include "../winhttp.h"

//----- (000000014050C790) ----------------------------------------------------
__int64 __fastcall sub_14050C790(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	_BOOL8 v3; // r9

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	v3 = v2 && (v2 != 1 || *v1);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ShowInventory", byte_1409E9CE4, v3);
	return 0i64;
}
// 1409E9CE4: using guessed type _BYTE byte_1409E9CE4[24];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

