#include "../winhttp.h"

//----- (00000001404DAF50) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAF50(__int64 a1)
{
	return (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
		*(_QWORD*)(a1 + 30088),
		47i64)
		&& *(_DWORD*)(a1 + 29236) == 1
		|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			32i64)
		&& *(_DWORD*)(a1 + 29232) == 1;
}

