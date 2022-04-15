//----- (000000014094AC50) ----------------------------------------------------
__int64 sub_14094AC50()
{
	__int64 v0; // rax

	v0 = 104i64;
	if (!is_mul_ok(0xDui64, 8ui64))
		v0 = -1i64;
	qword_140C4B738 = (__int64)sub_14018B280(v0, 0);
	sub_1407E4830((int*)qword_140C4B738, 0i64, 8 * qword_140C4B730);
	qword_140C4B740 = (__int64(__fastcall*)(_QWORD))sub_1400522D0;
	qword_140C4B748 = (__int64(__fastcall*)(_QWORD, _QWORD))sub_1400522E0;
	return sub_1407DD89C(sub_140956AC0);
}
// 140C4B730: using guessed type __int64 qword_140C4B730;
// 140C4B738: using guessed type __int64 qword_140C4B738;
// 140C4B740: using guessed type __int64 (__fastcall *qword_140C4B740)(_QWORD);
// 140C4B748: using guessed type __int64 (__fastcall *qword_140C4B748)(_QWORD, _QWORD);

