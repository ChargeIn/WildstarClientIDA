#include "../winhttp.h"

//----- (0000000140826F10) ----------------------------------------------------
__int64 __fastcall sub_140826F10(__int64 a1)
{
	*(_DWORD*)(a1 + 248) = 0;
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	*(_QWORD*)(a1 + 296) = 0i64;
	sub_14088C4E0(a1 + 304);
	return a1;
}

