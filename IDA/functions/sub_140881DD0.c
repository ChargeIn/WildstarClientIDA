#include "../winhttp.h"

//----- (0000000140881DD0) ----------------------------------------------------
__int64 __fastcall sub_140881DD0(int a1)
{
	__int64 v1; // rbx
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx

	v1 = a1;
	result = sub_1408816F0(a1);
	if ((_DWORD)result == 1)
	{
		v3 = qword_140C62918 + 112 * v1;
		EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 48));
		if ((*(_BYTE*)(v3 + 40) & 8) != 0)
		{
			*(_QWORD*)(v3 + 24) = 0i64;
			*(_QWORD*)(v3 + 32) = 0i64;
		}
		else
		{
			nullsub_1(*(_QWORD*)(v3 + 88));
		}
		if ((*(_BYTE*)(v3 + 44) & 1) != 0)
		{
			v4 = *(_QWORD*)(v3 + 8);
			if ((*(_DWORD*)(v3 + 40) & 3) == 2)
				sub_140344CA0(v4);
			else
				sub_140001E60(v4);
			*(_QWORD*)(v3 + 8) = 0i64;
			*(_QWORD*)(v3 + 16) = 0i64;
		}
		sub_140881860(v3);
		--dword_140C62910;
		LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 48));
		return 1i64;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C62910: using guessed type int dword_140C62910;
// 140C62918: using guessed type __int64 qword_140C62918;

