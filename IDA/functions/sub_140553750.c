#include "../winhttp.h"

//----- (0000000140553750) ----------------------------------------------------
_BOOL8 __fastcall sub_140553750(__int64 a1, unsigned int a2)
{
	__int64 v2; // r10
	__int64 v3; // r11

	return a2 >= *(_DWORD*)(a1 + 16)
		|| (unsigned int)sub_140551840(a1, a2) <= 1
		|| (*(_DWORD*)(*(_QWORD*)(v3 + 8 * v2 + 24) + 8i64) & 0x400) != 0;
}
// 14055376C: variable 'v3' is possibly undefined
// 14055376C: variable 'v2' is possibly undefined

