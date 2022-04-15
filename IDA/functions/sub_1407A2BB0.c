#include "../winhttp.h"

//----- (00000001407A2BB0) ----------------------------------------------------
__int64 __fastcall sub_1407A2BB0(__int64 a1, int a2, int a3)
{
	int* v6; // rax

	*(_QWORD*)a1 = off_140B784D0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v6 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
	*(_DWORD*)(a1 + 88) = 1;
	*(_DWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 12) = a3;
	return a1;
}
// 140B784D0: using guessed type __int64 (__fastcall *off_140B784D0[16])();

