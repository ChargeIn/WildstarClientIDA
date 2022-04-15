//----- (00000001405BECB0) ----------------------------------------------------
_QWORD* __fastcall sub_1405BECB0(_QWORD* a1)
{
	int* v2; // rdi

	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v2 = sub_14018B280(2i64, 0);
	a1[1] = v2;
	a1[3] = (char*)v2 + 2;
	a1[2] = v2;
	sub_1407DB590(v2, (int*)&word_140B7B704, 0i64);
	a1[2] = v2;
	if (v2)
		*(_WORD*)v2 = 0;
	a1[4] = 0i64;
	return a1;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

