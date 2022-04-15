#include "../winhttp.h"

//----- (000000014032F870) ----------------------------------------------------
_BOOL8 __fastcall sub_14032F870(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 40);
	return *(_DWORD*)(v1 + 1440) && *(_DWORD*)(v1 + 1444) && *(_DWORD*)(a1 + 376);
}

