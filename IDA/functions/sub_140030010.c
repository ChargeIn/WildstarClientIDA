#include "../winhttp.h"

//----- (0000000140030010) ----------------------------------------------------
__int64 __fastcall sub_140030010(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v4; // r9
	__int64 result; // rax

	if (a3)
	{
		v3 = *(int*)(a1 + 4856);
		if (*(_DWORD*)(a1 + 4852) > 0x10u || (unsigned int)v3 > 2)
			v4 = qword_140C658E8;
		else
			v4 = *(_QWORD*)(32i64 * *(int*)(a1 + 4852) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v3;
		return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a3 + 320i64))(
			a3,
			a2,
			a1 + 4784,
			v4);
	}
	return result;
}
// 140C658E8: using guessed type __int64 qword_140C658E8;

