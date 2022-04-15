#include "../winhttp.h"

//----- (00000001402D57C0) ----------------------------------------------------
__int64 __fastcall sub_1402D57C0(__int64 a1, _WORD* a2)
{
	__int64 result; // rax
	unsigned int v5; // esi
	__int64 v6; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // kr00_8
	int* v11; // rax
	int v12; // eax

	if (!a2 || !*a2)
		return 2147942487i64;
	if (*(_QWORD*)(a1 + 16))
		return 2147549183i64;
	v5 = 0;
	v6 = 0i64;
	while (a2[++v6] != 0)
		;
	v8 = v6 + 1;
	v10 = v6 + 1;
	v9 = 2 * (v6 + 1);
	if (!is_mul_ok(v10, 2ui64))
		v9 = -1i64;
	v11 = sub_14018B280(v9, 0);
	*(_QWORD*)(a1 + 16) = v11;
	result = sub_14001B2D0(v11, v8, (__int64)a2);
	if ((int)result >= 0)
	{
		v12 = sub_1402D59F0(a1);
		if (v12 < 0)
			return (unsigned int)v12;
		return v5;
	}
	return result;
}

