#include "../winhttp.h"

//----- (00000001405F0230) ----------------------------------------------------
__int64 __fastcall sub_1405F0230(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = a1[56];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = a1[54];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_140008410((__int64)(a1 + 25));
	sub_14018B900(a1[26], 0);
	sub_140008410((__int64)(a1 + 19));
	sub_14018B900(a1[20], 0);
	return sub_1405F80E0(a1);
}

