#include "../winhttp.h"

//----- (0000000140058900) ----------------------------------------------------
__int64 __fastcall sub_140058900(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rbx
	__int64 result; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	result = sub_14005C1B0(a1, 0, a3);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = result;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

