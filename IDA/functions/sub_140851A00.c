#include "../winhttp.h"

//----- (0000000140851A00) ----------------------------------------------------
void __fastcall sub_140851A00(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rcx

	v2 = sub_140830ED0((__int64)qword_140C61BA8, (*(_BYTE*)(a1 + 91) & 2) != 0);
	EnterCriticalSection((LPCRITICAL_SECTION)v2);
	v3 = *(_DWORD*)(a1 + 24) % 0xC1u;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(v2 + 8 * v3 + 40);
	*(_QWORD*)(v2 + 8 * v3 + 40) = a1;
	++* (_DWORD*)(v2 + 1584);
	LeaveCriticalSection((LPCRITICAL_SECTION)v2);
}

