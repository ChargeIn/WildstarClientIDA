#include "../winhttp.h"

//----- (00000001400D84D0) ----------------------------------------------------
__int64 __fastcall sub_1400D84D0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	char v5; // al
	BOOL* v6; // rcx
	BOOL v7; // edx

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = sub_1400D6530((__int64)a1, 2);
		v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 520i64))(v3, v4);
		v6 = (BOOL*)a1[2];
		v6[2] = 1;
		v7 = v5 != 0;
		result = 1i64;
		*v6 = v7;
		a1[2] += 16i64;
	}
	return result;
}

