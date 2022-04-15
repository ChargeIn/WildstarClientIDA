#include "../winhttp.h"

//----- (000000014013EEF0) ----------------------------------------------------
__int64 __fastcall sub_14013EEF0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v5; // rax
	__int64 v6; // rbx
	int* v7; // rax

	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)a1 = off_140B57F80;
	*(_QWORD*)(a1 + 24) = a3;
	v5 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 40) = v5;
	*(_QWORD*)v5 = v5;
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64) = *(_QWORD*)(a1 + 40);
	sub_1400ED880(a2, (__int64*)(a1 + 8));
	v6 = *(_QWORD*)(a1 + 40);
	v7 = sub_14018B280(24i64, 0);
	if (v7 != (int*)-16i64)
		*((_QWORD*)v7 + 2) = 0i64;
	*(_QWORD*)v7 = v6;
	*((_QWORD*)v7 + 1) = *(_QWORD*)(v6 + 8);
	**(_QWORD**)(v6 + 8) = v7;
	*(_QWORD*)(v6 + 8) = v7;
	return a1;
}
// 140B57F80: using guessed type __int64 (__fastcall *off_140B57F80[9])();

