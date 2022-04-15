#include "../winhttp.h"

//----- (000000014088A060) ----------------------------------------------------
__int64 __fastcall sub_14088A060(__int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5)
{
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 72) & 2) != 0)
		return 1i64;
	v7 = *a2;
	v8 = a1 + 8;
	if (a5)
		result = (*(__int64(__fastcall**)(__int64*, __int64, __int64, __int64))(v7 + 48))(a2, a3, a4, v8);
	else
		result = (*(__int64(__fastcall**)(__int64*, __int64, __int64, __int64))(v7 + 40))(a2, a3, a4, v8);
	*(_DWORD*)(a1 + 72) |= 2u;
	return result;
}

