#include "../winhttp.h"

//----- (00000001401C6050) ----------------------------------------------------
__int64 __fastcall sub_1401C6050(__int64 a1, unsigned int a2)
{
	_QWORD* i; // rbx
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 44) < (signed int)a2)
	{
		for (i = *(_QWORD**)(a1 + 80); i; i = (_QWORD*)i[2])
			sub_1401C6050(*i, a2);
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 152i64))(a1, a2);
		*(_DWORD*)(a1 + 44) = a2;
	}
	return result;
}

