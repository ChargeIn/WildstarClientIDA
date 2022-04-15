#include "../winhttp.h"

//----- (000000014079A810) ----------------------------------------------------
__int64 __fastcall sub_14079A810(unsigned int* a1, int a2)
{
	unsigned int v2; // eax
	__int64 v5; // rax
	__int64 v6; // r8
	_DWORD* v7; // rdx
	__int64 result; // rax

	v2 = a1[1];
	if (*a1 == v2)
	{
		if (v2)
			v5 = 2 * v2;
		else
			v5 = 8i64;
		a1[1] = v5;
		*((_QWORD*)a1 + 2) = sub_14018C320(*((_QWORD*)a1 + 2), 72 * v5, 8u);
	}
	v6 = *a1;
	v7 = (_DWORD*)(*((_QWORD*)a1 + 2) + 72 * v6);
	result = (unsigned int)(v6 + 1);
	*a1 = result;
	*v7 = 24;
	v7[2] = a2;
	return result;
}

