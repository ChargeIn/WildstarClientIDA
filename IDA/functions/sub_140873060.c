#include "../winhttp.h"

//----- (0000000140873060) ----------------------------------------------------
__int64 __fastcall sub_140873060(__int64 a1, unsigned int* a2)
{
	__int64 v5; // rcx

	if (*(_BYTE*)(a1 + 44))
		return 17i64;
	v5 = *(_QWORD*)(a1 + 56);
	if (v5)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 64i64))(v5, *a2);
	return (*(__int64(__fastcall**)(_QWORD, unsigned int*))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8), a2);
}

