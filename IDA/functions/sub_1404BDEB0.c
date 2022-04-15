#include "../winhttp.h"

//----- (00000001404BDEB0) ----------------------------------------------------
__int64 __fastcall sub_1404BDEB0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = a1[2];
	if (v3)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v3 + 48i64))(v3, a2, 0i64);
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
	}
	return result;
}

