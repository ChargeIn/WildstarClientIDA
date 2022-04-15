#include "../winhttp.h"

//----- (0000000140003870) ----------------------------------------------------
__int64 __fastcall sub_140003870(__int64* a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *a1;
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v1 - 16) + 8i64))(v1 - 16);
	return result;
}

