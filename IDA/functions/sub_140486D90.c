#include "../winhttp.h"

//----- (0000000140486D90) ----------------------------------------------------
__int64 __fastcall sub_140486D90(__int64 a1)
{
	if (*(_DWORD*)(a1 + 96))
		return (*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 616i64))(
			*(_QWORD*)(a1 + 40),
			0i64) != 0
		? 0x80004005
		: 0;
	else
		return 0i64;
}

