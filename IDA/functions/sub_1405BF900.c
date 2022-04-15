#include "../winhttp.h"

//----- (00000001405BF900) ----------------------------------------------------
__int64 __fastcall sub_1405BF900(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax

	v2 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 8) = v2;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
	v3 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 40) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 24i64) = *(_QWORD*)(a1 + 40);
	v4 = sub_14018B280(80i64, 0);
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 16i64) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 24i64) = *(_QWORD*)(a1 + 72);
	sub_1407E4830((int*)(a1 + 96), 0i64, 0x40ui64);
	sub_1405BF9D0(a1);
	sub_1407E4830((int*)(a1 + 96), 0i64, 0x40ui64);
	return a1;
}

