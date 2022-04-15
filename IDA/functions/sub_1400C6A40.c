#include "../winhttp.h"

//----- (00000001400C6A40) ----------------------------------------------------
__int64 __fastcall sub_1400C6A40(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD*)(a1 + 1248);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 1248) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 1272);
	if (v3)
		sub_14018B900(v3, 0);
	sub_1400C4170(a1 + 832);
	sub_1400C4170(a1 + 416);
	sub_1400C4170(a1);
	sub_14018B900(a1, 0);
	return a1;
}

