#include "../winhttp.h"

//----- (00000001408F0B20) ----------------------------------------------------
__int64 __fastcall sub_1408F0B20(__int64 a1)
{
	int* v2; // rcx

	v2 = *(int**)(a1 + 24);
	if (v2)
		sub_1407E4830(v2, 0i64, 8 * *(_DWORD*)(a1 + 16) * ((*(_DWORD*)(a1 + 40) + 3) & 0xFFFFFFFC));
	*(_QWORD*)(a1 + 64) = 0i64;
	return 1i64;
}

