//----- (000000014094EB10) ----------------------------------------------------
__int64* sub_14094EB10()
{
	__int64* i; // rax
	__int64* result; // rax

	for (i = (__int64*)qword_140C42E00; qword_140C42E00; i = (__int64*)qword_140C42E00)
	{
		qword_140C42E00 = *i;
		sub_14018B900((__int64)i, 0);
	}
	result = &qword_140C42E00;
	qword_140C42DF0 = 1i64;
	off_140C42DF8 = &qword_140C42E00;
	qword_140C42DE0 = 0i64;
	dword_140C42DE8 = 0;
	return result;
}
// 140C42DE0: using guessed type __int64 qword_140C42DE0;
// 140C42DE8: using guessed type int dword_140C42DE8;
// 140C42DF0: using guessed type __int64 qword_140C42DF0;
// 140C42DF8: using guessed type __int64 *off_140C42DF8;
// 140C42E00: using guessed type __int64 qword_140C42E00;

