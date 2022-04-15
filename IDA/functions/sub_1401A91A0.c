#include "../winhttp.h"

//----- (00000001401A91A0) ----------------------------------------------------
void __fastcall sub_1401A91A0(__int64 a1)
{
	*(_QWORD*)a1 = off_140B5EB98;
	if ((*(_DWORD*)(a1 + 32) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(a1 + 40), 0);
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	if ((*(_DWORD*)(a1 + 8) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(a1 + 16), 0);
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
}
// 140B5EB98: using guessed type __int64 (__fastcall *off_140B5EB98[18])();

