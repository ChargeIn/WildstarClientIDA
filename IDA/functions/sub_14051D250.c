//----- (000000014051D250) ----------------------------------------------------
_QWORD* __fastcall sub_14051D250(_QWORD* a1, __int64 a2)
{
	int* v3; // rax
	int* v4; // rax

	a1[1] = a2;
	a1[2] = -1i64;
	*a1 = off_140B6AF60;
	a1[4] = 0i64;
	a1[5] = 0i64;
	a1[6] = 0i64;
	v3 = sub_14018B280(16i64, 0);
	a1[4] = v3;
	a1[5] = v3;
	a1[6] = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	a1[8] = 0i64;
	a1[9] = 0i64;
	a1[10] = 0i64;
	v4 = sub_14018B280(16i64, 0);
	a1[8] = v4;
	a1[9] = v4;
	a1[10] = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	return a1;
}
// 140B6AF60: using guessed type __int64 (__fastcall *off_140B6AF60[121])();

