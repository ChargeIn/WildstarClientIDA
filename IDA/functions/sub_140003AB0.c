//----- (0000000140003AB0) ----------------------------------------------------
void __fastcall sub_140003AB0(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	sub_140003BD0(a1);
	sub_140195D70(a1 + 400);
	*(_DWORD*)(a1 + 400) = 0;
	v2 = *(_QWORD**)(a1 + 416);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 424);
	v3 = *(_QWORD**)(a1 + 424);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 416);
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_QWORD*)(a1 + 424) = 0i64;
	v4 = *(_QWORD*)(a1 + 184);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = *(_QWORD*)(a1 + 168);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = *(_QWORD*)(a1 + 152);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = *(_QWORD*)(a1 + 136);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	sub_140007370((__int64*)(a1 + 120));
	sub_140007370((__int64*)(a1 + 104));
	sub_140008410(a1 + 72);
	sub_14018B900(*(_QWORD*)(a1 + 80), 0);
	v8 = *(_QWORD*)(a1 + 56);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	v9 = *(_QWORD*)(a1 + 40);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	sub_140008410(a1 + 8);
	sub_14018B900(*(_QWORD*)(a1 + 16), 0);
}

