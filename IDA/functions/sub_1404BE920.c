#include "../winhttp.h"

//----- (00000001404BE920) ----------------------------------------------------
__int64 __fastcall sub_1404BE920(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 96i64))(v1);
	return result;
}

