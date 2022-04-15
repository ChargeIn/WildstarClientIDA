#include "../winhttp.h"

//----- (00000001400E1D20) ----------------------------------------------------
void __fastcall sub_1400E1D20(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	sub_1400E1FD0((_QWORD*)a1);
	v2 = *(_QWORD*)(a1 + 1904);
	qword_140C63650 = 0i64;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 1904) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 1912);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 1912) = 0i64;
	}
	sub_1401981B0((__int64**)(a1 + 1992));
	if (*(_QWORD*)(a1 + 1992))
		sub_1401A4A00((const void***)(a1 + 1992));
	if (*(_QWORD*)(a1 + 1976))
	{
		sub_140044CA0(a1 + 1960, *(_QWORD**)(*(_QWORD*)(a1 + 1968) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 1968) + 16i64) = *(_QWORD*)(a1 + 1968);
		*(_QWORD*)(*(_QWORD*)(a1 + 1968) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 1968) + 24i64) = *(_QWORD*)(a1 + 1968);
		*(_QWORD*)(a1 + 1976) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 1968), 0);
	sub_140019490((_QWORD*)(a1 + 1920));
	sub_14018B900(*(_QWORD*)(a1 + 1936), 0);
	*(_QWORD*)(a1 + 1936) = 0i64;
	v4 = *(_QWORD*)(a1 + 1848);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 1848) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 1872);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = *(_QWORD*)(a1 + 784);
	if (v6)
		sub_14018B900(v6, 0);
	v7 = *(_QWORD*)(a1 + 760);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	sub_140008410(a1 + 728);
	sub_14018B900(*(_QWORD*)(a1 + 736), 0);
	sub_1400E1480(a1 + 200);
	sub_140152100((_QWORD*)(a1 + 152));
	sub_140141D00((_QWORD*)a1);
}
// 140C63650: using guessed type __int64 qword_140C63650;

