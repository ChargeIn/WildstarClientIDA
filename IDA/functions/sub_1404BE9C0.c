#include "../winhttp.h"

//----- (00000001404BE9C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404BE9C0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 16);
	return v1 && *(_DWORD*)(v1 + 644) && *(_DWORD*)(v1 + 648);
}

