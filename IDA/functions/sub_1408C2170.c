#include "../winhttp.h"

//----- (00000001408C2170) ----------------------------------------------------
__int64 __fastcall sub_1408C2170(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 40i64);
	if (result)
	{
		*(_QWORD*)result = off_1409AA4D0;
		*(_DWORD*)(result + 8) = *(_DWORD*)(a1 + 8);
		*(_DWORD*)(result + 12) = *(_DWORD*)(a1 + 12);
		*(_DWORD*)(result + 16) = *(_DWORD*)(a1 + 16);
		*(_DWORD*)(result + 20) = *(_DWORD*)(a1 + 20);
		*(_DWORD*)(result + 24) = *(_DWORD*)(a1 + 24);
		*(_BYTE*)(result + 24) = 1;
		*(_QWORD*)(result + 28) = *(_QWORD*)(a1 + 28);
		*(_BYTE*)(result + 34) = 1;
	}
	return result;
}
// 1409AA4D0: using guessed type __int64 (__fastcall *off_1409AA4D0[12])();

