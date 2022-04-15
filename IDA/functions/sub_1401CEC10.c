#include "../winhttp.h"

//----- (00000001401CEC10) ----------------------------------------------------
__int64 __fastcall sub_1401CEC10(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = a1[136];
	if (v2 != -1)
	{
		sub_1401C35A0(v2, (__int64)(a1 + 138));
		CloseHandle((HANDLE)a1[136]);
	}
	v3 = a1[137];
	if (v3 != -1)
	{
		sub_1401C35A0(v3, (__int64)(a1 + 142));
		CloseHandle((HANDLE)a1[137]);
	}
	sub_14018B900(a1[135], 0);
	v4 = (_QWORD*)a1[146];
	if (v4)
		*v4 = a1[147];
	v5 = a1[147];
	if (v5)
		*(_QWORD*)(v5 + 1168) = a1[146];
	result = 0i64;
	a1[147] = 0i64;
	a1[146] = 0i64;
	return result;
}

