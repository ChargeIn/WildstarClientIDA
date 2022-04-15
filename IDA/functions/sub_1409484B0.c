//----- (00000001409484B0) ----------------------------------------------------
__int64 sub_1409484B0()
{
	__int64 v0; // rax
	_QWORD* v1; // rax

	v0 = 104i64;
	if (!is_mul_ok(0xDui64, 8ui64))
		v0 = -1i64;
	qword_140C4DF00 = (__int64)sub_14018B280(v0, 0);
	sub_1407E4830((int*)qword_140C4DF00, 0i64, 8 * qword_140C4DEF8);
	qword_140C4DF08 = sub_1400195E0;
	qword_140C4DF10 = (__int64(__fastcall*)(_QWORD, _QWORD))sub_1400195F0;
	qword_140C4DF20 = 0i64;
	qword_140C4DF18 = 0i64;
	sub_1405E4740(&qword_140C4DF18);
	v1 = (_QWORD*)qword_140C4DF18;
	*(_QWORD*)qword_140C4DF18 = 0i64;
	v1[1] = 0i64;
	v1[2] = 0i64;
	v1[3] = 0i64;
	v1[4] = 0i64;
	return sub_1407DD89C(sub_140954FD0);
}
// 140C4DEF8: using guessed type __int64 qword_140C4DEF8;
// 140C4DF00: using guessed type __int64 qword_140C4DF00;
// 140C4DF08: using guessed type __int64 (__fastcall *qword_140C4DF08)(_QWORD);
// 140C4DF10: using guessed type __int64 (__fastcall *qword_140C4DF10)(_QWORD, _QWORD);
// 140C4DF18: using guessed type __int64 qword_140C4DF18;
// 140C4DF20: using guessed type __int64 qword_140C4DF20;

