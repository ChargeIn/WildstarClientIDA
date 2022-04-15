#include "../winhttp.h"

//----- (00000001404BDF20) ----------------------------------------------------
__int64 __fastcall sub_1404BDF20(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = a1[2];
	if (v3)
	{
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v3 + 48i64))(v3, 0i64, a2);
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
	}
	return result;
}

