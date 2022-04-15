#include "../winhttp.h"

//----- (0000000140853F00) ----------------------------------------------------
__int64 __fastcall sub_140853F00(_QWORD* a1, unsigned int a2)
{
	__int64 v5; // rcx

	if (a2 >= 4)
		return 31i64;
	v5 = a1[6];
	if (!v5)
		return 2i64;
	if (*(_BYTE*)(v5 + 8i64 * a2 + 1) || *(_DWORD*)(v5 + 8i64 * a2 + 4))
	{
		*(_BYTE*)(v5 + 8i64 * a2 + 1) = 0;
		*(_DWORD*)(v5 + 8i64 * a2 + 4) = 0;
		(*(void(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 264i64))(a1, a2);
	}
	return 1i64;
}

