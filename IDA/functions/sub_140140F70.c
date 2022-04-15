#include "../winhttp.h"

//----- (0000000140140F70) ----------------------------------------------------
__int64 __fastcall sub_140140F70(__int64 a1, int* a2)
{
	__int64 v2; // rbx
	int* v5; // rdi

	v2 = *(_QWORD*)(a1 + 768);
	v5 = sub_14018B280(72i64, 0);
	if (v5 != (int*)-16i64)
		sub_14013D990((__int64)(v5 + 4), (int*)(a1 + 704));
	*(_QWORD*)v5 = v2;
	*((_QWORD*)v5 + 1) = *(_QWORD*)(v2 + 8);
	**(_QWORD**)(v2 + 8) = v5;
	*(_QWORD*)(v2 + 8) = v5;
	return sub_140140FF0(a1 + 704, a2);
}

