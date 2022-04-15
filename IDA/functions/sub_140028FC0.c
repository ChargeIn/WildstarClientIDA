#include "../winhttp.h"

//----- (0000000140028FC0) ----------------------------------------------------
__int64 __fastcall sub_140028FC0(__int64 a1)
{
	int* v2; // rax

	v2 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 8) = v2;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
	return a1;
}

