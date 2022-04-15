#include "../winhttp.h"

//----- (0000000140629A70) ----------------------------------------------------
__int64 __fastcall sub_140629A70(_QWORD* a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 i; // rbx
	__int64 result; // rax
	__int64(__fastcall * **v5)(_QWORD, __int64); // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v1 = a1[5];
	for (i = 0i64; i < v1; ++i)
	{
		result = a1[4];
		v5 = *(__int64(__fastcall****)(_QWORD, __int64))(result + 8 * i);
		if (v5)
			result = (**v5)(v5, 1i64);
	}
	v6 = a1[7];
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = a1[4];
	if (v7)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	return result;
}

