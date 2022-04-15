#include "../winhttp.h"

//----- (00000001408CAA70) ----------------------------------------------------
__int64 __fastcall sub_1408CAA70(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rax

	if (a3 < 4)
		a3 = 4;
	*(_DWORD*)a1 = a3;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 4 * a3);
	*(_QWORD*)(a1 + 8) = v4;
	if (!v4)
		return 52i64;
	*(_DWORD*)(a1 + 16) = 0;
	return 1i64;
}

