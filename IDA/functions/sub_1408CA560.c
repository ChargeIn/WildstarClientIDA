#include "../winhttp.h"

//----- (00000001408CA560) ----------------------------------------------------
__int64 __fastcall sub_1408CA560(__int64 a1, __int64 a2, unsigned int a3, float a4)
{
	__int64 v5; // rax

	if (!a3)
		a3 = 1;
	*(_DWORD*)a1 = a3;
	v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 8i64 * a3);
	*(_QWORD*)(a1 + 8) = v5;
	if (!v5)
		return 52i64;
	*(float*)(a1 + 20) = a4;
	*(_DWORD*)(a1 + 16) = 0;
	return 1i64;
}

