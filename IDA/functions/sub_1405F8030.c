#include "../winhttp.h"

//----- (00000001405F8030) ----------------------------------------------------
__int64 __fastcall sub_1405F8030(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax

	*(_QWORD*)a1 = off_140B6EA30;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 16i64) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(*(_QWORD*)(a1 + 96) + 24i64) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 24) = 0;
	*(_DWORD*)(a1 + 32) = 0;
	sub_1405F8340((_QWORD*)a1);
	return a1;
}
// 140B6EA30: using guessed type __int64 (__fastcall *off_140B6EA30[27])();

