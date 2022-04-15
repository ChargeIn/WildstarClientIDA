#include "../winhttp.h"

//----- (0000000140498D60) ----------------------------------------------------
__int64 __fastcall sub_140498D60(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v4; // rax

	v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	v2 = v1;
	if (v1
		&& (v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 40i64))(v1),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 104i64))(v4)))
	{
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 152i64))(v2);
	}
	else
	{
		return 0i64;
	}
}

