#include "../winhttp.h"

//----- (000000014015EE20) ----------------------------------------------------
__int64 __fastcall sub_14015EE20(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 76));
	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 48);
	if (v4)
		sub_14018B900(v4, 0);
	sub_14018B900(a1, 0);
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

