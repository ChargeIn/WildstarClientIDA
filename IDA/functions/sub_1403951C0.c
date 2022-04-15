#include "../winhttp.h"

//----- (00000001403951C0) ----------------------------------------------------
__int64 __fastcall sub_1403951C0(__int64 a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	int* v5; // rax
	unsigned __int64 v6; // r8

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 328i64))(*(_QWORD*)(a1 + 16));
	v3 = result;
	*(_QWORD*)(a1 + 40) = result;
	if (result)
	{
		v4 = 8 * result;
		if (!is_mul_ok(v3, 8ui64))
			v4 = -1i64;
		v5 = sub_14018B280(v4, 0);
		v6 = 8i64 * *(_QWORD*)(a1 + 40);
		*(_QWORD*)(a1 + 48) = v5;
		sub_1407E4830(v5, 0i64, v6);
		result = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
	}
	else
	{
		*(_DWORD*)(a1 + 60) |= 2u;
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
	}
	return result;
}

