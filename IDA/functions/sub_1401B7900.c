#include "../winhttp.h"

//----- (00000001401B7900) ----------------------------------------------------
__int64 __fastcall sub_1401B7900(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)a1 = off_140B5F170;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_QWORD*)(a1 + 640) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 640) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 640) + 16i64) = *(_QWORD*)(a1 + 640);
	*(_QWORD*)(*(_QWORD*)(a1 + 640) + 24i64) = *(_QWORD*)(a1 + 640);
	*(_DWORD*)(a1 + 668) = 1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 32) = -1i64;
	*(_QWORD*)(a1 + 40) = -1i64;
	*(_DWORD*)(a1 + 664) = 1;
	return a1;
}
// 140B5F170: using guessed type __int64 (__fastcall *off_140B5F170[10])();

