#include "../winhttp.h"

//----- (000000014084BB10) ----------------------------------------------------
__int64 __fastcall sub_14084BB10(__int64 a1)
{
	LPCRITICAL_SECTION v1; // rbx
	bool v3; // zf
	unsigned int v4; // ebp
	int v5; // edi

	v1 = qword_140C61BA8;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776));
	v3 = (*(_DWORD*)(a1 + 8))-- == 1;
	v4 = *(_DWORD*)(a1 + 8);
	if (v3)
	{
		sub_140868870((__int64)&qword_140C61BA8[119].OwningThread, *(_DWORD*)(a1 + 24));
		v5 = dword_140C10F20;
		(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
		sub_140881720(v5, a1);
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)((char*)v1 + 4776));
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

