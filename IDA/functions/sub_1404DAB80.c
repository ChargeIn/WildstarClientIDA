#include "../winhttp.h"

//----- (00000001404DAB80) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAB80(__int64 a1)
{
	__int64 v2; // rax

	if (!*(_DWORD*)(a1 + 31000))
	{
		v2 = *(_QWORD*)(a1 + 29080);
		if (!v2 || !*(_DWORD*)(v2 + 80))
			return (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
				*(_QWORD*)(a1 + 30088),
				25i64) != 0;
	}
	return (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
		*(_QWORD*)(a1 + 30088),
		26i64)
		|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			28i64);
}

