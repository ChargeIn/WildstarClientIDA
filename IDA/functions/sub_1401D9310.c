#include "../winhttp.h"

//----- (00000001401D9310) ----------------------------------------------------
__int64 __fastcall sub_1401D9310(__int64 a1, char a2)
{
	*(_QWORD*)a1 = off_140B5FF20;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 184) + 8i64))(*(_QWORD*)(a1 + 184));
	sub_1401DA4F0(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B5FF20: using guessed type __int64 (__fastcall *off_140B5FF20[13])();

