#include "../winhttp.h"

//----- (00000001404DAE30) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAE30(__int64 a1)
{
	return !sub_1404DAC20(a1)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			28i64);
}

