//----- (000000014026BE10) ----------------------------------------------------
_QWORD* __fastcall sub_14026BE10(_QWORD* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	v2 = a1[1];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[1] = 0i64;
	}
	v3 = (_QWORD*)a1[3];
	if (v3)
		*v3 = a1[4];
	v4 = a1[4];
	if (v4)
		*(_QWORD*)(v4 + 24) = a1[3];
	a1[3] = 0i64;
	a1[4] = 0i64;
	sub_14018B900((__int64)a1, 0);
	return a1;
}

