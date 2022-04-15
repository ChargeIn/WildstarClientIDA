#include "../winhttp.h"

//----- (00000001407D5ED0) ----------------------------------------------------
__int64 __fastcall sub_1407D5ED0(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rdx

	v5 = *(_QWORD*)(a1[1] + 752i64) + 48i64 * a2;
	return (*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 136i64))(
		a1,
		*(_QWORD*)(v5 + 32),
		*(unsigned int*)(v5 + 24),
		a3,
		a4,
		a5);
}

