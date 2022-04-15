#include "../winhttp.h"

//----- (000000014087C2D0) ----------------------------------------------------
unsigned __int8 __fastcall sub_14087C2D0(__int64 a1, unsigned __int16 a2)
{
	int v2; // r9d

	v2 = *(char*)(((unsigned __int64)a2 >> 3) + *(_QWORD*)(a1 + 64));
	return _bittest(&v2, a2 & 7);
}

