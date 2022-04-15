//----- (00000001404DDE90) ----------------------------------------------------
_QWORD* __fastcall sub_1404DDE90(_QWORD* a1)
{
	int* v2; // rax

	sub_1400B6F30((__int64)a1);
	*a1 = off_140B69230;
	a1[24] = 0i64;
	a1[25] = 0i64;
	a1[26] = 0i64;
	v2 = sub_14018B280(16i64, 0);
	a1[24] = v2;
	a1[25] = v2;
	a1[26] = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	return a1;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

