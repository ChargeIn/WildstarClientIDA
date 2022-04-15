#include "../winhttp.h"

//----- (00000001402F0270) ----------------------------------------------------
__int64 __fastcall sub_1402F0270(__int64 a1)
{
	return (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1024i64))(
		*(_QWORD*)(a1 + 8),
		*(unsigned int*)(a1 + 32),
		*(unsigned int*)(a1 + 36),
		*(_QWORD*)(a1 + 40),
		*(_QWORD*)(a1 + 48),
		*(_QWORD*)(a1 + 56));
}

