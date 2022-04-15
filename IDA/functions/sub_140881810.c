#include "../winhttp.h"

//----- (0000000140881810) ----------------------------------------------------
void __fastcall sub_140881810(int a1, _DWORD* a2)
{
	__int64 v3; // rdi

	v3 = qword_140C62918 + 112i64 * a1;
	EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 48));
	a2[1] = *(_DWORD*)(v3 + 100);
	*a2 = *(_DWORD*)(v3 + 104);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 48));
}
// 140C62918: using guessed type __int64 qword_140C62918;

