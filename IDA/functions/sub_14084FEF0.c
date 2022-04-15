#include "../winhttp.h"

//----- (000000014084FEF0) ----------------------------------------------------
__int64 __fastcall sub_14084FEF0(_QWORD* a1, int a2, __int64 a3, int a4, float a5, int a6, int a7)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 608i64))(a1, a3);
	if (result)
		return sub_140854DF0(a1, result, a2, a5, a4, a6, a7);
	return result;
}

