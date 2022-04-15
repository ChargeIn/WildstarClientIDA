#include "../winhttp.h"

//----- (00000001404BE960) ----------------------------------------------------
__int64 __fastcall sub_1404BE960(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = a1[2];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 112i64))(v2);
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
	}
	return result;
}

