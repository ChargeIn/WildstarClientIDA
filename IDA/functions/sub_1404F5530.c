#include "../winhttp.h"

//----- (00000001404F5530) ----------------------------------------------------
void __fastcall sub_1404F5530(_QWORD* a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rcx
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	_QWORD* v26; // rcx
	__int64 v27; // rcx

	v1 = (_QWORD*)a1[262];
	*a1 = off_140B69F70;
	if (v1)
	{
		if (*v1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
			*v1 = 0i64;
		}
		v3 = v1[3];
		if (v3)
			sub_14018B900(v3, 0);
		sub_14018B900((__int64)v1, 0);
	}
	v4 = (_QWORD*)a1[261];
	if (v4)
	{
		if (*v4)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
			*v4 = 0i64;
		}
		v5 = v4[3];
		if (v5)
			sub_14018B900(v5, 0);
		sub_14018B900((__int64)v4, 0);
	}
	v6 = (_QWORD*)a1[128];
	if (v6)
		*v6 = a1[129];
	v7 = a1[129];
	if (v7)
		*(_QWORD*)(v7 + 1024) = a1[128];
	v8 = a1[291];
	a1[128] = 0i64;
	a1[129] = 0i64;
	if (v8 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8) > 0)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[291] + 112i64))(a1[291]);
	sub_1405005B0((__int64)(a1 + 279));
	sub_140019490(a1 + 279);
	v9 = a1[910];
	if (v9)
		sub_14018B900(v9, 0);
	sub_140008410((__int64)(a1 + 905));
	sub_14018B900(a1[906], 0);
	v10 = a1[902];
	if (v10)
		sub_14018B900(v10, 0);
	sub_14002EA60((__int64)(a1 + 292));
	v11 = a1[895];
	if (v11)
		sub_14018B900(v11, 0);
	sub_140008410((__int64)(a1 + 890));
	sub_14018B900(a1[891], 0);
	sub_14002E4A0(a1 + 879);
	v12 = a1[291];
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	sub_140019490(a1 + 279);
	sub_14018B900(a1[281], 0);
	a1[281] = 0i64;
	v14 = a1[277];
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	v15 = a1[276];
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	v16 = a1[274];
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
	v17 = a1[273];
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	v18 = a1[272];
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	v19 = a1[271];
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	v20 = a1[270];
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	v21 = a1[269];
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	v22 = a1[268];
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	v23 = a1[267];
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	v24 = a1[266];
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	v25 = a1[265];
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	v26 = (_QWORD*)a1[128];
	if (v26)
		*v26 = a1[129];
	v27 = a1[129];
	if (v27)
		*(_QWORD*)(v27 + 1024) = a1[128];
	a1[128] = 0i64;
	a1[129] = 0i64;
	sub_1400C6030((__int64)a1, v13);
}
// 1404F582C: variable 'v13' is possibly undefined
// 140B69F70: using guessed type __int64 (__fastcall *off_140B69F70[25])();

