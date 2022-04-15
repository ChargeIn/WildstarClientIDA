//----- (0000000140947C40) ----------------------------------------------------
__int64 sub_140947C40()
{
	__int64 v0; // rax

	v0 = 104i64;
	if (!is_mul_ok(0xDui64, 8ui64))
		v0 = -1i64;
	qword_140C4A3B8 = (__int64)sub_14018B280(v0, 0);
	sub_1407E4830((int*)qword_140C4A3B8, 0i64, 8 * qword_140C4A3B0);
	qword_140C4A3C0 = sub_1400195E0;
	qword_140C4A3C8 = (__int64(__fastcall*)(_QWORD, _QWORD))sub_1400195F0;
	return sub_1407DD89C(sub_140954790);
}
// 140C4A3B0: using guessed type __int64 qword_140C4A3B0;
// 140C4A3B8: using guessed type __int64 qword_140C4A3B8;
// 140C4A3C0: using guessed type __int64 (__fastcall *qword_140C4A3C0)(_QWORD);
// 140C4A3C8: using guessed type __int64 (__fastcall *qword_140C4A3C8)(_QWORD, _QWORD);

