#include "../winhttp.h"

//----- (000000014079A5D0) ----------------------------------------------------
__int64 __fastcall sub_14079A5D0(unsigned int* a1, _DWORD* a2, int a3)
{
	unsigned int v3; // eax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 result; // rax

	v3 = a1[1];
	if (*a1 == v3)
	{
		if (v3)
			v7 = 2 * v3;
		else
			v7 = 8i64;
		a1[1] = v7;
		*((_QWORD*)a1 + 2) = sub_14018C320(*((_QWORD*)a1 + 2), 72 * v7, 8u);
	}
	v8 = *a1;
	v9 = *((_QWORD*)a1 + 2);
	v10 = 9 * v8;
	*a1 = v8 + 1;
	*(_DWORD*)(v9 + 8 * v10) = 2;
	*(_DWORD*)(v9 + 8 * v10 + 8) = *a2;
	*(_DWORD*)(v9 + 8 * v10 + 12) = a2[1];
	result = (unsigned int)a2[2];
	*(_DWORD*)(v9 + 8 * v10 + 16) = result;
	*(_DWORD*)(v9 + 8 * v10 + 20) = a3;
	return result;
}

