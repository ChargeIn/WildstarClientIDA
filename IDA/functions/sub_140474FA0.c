#include "../winhttp.h"

//----- (0000000140474FA0) ----------------------------------------------------
void __fastcall sub_140474FA0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	if (qword_140C65898)
	{
		v2 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v2)
			sub_1400EA3E0(v2, "MessageFinished", byte_1409EB834, a1);
	}
	v3 = a1[7];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[7] = 0i64;
	}
	v4 = a1[8];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[8] = 0i64;
	}
	v5 = a1[2];
	if (v5)
		sub_14018B900(v5, 0);
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

