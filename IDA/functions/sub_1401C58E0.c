#include "../winhttp.h"

//----- (00000001401C58E0) ----------------------------------------------------
_QWORD* __fastcall sub_1401C58E0(_QWORD* a1, char a2)
{
	const void* v4; // rcx
	void* v5; // rcx

	*a1 = off_140B5F518;
	v4 = (const void*)a1[4];
	if (v4)
		UnmapViewOfFile(v4);
	v5 = (void*)a1[3];
	if (v5)
		CloseHandle(v5);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B5F518: using guessed type __int64 (__fastcall *off_140B5F518[32])();

