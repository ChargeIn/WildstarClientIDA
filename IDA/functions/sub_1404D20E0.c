#include "../winhttp.h"

//----- (00000001404D20E0) ----------------------------------------------------
__int64 __fastcall sub_1404D20E0(__int64 a1, char a2)
{
	__int64* v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v3 = (__int64*)(a1 + 56);
	*(v3 - 7) = (__int64)off_140B69010;
	sub_1403FBAC0(v3);
	v5 = *(_QWORD*)(a1 + 40);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = *(_QWORD*)(a1 + 16);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B69010: using guessed type __int64 (__fastcall *off_140B69010[25])();

