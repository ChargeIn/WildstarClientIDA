#include "../winhttp.h"

//----- (00000001407EEF14) ----------------------------------------------------
__int64 __fastcall sub_1407EEF14(__int64 a1)
{
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 24) & 0x83) != 0 && (*(_BYTE*)(a1 + 24) & 8) != 0)
	{
		sub_1407E14C0(*(LPVOID*)(a1 + 16));
		*(_DWORD*)(a1 + 24) &= 0xFFFFFBF7;
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 8) = 0;
	}
	return result;
}

