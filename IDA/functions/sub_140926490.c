#include "../winhttp.h"

//----- (0000000140926490) ----------------------------------------------------
_QWORD* __fastcall sub_140926490(__int64 a1, __int64 a2, __int64* a3)
{
	unsigned int* v3; // rbx
	int v5; // ebp
	__int64 v6; // rax
	char* v8; // rax
	_QWORD* v10; // rax

	v3 = *(unsigned int**)a1;
	v5 = 2 * *(unsigned __int16*)(a2 + 2);
	v6 = *(int*)(a1 + 36) + 48i64;
	if (!**(_DWORD**)a1)
	{
		v3[26] = 0;
		v8 = sub_14092D140((__int64)v3, 1, 1, 0i64, 267, v6 + 8i64 * v5);
		if (v8)
			*v8 = -117;
	}
	if (!*(_DWORD*)(a1 + 312))
	{
		if (!a3)
		{
			sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 267, *(int*)(a1 + 36) + 8i64);
			sub_140932FC0(v3, 6, 3, 0i64, 0, 0, 0);
			sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 267, *(int*)(a1 + 36) + 8i64 * (v5 + 1));
			sub_140932FC0(v3, 543, 3, 0i64, 3, 0, 0);
			return sub_140932450((__int64)v3, 1);
		}
		v10 = sub_140931B80(v3, 0, 1, 0i64, 267, *(int*)(a1 + 36) + 8i64);
		sub_14091B490(v3, a3, (__int64)v10);
	}
	return sub_140931B80(v3, 0, 1, 0i64, 267, *(int*)(a1 + 36) + 8i64 * (v5 + 1));
}

