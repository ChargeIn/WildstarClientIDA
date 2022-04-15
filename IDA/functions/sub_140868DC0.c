#include "../winhttp.h"

//----- (0000000140868DC0) ----------------------------------------------------
void __fastcall sub_140868DC0(__int64 a1, __m128i* a2)
{
	EnterCriticalSection(&stru_140C62878);
	sub_140868F00(a1, a2);
	LeaveCriticalSection(&stru_140C62878);
}

