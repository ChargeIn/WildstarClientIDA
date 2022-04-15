#include "../winhttp.h"

//----- (00000001407DE044) ----------------------------------------------------
void __fastcall sub_1407DE044(unsigned __int64 a1)
{
	unsigned __int64 v1; // rdx

	if (a1 < (unsigned __int64)&off_140C0F1B0 || a1 >(unsigned __int64) & unk_140C0F540)
	{
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	}
	else
	{
		*(_DWORD*)(a1 + 24) &= ~0x8000u;
		v1 = (__int64)((unsigned __int128)((__int64)(a1 - (_QWORD)&off_140C0F1B0) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
		sub_1407E2528(v1 + (v1 >> 63) + 16);
	}
}
// 140C0F1B0: using guessed type void *off_140C0F1B0;

