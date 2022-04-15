#include "../winhttp.h"

//----- (0000000140787970) ----------------------------------------------------
__int64 __fastcall sub_140787970(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax

	*(_QWORD*)a1 = off_140B77ED0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v2 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 40) = v2;
	*(_QWORD*)v2 = v2;
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64) = *(_QWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 48) = 2139095039;
	v3 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 64) = v3;
	*(_QWORD*)v3 = v3;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = *(_QWORD*)(a1 + 64);
	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 16i64) = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 24i64) = *(_QWORD*)(a1 + 80);
	return a1;
}
// 140B77ED0: using guessed type __int64 (__fastcall *off_140B77ED0[29])();

