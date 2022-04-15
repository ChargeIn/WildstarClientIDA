#include "../winhttp.h"

//----- (0000000140492F80) ----------------------------------------------------
__int64 __fastcall sub_140492F80(__int64 a1, __int64 a2, int a3)
{
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax

	*(_QWORD*)a1 = off_140B673A8;
	v6 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 24) = v6;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + 24i64) = *(_QWORD*)(a1 + 24);
	v7 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 56) = v7;
	*(_QWORD*)v7 = v7;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = *(_QWORD*)(a1 + 56);
	v8 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = v8;
	*(_BYTE*)v8 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 16i64) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 24i64) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_DWORD*)(a1 + 104) = 0;
	*(_QWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 128) = a3;
	return a1;
}
// 140B673A8: using guessed type __int64 (__fastcall *off_140B673A8[10])();

