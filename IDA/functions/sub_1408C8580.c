#include "../winhttp.h"

//----- (00000001408C8580) ----------------------------------------------------
void __fastcall sub_1408C8580(__int64 a1)
{
	unsigned int i; // edi

	for (i = 0; i < *(_DWORD*)(a1 + 288); ++i)
		sub_1408CB660(
			(int*)(*(_QWORD*)(a1 + 304) + 168i64 * i),
			*(float*)(*(_QWORD*)(a1 + 328) + 8i64),
			*(float*)(*(_QWORD*)(a1 + 328) + 12i64),
			*(_DWORD*)(a1 + 292));
}

