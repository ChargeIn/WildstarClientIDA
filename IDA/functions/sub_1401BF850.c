#include "../winhttp.h"

//----- (00000001401BF850) ----------------------------------------------------
__int64 __fastcall sub_1401BF850(__int64 a1, int a2)
{
	__int64 result; // rax
	int v4; // [rsp+48h] [rbp+10h] BYREF

	v4 = a2;
	if ((*(_BYTE*)(a1 + 48) & 2) == 0)
		return 2147942405i64;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, int*, __int64))(**(_QWORD**)(a1 + 40) + 104i64))(
		*(_QWORD*)(a1 + 40),
		*(unsigned int*)(a1 + 52),
		8i64,
		&v4,
		4i64);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 64) = v4;
		return 0i64;
	}
	return result;
}

