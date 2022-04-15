#include "../winhttp.h"

//----- (0000000140498C30) ----------------------------------------------------
__int64 __fastcall sub_140498C30(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx

	v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	v2 = v1;
	if (v1 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 104i64))(v1))
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 112i64))(v2);
	else
		return 0i64;
}

