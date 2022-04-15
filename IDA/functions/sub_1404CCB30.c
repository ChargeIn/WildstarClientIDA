#include "../winhttp.h"

//----- (00000001404CCB30) ----------------------------------------------------
__int64 __fastcall sub_1404CCB30(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax

	*(_QWORD*)a1 = off_140B68F28;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = *(_QWORD*)(a1 + 16);
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 16i64) = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 24i64) = *(_QWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 72) = 0x7FFFFFFF;
	*(_DWORD*)(a1 + 76) = 0x80000000;
	return a1;
}
// 140B68F28: using guessed type __int64 (__fastcall *off_140B68F28[6])();

