#include "../winhttp.h"

//----- (0000000140857910) ----------------------------------------------------
__int64 __fastcall sub_140857910(__int64 a1)
{
	LPCRITICAL_SECTION v1; // rbx
	bool v3; // zf
	unsigned int v4; // ebp
	int v5; // edi

	v1 = qword_140C61BA8;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328));
	v3 = (*(_DWORD*)(a1 + 8))-- == 1;
	v4 = *(_DWORD*)(a1 + 8);
	if (v3)
	{
		sub_140868870((__int64)&qword_140C61BA8[358].LockCount, *(_DWORD*)(a1 + 24));
		v5 = dword_140C10F20;
		(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
		sub_140881720(v5, a1);
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)((char*)v1 + 14328));
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

