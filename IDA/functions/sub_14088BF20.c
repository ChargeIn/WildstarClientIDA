#include "../winhttp.h"

//----- (000000014088BF20) ----------------------------------------------------
__int64 __fastcall sub_14088BF20(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
	signed int v5; // [rsp+40h] [rbp+18h] BYREF

	if (!sub_14088F140(*(_QWORD*)(a1 + 560), a1, &v4, &v5))
		return 2i64;
	v2 = v4;
	*(_BYTE*)(a1 + 383) &= 0xF3u;
	*(_BYTE*)(a1 + 383) |= 2u;
	*(_DWORD*)(a1 + 408) = v2;
	*(_DWORD*)(a1 + 372) = v5;
	return 1i64;
}

