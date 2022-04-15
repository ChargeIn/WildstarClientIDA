//----- (000000014086EC30) ----------------------------------------------------
_QWORD* __fastcall sub_14086EC30(_QWORD* a1, char a2)
{
	__int64 v4; // rax

	*a1 = off_1409A58D0;
	v4 = qword_140C628A0;
	if ((_QWORD*)qword_140C628A0 == a1)
		v4 = 0i64;
	qword_140C628A0 = v4;
	sub_1408593A0((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A58D0: using guessed type __int64 (__fastcall *off_1409A58D0[4])();
// 140C628A0: using guessed type __int64 qword_140C628A0;

