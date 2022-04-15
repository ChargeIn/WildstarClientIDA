#include "../winhttp.h"

//----- (00000001400F9D80) ----------------------------------------------------
__int64 __fastcall sub_1400F9D80(__int64 a1, __int64 a2)
{
	char v3; // di
	__int64 v4; // rcx

	v3 = a2;
	*(_QWORD*)a1 = off_140B56A08;
	v4 = *(_QWORD*)(a1 + 16);
	if (v4)
		sub_1400579E0(v4, a2, *(_DWORD*)(a1 + 8));
	if ((v3 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

