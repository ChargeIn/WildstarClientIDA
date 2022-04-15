//----- (000000014043ACA0) ----------------------------------------------------
void sub_14043ACA0()
{
	_QWORD* v0; // rax
	_QWORD* i; // rbx
	__int64 v2; // rcx

	sub_14043AF30();
	v0 = (_QWORD*)qword_140C7CD58;
	for (i = *(_QWORD**)qword_140C7CD58; i != (_QWORD*)qword_140C7CD58; v0 = (_QWORD*)qword_140C7CD58)
	{
		v2 = (__int64)i;
		i = (_QWORD*)*i;
		sub_14018B900(v2, 0);
	}
	*v0 = v0;
	*(_QWORD*)(qword_140C7CD58 + 8) = qword_140C7CD58;
	sub_14018B900(qword_140C7CD58, 0);
	sub_140008410((__int64)&unk_140C7CD30);
	sub_14018B900(qword_140C7CD38, 0);
	sub_140008410((__int64)&unk_140C7CD10);
	sub_14018B900(qword_140C7CD18, 0);
	sub_140008410((__int64)&unk_140C7CCF0);
	sub_14018B900(qword_140C7CCF8, 0);
	sub_140008410((__int64)&unk_140C7CCD0);
	sub_14018B900(qword_140C7CCD8, 0);
	sub_140008410((__int64)&unk_140C7CCB0);
	sub_14018B900(qword_140C7CCB8, 0);
	sub_140008410((__int64)&unk_140C7CC90);
	sub_14018B900(qword_140C7CC98, 0);
	sub_14043DA00((__int64)&unk_140C7CC80);
	sub_14018B900(qword_140C7CC88, 0);
	sub_14043DA00((__int64)dword_140C7CC70);
	sub_14018B900(qword_140C7CC78, 0);
}
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CC78: using guessed type __int64 qword_140C7CC78;
// 140C7CC88: using guessed type __int64 qword_140C7CC88;
// 140C7CC98: using guessed type __int64 qword_140C7CC98;
// 140C7CCB8: using guessed type __int64 qword_140C7CCB8;
// 140C7CCD8: using guessed type __int64 qword_140C7CCD8;
// 140C7CCF8: using guessed type __int64 qword_140C7CCF8;
// 140C7CD18: using guessed type __int64 qword_140C7CD18;
// 140C7CD38: using guessed type __int64 qword_140C7CD38;
// 140C7CD58: using guessed type __int64 qword_140C7CD58;

