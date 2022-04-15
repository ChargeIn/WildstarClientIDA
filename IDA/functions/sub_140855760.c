#include "../winhttp.h"

//----- (0000000140855760) ----------------------------------------------------
void __fastcall sub_140855760(__int64 a1)
{
	LONG* p_LockCount; // rbx
	char* v3; // rdx

	if (*(_DWORD*)(a1 + 24))
	{
		p_LockCount = &qword_140C61BA8[159].LockCount;
		EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 6368));
		v3 = (char*)&p_LockCount[2 * (*(_DWORD*)(a1 + 24) % 0xC1u)];
		*(_QWORD*)(a1 + 16) = *((_QWORD*)v3 + 5);
		*((_QWORD*)v3 + 5) = a1;
		++p_LockCount[396];
		LeaveCriticalSection((LPCRITICAL_SECTION)p_LockCount);
	}
}

