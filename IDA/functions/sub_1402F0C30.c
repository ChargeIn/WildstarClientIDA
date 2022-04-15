#include "../winhttp.h"

//----- (00000001402F0C30) ----------------------------------------------------
__int64 __fastcall sub_1402F0C30(unsigned int a1, unsigned int a2, __int64 a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	int v5; // edx
	unsigned int v6; // ecx
	unsigned int v8; // edx
	unsigned int v9; // r8d
	unsigned int v10; // edx
	unsigned int v11; // r8d

	v3 = (_DWORD*)(a3 + 32i64 * a1);
	v4 = (_DWORD*)(a3 + 32i64 * a2);
	v5 = v3[5];
	if (v5 == v4[5])
	{
		v8 = v3[6];
		v9 = v4[6];
		if (v8 < v9)
			return 0xFFFFFFFFi64;
		if (v8 > v9)
			return 1i64;
		v10 = v3[7];
		v11 = v4[7];
		if (v10 < v11)
			return 0xFFFFFFFFi64;
		return v10 > v11;
	}
	else
	{
		v6 = 1;
		if (v5)
			return (unsigned int)-1;
		return v6;
	}
}

