#include "../winhttp.h"

//----- (00000001401C1300) ----------------------------------------------------
__int64 __fastcall sub_1401C1300(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)a1 = off_140B5F3F0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v2 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 16i64) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 24i64) = *(_QWORD*)(a1 + 112);
	*(_DWORD*)(a1 + 136) = 1;
	return a1;
}
// 140B5F3F0: using guessed type __int64 (__fastcall *off_140B5F3F0[7])();

