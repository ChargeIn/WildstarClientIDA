#include "../winhttp.h"

//----- (0000000140896850) ----------------------------------------------------
__int64 __fastcall sub_140896850(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 24i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_140896DC0(a1, 2) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		*(_BYTE*)(v3 + 10) &= 0xFCu;
		*(_WORD*)(v3 + 8) = 0;
		*(_QWORD*)(v3 + 16) = 0i64;
	}
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 24;
	return result;
}

