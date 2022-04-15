#include "../winhttp.h"

//----- (0000000140864F40) ----------------------------------------------------
__int64 __fastcall sub_140864F40(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 40i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_1408652B0(a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		*(_DWORD*)(v3 + 8) = 0;
		*(_QWORD*)(v3 + 16) = 0i64;
		*(_QWORD*)(v3 + 24) = 0i64;
		*(_QWORD*)(v3 + 32) = 0i64;
	}
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 40;
	return result;
}

