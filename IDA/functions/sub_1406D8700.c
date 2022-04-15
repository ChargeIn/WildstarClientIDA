#include "../winhttp.h"

//----- (00000001406D8700) ----------------------------------------------------
void __fastcall sub_1406D8700(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // esi
	_QWORD* v10; // rdi
	int i; // ebp
	__int64 v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rdi
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rcx

	*a1 = (__int64)off_140B71330;
	v2 = a1[322];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[322] = 0i64;
	}
	v3 = a1[335];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[335] = 0i64;
	}
	v4 = a1[338];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[329];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[329] = 0i64;
	}
	v6 = a1[332];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[323];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[323] = 0i64;
	}
	v8 = a1[326];
	if (v8)
		sub_14018B900(v8, 0);
	v9 = 7;
	v10 = a1 + 322;
	for (i = 7; i >= 0; --i)
	{
		v12 = *(v10 - 6);
		v10 -= 6;
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*v10 = 0i64;
		}
		v13 = v10[3];
		if (v13)
			sub_14018B900(v13, 0);
	}
	v14 = a1 + 274;
	do
	{
		v15 = *(v14 - 6);
		v14 -= 6;
		if (v15)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*v14 = 0i64;
		}
		v16 = v14[3];
		if (v16)
			sub_14018B900(v16, 0);
		--v9;
	} while (v9 >= 0);
	v17 = a1[220];
	if (v17)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		a1[220] = 0i64;
	}
	v18 = a1[223];
	if (v18)
		sub_14018B900(v18, 0);
	v19 = a1[214];
	if (v19)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		a1[214] = 0i64;
	}
	v20 = a1[217];
	if (v20)
		sub_14018B900(v20, 0);
	v21 = a1[208];
	if (v21)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
		a1[208] = 0i64;
	}
	v22 = a1[211];
	if (v22)
		sub_14018B900(v22, 0);
	sub_1405C72A0(a1 + 142);
	v24 = a1[135];
	if (v24)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
		a1[135] = 0i64;
	}
	v25 = a1[138];
	if (v25)
		sub_14018B900(v25, 0);
	sub_1400C6030((__int64)a1, v23);
}
// 1406D8914: variable 'v23' is possibly undefined
// 140B71330: using guessed type __int64 (__fastcall *off_140B71330[25])();

