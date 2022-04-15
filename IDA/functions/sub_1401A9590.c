#include "../winhttp.h"

//----- (00000001401A9590) ----------------------------------------------------
void __fastcall sub_1401A9590(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	if ((*(_DWORD*)a1 & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(a1 + 8), 0);
	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = a3;
	*(_DWORD*)a1 = a4 | 0x100;
}

