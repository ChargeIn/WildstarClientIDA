#include "../winhttp.h"

//----- (0000000140861E50) ----------------------------------------------------
__int64 __fastcall sub_140861E50(__int64 a1, int a2)
{
	if (a2 == 1)
		*(_WORD*)(a1 + 106) = 0;
	if (*(_BYTE*)(a1 + 216))
		return 1i64;
	else
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 40i64))(*(_QWORD*)(a1 + 8));
}

