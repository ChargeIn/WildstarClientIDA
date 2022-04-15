#include "../winhttp.h"

//----- (00000001401A8E80) ----------------------------------------------------
__int64 __fastcall sub_1401A8E80(__int64 a1)
{
	__int64 result; // rax

	while (*(_DWORD*)(a1 + 100))
		sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64 * (int)-- * (_DWORD*)(a1 + 100)), 0);
	result = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	return result;
}

