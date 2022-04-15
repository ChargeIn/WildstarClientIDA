#include "../winhttp.h"

//----- (0000000140279000) ----------------------------------------------------
__int64 __fastcall sub_140279000(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
	sub_14018B900(a1, 0);
	return a1;
}

