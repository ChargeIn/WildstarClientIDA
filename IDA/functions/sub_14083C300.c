#include "../winhttp.h"

//----- (000000014083C300) ----------------------------------------------------
__int64 __fastcall sub_14083C300(__int64 a1, unsigned int a2, __int64 a3, _DWORD* a4)
{
	__int64 v7; // rax
	int v8; // ecx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v7 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
	if (v7)
	{
		while (*(_DWORD*)(v7 + 48) != a2)
		{
			v7 = *(_QWORD*)(v7 + 80);
			if (!v7)
				goto LABEL_6;
		}
		v8 = *(_DWORD*)(v7 + 72);
		++* (_DWORD*)v7;
		*a4 = v8;
	}
LABEL_6:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	return 1i64;
}
// 14083C366: conditional instruction was optimized away because rax.8!=0

