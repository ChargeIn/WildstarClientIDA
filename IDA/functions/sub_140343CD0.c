#include "../winhttp.h"

//----- (0000000140343CD0) ----------------------------------------------------
__int64 __fastcall sub_140343CD0(__int64 a1)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 544) != -2147483638)
	{
		sub_14034A2B0(a1 + 536);
		(**(void(__fastcall***)(__int64))a1)(a1);
		return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65858 + 328i64))(
			qword_140C65858,
			a1 + 528,
			a1 + 8,
			a1 + 600);
	}
	return result;
}
// 140C65858: using guessed type __int64 qword_140C65858;

