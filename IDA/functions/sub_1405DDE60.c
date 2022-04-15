//----- (00000001405DDE60) ----------------------------------------------------
_QWORD* __fastcall sub_1405DDE60(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = (_QWORD*)a1[7];
	if (v2)
		*v2 = a1[8];
	v3 = a1[8];
	if (v3)
		*(_QWORD*)(v3 + 56) = a1[7];
	a1[7] = 0i64;
	a1[8] = 0i64;
	v4 = a1[4];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[3];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

