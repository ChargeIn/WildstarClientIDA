#include "../winhttp.h"

//----- (00000001407B0710) ----------------------------------------------------
_QWORD* __fastcall sub_1407B0710(_QWORD* a1, char a2)
{
	unsigned __int64 v2; // rbx
	__int64 v5; // rcx

	v2 = 0i64;
	for (*a1 = off_140B787C0; v2 < a1[1]; ++v2)
	{
		v5 = *(_QWORD*)(a1[2] + 8 * v2);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	}
	sub_14018B900(a1[2], 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

