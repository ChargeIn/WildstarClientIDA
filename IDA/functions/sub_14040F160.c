#include "../winhttp.h"

//----- (000000014040F160) ----------------------------------------------------
_BOOL8 __fastcall sub_14040F160(int a1, unsigned int a2)
{
	int v2; // ebx
	__int64 v3; // rax
	int v4; // edx

	v2 = a1;
	if ((a1 & 0x40) != 0)
		v2 = 127;
	v3 = sub_1402479C0(a2);
	if (v3 && (v4 = *(_DWORD*)(v3 + 36), (v4 & 4) != 0) && (v4 & 0x200) != 0)
		return (v2 & *(_DWORD*)(v3 + 48)) != 0;
	else
		return 0i64;
}

