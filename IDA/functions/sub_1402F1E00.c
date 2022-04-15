#include "../winhttp.h"

//----- (00000001402F1E00) ----------------------------------------------------
void __fastcall sub_1402F1E00(__int64 a1)
{
	__int64* v1; // rsi
	__int64 v3; // rcx
	const void*** v4; // r14
	_QWORD* i; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	v1 = (__int64*)(a1 + 8);
	if (*(_QWORD*)(a1 + 8))
		sub_1402F1720(*v1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = (const void***)(a1 + 16);
	if (v3)
		sub_1402F1AC0(v3);
	for (i = *(_QWORD**)(a1 + 24); i; i = *(_QWORD**)(a1 + 24))
	{
		v6 = (_QWORD*)i[1];
		if (v6)
			*v6 = i[2];
		v7 = i[2];
		if (v7)
			*(_QWORD*)(v7 + 8) = i[1];
		i[1] = 0i64;
		i[2] = 0i64;
		if (*i)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 8i64))(*i);
		sub_14018B900((__int64)i, 0);
	}
	if (*(_QWORD*)(a1 + 24))
		sub_1401A4A00((const void***)(a1 + 24));
	if (*v4)
		sub_1401A4A00(v4);
	if (*v1)
		sub_1401A4A00((const void***)v1);
}
// 1402F1E4E: conditional instruction was optimized away because rbx.8!=0

