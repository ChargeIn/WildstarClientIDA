#include "../winhttp.h"

//----- (00000001404B4610) ----------------------------------------------------
void __fastcall sub_1404B4610(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // esi
	__int64 v4; // rbx
	int i; // ebp
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx

	v2 = *(_QWORD*)(a1 + 832);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = 4;
	v4 = a1 + 824;
	for (i = 4; i >= 0; --i)
	{
		v6 = *(_QWORD*)(v4 - 16);
		v4 -= 16i64;
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	}
	v7 = a1 + 744;
	do
	{
		v8 = *(_QWORD*)(v7 - 16);
		v7 -= 16i64;
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		--v3;
	} while (v3 >= 0);
	if (*(_QWORD*)(a1 + 640))
		sub_1401A4A00((const void***)(a1 + 640));
	sub_140195D70(a1 + 568);
	*(_DWORD*)(a1 + 568) = 0;
	v9 = *(_QWORD**)(a1 + 584);
	if (v9)
		*v9 = *(_QWORD*)(a1 + 592);
	v10 = *(_QWORD**)(a1 + 592);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 584);
	*(_QWORD*)(a1 + 584) = 0i64;
	*(_QWORD*)(a1 + 592) = 0i64;
	v11 = *(_QWORD*)(a1 + 544);
	if (v11)
		sub_14018B900(v11, 0);
	v12 = *(_QWORD*)(a1 + 512);
	if (v12)
		sub_14018B900(v12, 0);
	if (*(_QWORD*)(a1 + 496))
		sub_1401A4A00((const void***)(a1 + 496));
	sub_140019490((_QWORD*)(a1 + 456));
	sub_14018B900(*(_QWORD*)(a1 + 472), 0);
	*(_QWORD*)(a1 + 472) = 0i64;
	sub_140019490((_QWORD*)(a1 + 416));
	sub_14018B900(*(_QWORD*)(a1 + 432), 0);
	*(_QWORD*)(a1 + 432) = 0i64;
	sub_140019490((_QWORD*)(a1 + 376));
	sub_14018B900(*(_QWORD*)(a1 + 392), 0);
	*(_QWORD*)(a1 + 392) = 0i64;
	v13 = *(_QWORD*)(a1 + 360);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	sub_140019490((_QWORD*)(a1 + 304));
	sub_14018B900(*(_QWORD*)(a1 + 320), 0);
	*(_QWORD*)(a1 + 320) = 0i64;
	v14 = *(_QWORD*)(a1 + 280);
	if (v14)
		sub_14018B900(v14, 0);
	v15 = *(_QWORD*)(a1 + 248);
	if (v15)
		sub_14018B900(v15, 0);
	v16 = *(_QWORD*)(a1 + 144);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
}

