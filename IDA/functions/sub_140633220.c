#include "../winhttp.h"

//----- (0000000140633220) ----------------------------------------------------
int* __fastcall sub_140633220(__int64 a1, __int64 a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(128i64, 0);
	if (v3 != (int*)-32i64)
	{
		v3[8] = *(_DWORD*)a2;
		sub_1406317F0((_QWORD*)v3 + 5, (_QWORD*)(a2 + 8));
	}
	return v3;
}

