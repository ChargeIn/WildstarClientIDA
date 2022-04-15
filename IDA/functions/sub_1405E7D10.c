#include "../winhttp.h"

//----- (00000001405E7D10) ----------------------------------------------------
_BOOL8 sub_1405E7D10()
{
	__int64 v0; // rax
	int v1; // edx
	__int64 v2; // rcx

	if ((dword_140DC3564 & 1) != 0)
	{
		v1 = dword_140DC3568;
	}
	else
	{
		dword_140DC3564 |= 1u;
		v0 = sub_140200220(0x391u);
		if (v0)
		{
			v1 = *(_DWORD*)(v0 + 4);
			dword_140DC3568 = v1;
		}
		else
		{
			v1 = 34367;
			dword_140DC3568 = 34367;
		}
	}
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	return v2 && sub_140469920(v2, v1) != 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3564: using guessed type int dword_140DC3564;
// 140DC3568: using guessed type int dword_140DC3568;

