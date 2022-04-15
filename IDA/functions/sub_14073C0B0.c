#include "../winhttp.h"

//----- (000000014073C0B0) ----------------------------------------------------
__int64 __fastcall sub_14073C0B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rax
	int* v5; // rax
	int v6; // ecx
	int v7; // r8d
	int* v8; // rax
	int v9; // r9d

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = v2;
	if (v2)
	{
		v5 = *(int**)(v2 + 24);
		v6 = 0;
		if (v5)
			v7 = *v5;
		else
			v7 = 0;
		v8 = *(int**)(v3 + 16);
		if (v8)
			v9 = *v8;
		else
			v9 = 0;
		v4 = a1[2];
		LOBYTE(v6) = *(_DWORD*)(v3 + 4) != 0;
		*(double*)v4 = (double)(v9 | (v7 << 12) | ((*(_DWORD*)v3 | (v6 << 7)) << 24));
	}
	else
	{
		v4 = a1[2];
		*(_QWORD*)v4 = 0xBFF0000000000000ui64;
	}
	*(_DWORD*)(v4 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

