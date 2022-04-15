#include "../winhttp.h"

//----- (0000000140893540) ----------------------------------------------------
__int64 __fastcall sub_140893540(_QWORD* a1, __int64 a2)
{
	char v2; // al
	__int64 v3; // r8

	if (*(_DWORD*)a2 != 4)
		return sub_140890B90(a1, a2);
	v2 = *(_BYTE*)(a2 + 44);
	v3 = *(_QWORD*)(a2 + 8);
	if ((v2 & 1) != 0)
		sub_14088AF40(qword_140C629C0, (__int64)a1, v3, *(float*)(a2 + 40), (v2 & 2) != 0);
	else
		sub_14088AFE0(qword_140C629C0, (__int64)a1, v3, *(_DWORD*)(a2 + 40), (v2 & 2) != 0);
	return 1i64;
}
// 140C629C0: using guessed type __int64 qword_140C629C0;

