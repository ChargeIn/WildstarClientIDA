#include "../winhttp.h"

//----- (00000001404F4B50) ----------------------------------------------------
__int64 __fastcall sub_1404F4B50(const void**** a1)
{
	const void** i; // rcx
	const void*** v3; // rbx

	for (i = **a1; i; i = **a1)
		(*((void(__fastcall**)(const void**, __int64, __int64)) * i + 5))(i, 1i64, 1i64);
	v3 = *a1;
	if (v3)
	{
		if (*v3)
			sub_1401A4A00(v3);
		sub_14018B900((__int64)v3, 0);
	}
	return 1i64;
}

