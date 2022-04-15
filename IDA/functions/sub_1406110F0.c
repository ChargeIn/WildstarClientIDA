#include "../winhttp.h"

//----- (00000001406110F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1406110F0(__int64 a1)
{
	__int64 v1; // rax

	return (unsigned int)(*(_DWORD*)(a1 + 48) - 27) <= 1
		&& (v1 = sub_140223380(*(_DWORD*)(a1 + 52))) != 0
		&& (unsigned int)(*(_DWORD*)(v1 + 16) - 1) <= 1;
}

