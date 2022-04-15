#include "../winhttp.h"

//----- (0000000140341580) ----------------------------------------------------
void __fastcall sub_140341580(__int64 a1)
{
	_QWORD* i; // rax
	_QWORD* v3; // rdx
	__int64 v4; // rdx
	_QWORD* v5; // rdx
	__int64 v6; // rdx
	_QWORD* j; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rdx
	_QWORD* v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx

	for (i = *(_QWORD**)(a1 + 80); i; i = *(_QWORD**)(a1 + 80))
	{
		v3 = (_QWORD*)i[4];
		if (v3)
			*v3 = i[5];
		v4 = i[5];
		if (v4)
			*(_QWORD*)(v4 + 32) = i[4];
		i[4] = 0i64;
		i[5] = 0i64;
		v5 = (_QWORD*)i[2];
		if (v5)
			*v5 = i[3];
		v6 = i[3];
		if (v6)
			*(_QWORD*)(v6 + 16) = i[2];
		i[2] = 0i64;
		i[3] = 0i64;
		sub_14018B900((__int64)i, 0);
	}
	for (j = *(_QWORD**)(a1 + 88); j; j = *(_QWORD**)(a1 + 88))
	{
		v8 = (_QWORD*)j[4];
		if (v8)
			*v8 = j[5];
		v9 = j[5];
		if (v9)
			*(_QWORD*)(v9 + 32) = j[4];
		j[4] = 0i64;
		j[5] = 0i64;
		v10 = (_QWORD*)j[2];
		if (v10)
			*v10 = j[3];
		v11 = j[3];
		if (v11)
			*(_QWORD*)(v11 + 16) = j[2];
		j[2] = 0i64;
		j[3] = 0i64;
		sub_14018B900((__int64)j, 0);
	}
	if (*(_QWORD*)(a1 + 88))
		sub_1401A4A00((const void***)(a1 + 88));
	if (*(_QWORD*)(a1 + 80))
		sub_1401A4A00((const void***)(a1 + 80));
	v12 = *(_QWORD*)(a1 + 40);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	v13 = *(_QWORD*)(a1 + 24);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	v14 = *(_QWORD*)(a1 + 8);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
}

