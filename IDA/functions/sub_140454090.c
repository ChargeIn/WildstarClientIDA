//----- (0000000140454090) ----------------------------------------------------
void __fastcall sub_140454090(__int64* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	v2 = (_QWORD*)a1[2];
	if (v2)
		*v2 = a1[3];
	v3 = a1[3];
	if (v3)
		*(_QWORD*)(v3 + 16) = a1[2];
	v4 = (_QWORD*)a1[4];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v4)
		*v4 = a1[5];
	v5 = a1[5];
	if (v5)
		*(_QWORD*)(v5 + 32) = a1[4];
	v6 = (_QWORD*)a1[6];
	a1[4] = 0i64;
	a1[5] = 0i64;
	if (v6)
		*v6 = a1[7];
	v7 = a1[7];
	if (v7)
		*(_QWORD*)(v7 + 48) = a1[6];
	a1[6] = 0i64;
	a1[7] = 0i64;
	sub_140453F90(a1);
	sub_14018B900((__int64)a1, 0);
}

