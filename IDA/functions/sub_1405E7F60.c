#include "../winhttp.h"

//----- (00000001405E7F60) ----------------------------------------------------
_BOOL8 sub_1405E7F60()
{
	__int64 v0; // rax
	int v1; // edx
	__int64 v2; // rcx

	if ((dword_140DC356C & 1) != 0)
	{
		v1 = dword_140DC3570;
	}
	else
	{
		dword_140DC356C |= 1u;
		v0 = sub_140200220(0x2A0u);
		if (v0)
		{
			v1 = *(_DWORD*)(v0 + 12);
			dword_140DC3570 = v1;
		}
		else
		{
			v1 = 46281;
			dword_140DC3570 = 46281;
		}
	}
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	return v2 && sub_140469920(v2, v1) != 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC356C: using guessed type int dword_140DC356C;
// 140DC3570: using guessed type int dword_140DC3570;

