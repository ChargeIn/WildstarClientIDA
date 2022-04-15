//----- (000000014017CF50) ----------------------------------------------------
void __fastcall sub_14017CF50(_QWORD* a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // rcx
	_QWORD* v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx

	v2 = (_QWORD*)a1[257];
	*a1 = off_140B5DD10;
	if (v2)
	{
		if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		v4 = v2[3];
		if (v4)
			sub_14018B900(v4, 0);
		sub_14018B900((__int64)v2, 0);
	}
	v5 = (_QWORD*)a1[258];
	if (v5)
	{
		if (*v5)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
			*v5 = 0i64;
		}
		v6 = v5[3];
		if (v6)
			sub_14018B900(v6, 0);
		sub_14018B900((__int64)v5, 0);
	}
	v7 = a1[261];
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[261] = 0i64;
	}
	v8 = a1[262];
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[262] = 0i64;
	}
	v9 = a1[263];
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		a1[263] = 0i64;
	}
	v10 = a1[264];
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		a1[264] = 0i64;
	}
	v11 = a1[265];
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		a1[265] = 0i64;
	}
	v12 = a1[267];
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		a1[267] = 0i64;
	}
	v13 = a1[266];
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		a1[266] = 0i64;
	}
	v14 = a1[268];
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		a1[268] = 0i64;
	}
	sub_1400C6030((__int64)a1, a2);
}
// 14017D0B6: variable 'a2' is possibly undefined
// 140B5DD10: using guessed type __int64 (__fastcall *off_140B5DD10[25])();

