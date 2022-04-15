#include "../winhttp.h"

//----- (0000000140851680) ----------------------------------------------------
__int64 __fastcall sub_140851680(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v2; // rbx
	unsigned int v3; // edi

	v2 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, (*(_BYTE*)(a1 + 91) & 2) != 0);
	EnterCriticalSection(v2);
	v3 = *(_DWORD*)(a1 + 8) + 1;
	*(_DWORD*)(a1 + 8) = v3;
	LeaveCriticalSection(v2);
	return v3;
}

