#include "../winhttp.h"

//----- (00000001405DA570) ----------------------------------------------------
__int64 __fastcall sub_1405DA570(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	int v5; // [rsp+20h] [rbp-18h]

	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v3 = result;
	if (result)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
		v4 = qword_140C65898;
		*(_DWORD*)(v3 + 5636) = 1;
		v5 = 1;
		return Apollo_LUAEvent(*(_QWORD*)(v4 + 29504), "ShieldsOverloaded", byte_1409EB71C, *(unsigned int*)(a1 + 92), v5);
	}
	return result;
}
// 1409EB71C: using guessed type _BYTE byte_1409EB71C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

