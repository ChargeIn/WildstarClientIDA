#include "../winhttp.h"

//----- (00000001408C05D0) ----------------------------------------------------
__int64 __fastcall sub_1408C05D0(__int64 a1)
{
	int* v2; // rcx
	unsigned int v3; // r9d
	int i; // edx
	unsigned int j; // edx
	__int64 v6; // rax
	__int64 v7; // rcx

	v2 = *(int**)(a1 + 64);
	if (v2)
	{
		v3 = 0;
		for (i = *(_DWORD*)(a1 + 40) & 0x3FFFF; i; i &= i - 1)
			++v3;
		sub_1407E4830(v2, 0i64, 4 * v3 * (unsigned __int64)*(unsigned int*)(a1 + 52));
	}
	if (*(_QWORD*)(a1 + 56))
	{
		for (j = 0; j < *(_DWORD*)(a1 + 48); *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4 * v7 + 8) = 0)
		{
			v6 = j++;
			v7 = 3 * v6;
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 4 * v7 + 4) = 0;
			*(_DWORD*)(*(_QWORD*)(a1 + 56) + 4 * v7) = 0;
		}
	}
	*(_BYTE*)(a1 + 92) = 1;
	return 1i64;
}

