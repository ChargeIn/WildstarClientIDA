//----- (000000014079C160) ----------------------------------------------------
void __fastcall sub_14079C160(_QWORD* a1)
{
	_QWORD* i; // rbx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* j; // rbx
	_QWORD* v8; // rcx
	__int64 v9; // rcx

	for (i = (_QWORD*)a1[6]; i; i = (_QWORD*)a1[6])
	{
		if (*i)
			off_140C1B1E8(*i);
		v3 = i[1];
		if (v3)
			off_140C1B1E8(v3);
		v4 = (_QWORD*)i[3];
		if (v4)
			*v4 = i[4];
		v5 = i[4];
		if (v5)
			*(_QWORD*)(v5 + 24) = i[3];
		i[3] = 0i64;
		i[4] = 0i64;
		v6 = i[2];
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		sub_14018B900((__int64)i, 0);
	}
	for (j = (_QWORD*)a1[5]; j; j = (_QWORD*)a1[5])
	{
		v8 = (_QWORD*)j[1];
		if (v8)
			*v8 = j[2];
		v9 = j[2];
		if (v9)
			*(_QWORD*)(v9 + 8) = j[1];
		j[1] = 0i64;
		j[2] = 0i64;
		if (*j)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*j - 16i64) + 8i64))(*j - 16i64);
		sub_14018B900((__int64)j, 0);
	}
	sub_140019490(a1);
}
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

