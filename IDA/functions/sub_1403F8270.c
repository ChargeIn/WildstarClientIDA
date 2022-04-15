#include "../winhttp.h"

//----- (00000001403F8270) ----------------------------------------------------
_BOOL8 __fastcall sub_1403F8270(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v6; // rdi

	v6 = sub_14024B980(a2);
	return v6
		&& (*(_DWORD*)(v6 + 40) == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(a1 + 72) + 8i64))(a1 + 72)
			|| (unsigned int)sub_14043E6D0(a1, a3, a2, 0i64))
		&& (*(_DWORD*)(v6 + 48) & *(_DWORD*)(a1 + 26444)) != 0;
}

