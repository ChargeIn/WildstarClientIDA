#include "../winhttp.h"

//----- (00000001405205A0) ----------------------------------------------------
__int64 sub_1405205A0()
{
	__int64 v0; // rax
	int v1; // edx
	__int64 v2; // rax

	if ((dword_140DC32B8 & 1) != 0)
	{
		if (dword_140DC32C4)
		{
			v1 = dword_140DC32C0;
			goto LABEL_8;
		}
	}
	else
	{
		dword_140DC32B8 |= 1u;
	}
	dword_140DC32C4 = 1;
	v0 = sub_140200220(0x51Bu);
	if (v0)
	{
		v1 = *(_DWORD*)(v0 + 4);
		dword_140DC32C0 = v1;
	}
	else
	{
		v1 = 0;
		dword_140DC32C0 = 0;
	}
LABEL_8:
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 5640i64);
	if (!v2)
		return 0i64;
	while (*(_DWORD*)(v2 + 8) != v1)
	{
		v2 = *(_QWORD*)(v2 + 136);
		if (!v2)
			return 0i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC32B8: using guessed type int dword_140DC32B8;
// 140DC32C0: using guessed type int dword_140DC32C0;
// 140DC32C4: using guessed type int dword_140DC32C4;

