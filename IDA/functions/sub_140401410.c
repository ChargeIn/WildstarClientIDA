#include "../winhttp.h"

//----- (0000000140401410) ----------------------------------------------------
__int64 __fastcall sub_140401410(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)a1 = 1414420037;
	*(_DWORD*)(a1 + 68) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 96) = v2;
	*(_QWORD*)(a1 + 104) = v2;
	*(_QWORD*)(a1 + 112) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	return a1;
}

