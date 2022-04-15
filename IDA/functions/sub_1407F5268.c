#include "../winhttp.h"

//----- (00000001407F5268) ----------------------------------------------------
__int64 __fastcall sub_1407F5268(int a1)
{
	__int64 v1; // rsi
	__int64 v2; // rbx
	__int64 v3; // rdi

	v1 = (__int64)a1 >> 5;
	v2 = 88i64 * (a1 & 0x1F);
	v3 = qword_140C60410[v1];
	if (!*(_DWORD*)(v2 + v3 + 12))
	{
		sub_1407E2340(10);
		if (!*(_DWORD*)(v2 + v3 + 12))
		{
			InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v3 + v2 + 16), 0xFA0u);
			++* (_DWORD*)(v2 + v3 + 12);
		}
		sub_1407E2528(10);
	}
	EnterCriticalSection((LPCRITICAL_SECTION)(v2 + qword_140C60410[v1] + 16));
	return 1i64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

