#include "../winhttp.h"

//----- (0000000140885E20) ----------------------------------------------------
__int64 __fastcall sub_140885E20(__int64 a1)
{
	char v2; // dl
	__int64 v3; // rcx
	char v4; // al
	__int64 v5; // rbx

	if ((*(_BYTE*)(a1 + 74) & 1) == 0)
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		v2 = *(_BYTE*)(a1 - 3);
		*(_BYTE*)(a1 + 74) |= 1u;
		v3 = a1 - 120;
		v4 = (v2 & 4) == 0 && (v2 & 8) == 0;
		*(_BYTE*)(v3 + 117) = v2 ^ (v2 ^ (v4 << 6)) & 0x40;
		sub_140885F10(v3);
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
		v5 = *(_QWORD*)(a1 - 24);
		EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 24));
		sub_1408893C0(*(_QWORD*)(a1 - 24));
		LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 24));
		*(_QWORD*)(a1 - 32) = *(_QWORD*)(*(_QWORD*)(a1 - 24) + 112i64);
	}
	return (unsigned int)((*(_BYTE*)(a1 + 74) & 2) != 0) + 1;
}

