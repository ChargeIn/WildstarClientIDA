#include "../winhttp.h"

//----- (0000000140168850) ----------------------------------------------------
void __fastcall sub_140168850(__int64 a1)
{
	unsigned int v1; // edx
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx

	v1 = *(_DWORD*)(a1 + 1444);
	*(_QWORD*)a1 = off_140B5CD40;
	sub_1401429A0(qword_140C63678, v1);
	v4 = *(_QWORD*)(a1 + 1408);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = *(_QWORD*)(a1 + 1264);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 1264) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 1288);
	if (v6)
		sub_14018B900(v6, 0);
	v7 = *(_QWORD*)(a1 + 1216);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 1216) = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 1240);
	if (v8)
		sub_14018B900(v8, 0);
	v9 = *(_QWORD*)(a1 + 1168);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 1168) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 1192);
	if (v10)
		sub_14018B900(v10, 0);
	v11 = *(_QWORD*)(a1 + 1120);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 1120) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 1144);
	if (v12)
		sub_14018B900(v12, 0);
	v13 = *(_QWORD*)(a1 + 1072);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		*(_QWORD*)(a1 + 1072) = 0i64;
	}
	v14 = *(_QWORD*)(a1 + 1096);
	if (v14)
		sub_14018B900(v14, 0);
	v15 = *(_QWORD*)(a1 + 1024);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		*(_QWORD*)(a1 + 1024) = 0i64;
	}
	v16 = *(_QWORD*)(a1 + 1048);
	if (v16)
		sub_14018B900(v16, 0);
	sub_1400C6030(a1, v3);
}
// 1401689A7: variable 'v3' is possibly undefined
// 140B5CD40: using guessed type __int64 (__fastcall *off_140B5CD40[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

