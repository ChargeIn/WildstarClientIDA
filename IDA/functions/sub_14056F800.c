#include "../winhttp.h"

//----- (000000014056F800) ----------------------------------------------------
__int64 __fastcall sub_14056F800(__int64 a1, unsigned int* a2)
{
	if (*a2)
		*(_DWORD*)(qword_140C65970 + 288) = 4;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PathChangeResult", byte_1409EBA9C, *a2);
	return 0i64;
}
// 1409EBA9C: using guessed type _BYTE byte_1409EBA9C[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

