//----- (000000014050D300) ----------------------------------------------------
_QWORD* __fastcall sub_14050D300(_QWORD* a1, _QWORD* a2, unsigned int a3)
{
	char* v4; // rax
	int* v5; // rax
	int* v6; // rdi

	v4 = (char*)sub_140056BB0(a2, a3, 0i64);
	if (v4)
	{
		sub_14018F2D0(a1, v4);
		return a1;
	}
	else
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v5 = sub_14018B280(2i64, 0);
		a1[3] = (char*)v5 + 2;
		v6 = v5;
		a1[1] = v5;
		a1[2] = v5;
		sub_1407DB590(v5, dword_1409F12B4, 0i64);
		a1[2] = v6;
		if (v6)
			*(_WORD*)v6 = 0;
		return a1;
	}
}
// 1409F12B4: using guessed type int dword_1409F12B4[14];

