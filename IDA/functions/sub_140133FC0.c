#include "../winhttp.h"

//----- (0000000140133FC0) ----------------------------------------------------
void __fastcall sub_140133FC0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v1 = a1 + 192;
	*(_QWORD*)a1 = off_140B57F50;
	if (*(_QWORD*)(a1 + 208))
	{
		sub_140044CA0(a1 + 192, *(_QWORD**)(*(_QWORD*)(a1 + 200) + 8i64));
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 16i64) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24i64) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(v1 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v1 + 8), 0);
	if (*(_QWORD*)(a1 + 176))
	{
		sub_140044CA0(a1 + 160, *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 168) + 16i64) = *(_QWORD*)(a1 + 168);
		*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24i64) = *(_QWORD*)(a1 + 168);
		*(_QWORD*)(a1 + 176) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 168), 0);
	v4 = *(_QWORD*)(a1 + 136);
	if (v4)
		sub_14018B900(v4, 0);
	v5 = *(_QWORD*)(a1 + 104);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 56) = off_140B56A08;
	if (v6)
		sub_1400579E0(v6, v3, *(_DWORD*)(a1 + 64));
	v7 = *(_QWORD*)(a1 + 24);
	if (v7)
		sub_14018B900(v7, 0);
}
// 1401340A1: variable 'v3' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B57F50: using guessed type __int64 (__fastcall *off_140B57F50[15])();

