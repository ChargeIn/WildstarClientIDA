#include "../winhttp.h"

//----- (0000000140109650) ----------------------------------------------------
void __fastcall sub_140109650(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*a1 = 0i64;
	}
	v3 = a1[3];
	if (v3)
		sub_14018B900(v3, 0);
}

