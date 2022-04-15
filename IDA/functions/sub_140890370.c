#include "../winhttp.h"

//----- (0000000140890370) ----------------------------------------------------
__int64 __fastcall sub_140890370(__int64 a1, __int64 a2, char a3)
{
	*(_DWORD*)(a1 + 256) = 0;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_DWORD*)(a1 + 280) = 0;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_WORD*)(a1 + 296) = 1;
	*(_BYTE*)(a1 + 298) = 0;
	*(_BYTE*)(a1 + 299) = a3;
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 96i64))(a2, a1, 0i64);
	*(_BYTE*)(a1 + 298) = a3 == 0;
	return a1;
}

