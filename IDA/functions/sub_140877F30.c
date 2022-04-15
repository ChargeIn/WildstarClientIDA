#include "../winhttp.h"

//----- (0000000140877F30) ----------------------------------------------------
__int64 __fastcall sub_140877F30(__int64 a1)
{
	return (unsigned int)((*(unsigned int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 32) + 96i64))(
		*(_QWORD*)(a1 + 32),
		0i64,
		0i64,
		1i64) != 0)
		+ 1;
}

