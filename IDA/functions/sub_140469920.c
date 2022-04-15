#include "../winhttp.h"

//----- (0000000140469920) ----------------------------------------------------
_DWORD* __fastcall sub_140469920(__int64 a1, int a2)
{
	__int64 v2; // rbx
	_DWORD* v4; // rdi

	v2 = *(_QWORD*)(a1 + 5576);
	if (!v2)
		return 0i64;
	while (1)
	{
		v4 = *(_DWORD**)(v2 + 56);
		if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 8i64))(v4) == a2 || v4[27] == a2)
			break;
		v2 = *(_QWORD*)(v2 + 24);
		if (!v2)
			return 0i64;
	}
	return v4;
}

