#include "../winhttp.h"

//----- (0000000140396390) ----------------------------------------------------
__int64 __fastcall sub_140396390(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 40);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 240i64))(v1);
	return result;
}

