#include "../winhttp.h"

//----- (0000000140559250) ----------------------------------------------------
__int64 __fastcall sub_140559250(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx

	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	v3 = *(_QWORD*)(a1 + 144);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3);
	if (!a2)
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = 1;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 60) = 1069547520;
	sub_140559920((__m128*)a1);
	return 0i64;
}

