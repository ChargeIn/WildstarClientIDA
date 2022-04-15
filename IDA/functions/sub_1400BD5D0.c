#include "../winhttp.h"

//----- (00000001400BD5D0) ----------------------------------------------------
char* __fastcall sub_1400BD5D0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 24))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v4 % *(_QWORD*)(a1 + 8)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 32))(a2, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	return (char*)v5 + 20;
}

