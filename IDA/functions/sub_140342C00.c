#include "../winhttp.h"

//----- (0000000140342C00) ----------------------------------------------------
void __fastcall sub_140342C00(_QWORD* a1)
{
	__int64 v2; // rcx
	int* v3; // rax
	__int64* v4; // rcx
	__int64 v5; // rsi
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	*a1 = off_140B64E30;
	if (dword_140C65860)
		--dword_140C65860;
	sub_1403470F0(a1 + 8);
	v2 = a1[18];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[18] = 0i64;
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65858 + 208i64))(qword_140C65858, a1[5]);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65858 + 184i64))(qword_140C65858, a1[5]);
	off_140C42DF8[HIDWORD(qword_140C42DE0) + 1] = a1[5];
	if (++HIDWORD(qword_140C42DE0) >= 0xFFu)
	{
		HIDWORD(qword_140C42DE0) = 0;
		v3 = sub_14018B280(2048i64, 0);
		v4 = (__int64*)v3;
		if (v3)
			*(_QWORD*)v3 = 0i64;
		else
			v4 = 0i64;
		*off_140C42DF8 = (__int64)v4;
		off_140C42DF8 = v4;
	}
	a1[5] = 0i64;
	v5 = a1[14];
	if (v5)
	{
		sub_140341580(a1[14]);
		sub_14018B900(v5, 0);
	}
	if (a1[8])
		sub_1401A4A00((const void***)a1 + 8);
	v6 = (_QWORD*)a1[6];
	if (v6)
		*v6 = a1[7];
	v7 = a1[7];
	if (v7)
		*(_QWORD*)(v7 + 48) = a1[6];
	a1[7] = 0i64;
	a1[6] = 0i64;
}
// 140B64E30: using guessed type __int64 (__fastcall *off_140B64E30[2])();
// 140C42DE0: using guessed type __int64 qword_140C42DE0;
// 140C42DF8: using guessed type __int64 *off_140C42DF8;
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C65860: using guessed type int dword_140C65860;

