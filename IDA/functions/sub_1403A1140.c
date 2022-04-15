#include "../winhttp.h"

//----- (00000001403A1140) ----------------------------------------------------
_BOOL8 sub_1403A1140()
{
	__int64 v0; // rcx
	int v2; // ecx
	unsigned int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // rax

	v0 = *(_QWORD*)(qword_140C65898 + 29272);
	if (v0 && *(_DWORD*)(v0 + 20) == 9)
		return 0i64;
	v2 = *(_DWORD*)(qword_140C65B98 + 268);
	return (unsigned int)(v2 - 1) > 1 && v2 != 8
		|| (v3 = *(_DWORD*)(qword_140C65B98 + 264)) == 0
		|| (v4 = sub_140215240(v3)) == 0
		|| (v5 = sub_140214E00(*(_DWORD*)(v4 + 16))) == 0
		|| (*(_DWORD*)(v5 + 16) & 2) == 0;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

