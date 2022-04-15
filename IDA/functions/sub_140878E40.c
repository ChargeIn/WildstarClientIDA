#include "../winhttp.h"

//----- (0000000140878E40) ----------------------------------------------------
__int64 __fastcall sub_140878E40(_DWORD* a1, int a2, _DWORD* a3, _DWORD* a4)
{
	*a3 = a2;
	*a4 = a1[13] + a2 * (*(unsigned __int16(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 192i64))(a1);
	return 1i64;
}

