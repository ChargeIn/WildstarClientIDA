#include "../winhttp.h"

//----- (0000000140790480) ----------------------------------------------------
__int64 __fastcall sub_140790480(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // r11d
	__int64 v5; // rax
	_QWORD* v6; // r10
	__int64 v7; // rdi
	__int64 result; // rax

	v3 = *(_DWORD*)(a1 + 24) - 1;
	v5 = v3;
	if (v3 < 0)
		LABEL_5:
	sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aInvalidPattern);
	v6 = (_QWORD*)(16i64 * v3 + a1 + 40);
	while (*v6 != -1i64)
	{
		--v3;
		v6 -= 2;
		if (--v5 < 0)
			goto LABEL_5;
	}
	v7 = 2i64 * v3;
	*(_QWORD*)(a1 + 16i64 * v3 + 40) = a2 - *(_QWORD*)(a1 + 16 * (v3 + 2i64));
	result = sub_1407905D0(a1, a2, a3);
	if (!result)
		*(_QWORD*)(a1 + 8 * v7 + 40) = -1i64;
	return result;
}
// 1407905D0: using guessed type __int64 __fastcall sub_1407905D0(_QWORD, _QWORD, _QWORD);

