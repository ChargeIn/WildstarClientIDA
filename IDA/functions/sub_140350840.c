#include "../winhttp.h"

//----- (0000000140350840) ----------------------------------------------------
__int64 __fastcall sub_140350840(__int64 a1)
{
	++* (_DWORD*)(a1 + 12);
	return (unsigned int)_InterlockedIncrement((volatile signed __int32*)(a1 + 8));
}

