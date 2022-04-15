//----- (000000014037A4E0) ----------------------------------------------------
void __fastcall sub_14037A4E0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	while (a1[28])
	{
		v2 = (_QWORD*)a1[28];
		if (v2)
		{
			sub_1403902B0(v2);
			sub_14018B900(v3, 0);
		}
	}
	v4 = (_QWORD*)a1[29];
	a1[2] = 0i64;
	if (v4)
		*v4 = a1[30];
	v5 = a1[30];
	if (v5)
		*(_QWORD*)(v5 + 232) = a1[29];
	v6 = (_QWORD*)a1[31];
	a1[29] = 0i64;
	a1[30] = 0i64;
	if (v6)
		*v6 = a1[32];
	v7 = a1[32];
	if (v7)
		*(_QWORD*)(v7 + 248) = a1[31];
	a1[32] = 0i64;
	a1[31] = 0i64;
}
// 14037A506: variable 'v3' is possibly undefined

