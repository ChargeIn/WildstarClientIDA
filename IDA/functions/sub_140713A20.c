//----- (0000000140713A20) ----------------------------------------------------
void __fastcall sub_140713A20(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	v2 = (_QWORD*)a1[5];
	if (v2)
		*v2 = a1[6];
	v3 = a1[6];
	if (v3)
		*(_QWORD*)(v3 + 40) = a1[5];
	a1[5] = 0i64;
	a1[6] = 0i64;
	*a1 = &off_140B73D30;
	if (a1[3])
		sub_14079AB20(a1[2], (__int64)a1);
	v4 = (_QWORD*)a1[3];
	if (v4)
		*v4 = a1[4];
	v5 = a1[4];
	if (v5)
		*(_QWORD*)(v5 + 24) = a1[3];
	a1[4] = 0i64;
	a1[3] = 0i64;
}
// 140B73D30: using guessed type __int64 (__fastcall *off_140B73D30)();

