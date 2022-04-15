#include "../winhttp.h"

//----- (00000001405C4A60) ----------------------------------------------------
__int64 __fastcall sub_1405C4A60(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 i; // rbx
	__int64 v9; // rcx

	v6 = sub_1405C5EB0(a3, *(_QWORD*)(a1 + 16), a2);
	v7 = *(_QWORD*)(a1 + 16);
	for (i = v6; i != v7; i += 40i64)
	{
		v9 = *(_QWORD*)(i + 8);
		if (v9)
			sub_14018B900(v9, 0);
	}
	*(_QWORD*)(a1 + 16) += 40 * ((a3 - a2) / -40);
	return a2;
}

