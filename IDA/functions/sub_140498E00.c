#include "../winhttp.h"

//----- (0000000140498E00) ----------------------------------------------------
float __fastcall sub_140498E00(__int64 a1)
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
		return (*(float(__fastcall**)(__int64))(*(_QWORD*)v2 + 136i64))(v2) * 100.0;
	}
	else
	{
		return 0.0;
	}
}

