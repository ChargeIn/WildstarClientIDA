#include "../winhttp.h"

//----- (0000000140886E00) ----------------------------------------------------
void __fastcall sub_140886E00(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rdx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v6 = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(v6 + 16) = 0i64;
	if (a3 != 1 && *(_DWORD*)(v6 + 28) != -1)
		sub_140889E50((_QWORD*)(a1 + 168), (__int64*)v6);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

