//----- (0000000140269010) ----------------------------------------------------
int __fastcall sub_140269010(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	HMODULE v7; // rcx
	HMODULE v8; // rcx
	__int64* v9; // rdi
	__int64 v10; // rbp
	__int64 v11; // rcx
	__int64 v12; // rcx

	*(_QWORD*)a1 = off_140B60E70;
	sub_14026A900(a1, 0);
	sub_140274D70(a1);
	sub_140275940((__int64*)(a1 + 6640));
	v2 = *(_QWORD*)(a1 + 6616);
	v3 = 0i64;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
		*(_QWORD*)(a1 + 6616) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 6608);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		*(_QWORD*)(a1 + 6608) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 6600);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		*(_QWORD*)(a1 + 6600) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 6592);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		*(_QWORD*)(a1 + 6592) = 0i64;
	}
	v7 = *(HMODULE*)(a1 + 10432);
	if (v7)
		FreeLibrary(v7);
	v8 = *(HMODULE*)(a1 + 10440);
	if (v8)
		FreeLibrary(v8);
	v9 = (__int64*)(a1 + 6656);
	v10 = 23i64;
	do
	{
		sub_14018B900(*v9++, 0);
		--v10;
	} while (v10);
	if (*(_QWORD*)(a1 + 7736))
		sub_1401A4A00((const void***)(a1 + 7736));
	if (*(_QWORD*)(a1 + 7672))
		sub_1401A4A00((const void***)(a1 + 7672));
	sub_140019490((_QWORD*)(a1 + 7488));
	sub_14018B900(*(_QWORD*)(a1 + 7504), 0);
	*(_QWORD*)(a1 + 7504) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7448));
	sub_14018B900(*(_QWORD*)(a1 + 7464), 0);
	*(_QWORD*)(a1 + 7464) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7408));
	sub_14018B900(*(_QWORD*)(a1 + 7424), 0);
	*(_QWORD*)(a1 + 7424) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7368));
	sub_14018B900(*(_QWORD*)(a1 + 7384), 0);
	*(_QWORD*)(a1 + 7384) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7328));
	sub_14018B900(*(_QWORD*)(a1 + 7344), 0);
	*(_QWORD*)(a1 + 7344) = 0i64;
	sub_140019490((_QWORD*)(a1 + 7288));
	sub_14018B900(*(_QWORD*)(a1 + 7304), 0);
	*(_QWORD*)(a1 + 7304) = 0i64;
	if (*(_QWORD*)(a1 + 7280))
		sub_1401A4A00((const void***)(a1 + 7280));
	if (*(_QWORD*)(a1 + 7272))
		sub_1401A4A00((const void***)(a1 + 7272));
	if (*(_QWORD*)(a1 + 7264))
		sub_1401A4A00((const void***)(a1 + 7264));
	if (*(_QWORD*)(a1 + 7256))
		sub_1401A4A00((const void***)(a1 + 7256));
	if (*(_QWORD*)(a1 + 7248))
		sub_1401A4A00((const void***)(a1 + 7248));
	if (*(_QWORD*)(a1 + 7240))
		sub_1401A4A00((const void***)(a1 + 7240));
	if (*(_QWORD*)(a1 + 7232))
		sub_1401A4A00((const void***)(a1 + 7232));
	if (*(_QWORD*)(a1 + 7224))
		sub_1401A4A00((const void***)(a1 + 7224));
	if (*(_QWORD*)(a1 + 7216))
		sub_1401A4A00((const void***)(a1 + 7216));
	if (*(_QWORD*)(a1 + 7208))
		sub_1401A4A00((const void***)(a1 + 7208));
	if (*(_QWORD*)(a1 + 7200))
		sub_1401A4A00((const void***)(a1 + 7200));
	if (*(_QWORD*)(a1 + 7192))
		sub_1401A4A00((const void***)(a1 + 7192));
	if (*(_QWORD*)(a1 + 7184))
		sub_1401A4A00((const void***)(a1 + 7184));
	if (*(_QWORD*)(a1 + 7176))
		sub_1401A4A00((const void***)(a1 + 7176));
	if (*(_QWORD*)(a1 + 6648))
	{
		do
		{
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 6640) + 8 * v3);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
			++v3;
		} while (v3 < *(_QWORD*)(a1 + 6648));
	}
	v12 = *(_QWORD*)(a1 + 6640);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	return sub_1402632F0(a1);
}
// 140B60E70: using guessed type __int64 (__fastcall *off_140B60E70[8])();

