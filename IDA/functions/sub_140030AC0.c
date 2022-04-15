#include "../winhttp.h"

//----- (0000000140030AC0) ----------------------------------------------------
__int64 __fastcall sub_140030AC0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax

	*(_DWORD*)a1 = 17;
	*(_QWORD*)(a1 + 4) = 3i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v2 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 16i64) = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24i64) = *(_QWORD*)(a1 + 32);
	v3 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
	return a1;
}

