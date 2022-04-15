//----- (00000001401D2D90) ----------------------------------------------------
_QWORD* __fastcall sub_1401D2D90(
	_QWORD* a1,
	__int64 a2,
	__int64 a3,
	int a4,
	_QWORD* a5,
	void(__fastcall*** a6)(_QWORD))
{
	__int64 v7; // rax
	__int64 v8; // rax

	sub_1401D80D0((__int64)a1, a2, a3, a4);
	*a1 = off_140B5FBE0;
	a1[87] = *a5;
	a1[88] = a5[1];
	a1[89] = a5[2];
	a1[90] = a5[3];
	a1[91] = a5[4];
	v7 = a5[5];
	a1[93] = a6;
	a1[92] = v7;
	(**a6)(a6);
	v8 = a1[87];
	a1[94] = 0i64;
	a1[70] = v8;
	a1[69] = a1[88];
	return a1;
}
// 140B5FBE0: using guessed type __int64 (__fastcall *off_140B5FBE0[10])();

