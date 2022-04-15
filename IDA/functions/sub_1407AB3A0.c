#include "../winhttp.h"

//----- (00000001407AB3A0) ----------------------------------------------------
__int64 __fastcall sub_1407AB3A0(__m128* a1, unsigned int a2)
{
	unsigned int v4; // edi
	__int64 v5; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	unsigned int i; // ebx

	v4 = 0;
	v5 = (__int64)&a1[44 * a2 + 26690] + 88 * a1[27126].m128_u32[a2];
	*(_DWORD*)(v5 + 48) = *(_DWORD*)(v5 + 44);
	*(_DWORD*)(v5 + 44) = *(_DWORD*)(v5 + 40);
	*(_DWORD*)(v5 + 40) = sub_14018CDF0();
	v6 = *(_QWORD**)(v5 + 56);
	if (v6)
		*v6 = *(_QWORD*)(v5 + 64);
	v7 = *(_QWORD*)(v5 + 64);
	if (v7)
		*(_QWORD*)(v7 + 56) = *(_QWORD*)(v5 + 56);
	*(_QWORD*)(v5 + 56) = 0i64;
	*(_QWORD*)(v5 + 64) = 0i64;
	for (i = 0; i < 2; ++i)
	{
		if ((unsigned int)sub_1407AB450(a1, a2, i) || v4)
			v4 = 1;
	}
	return v4;
}

