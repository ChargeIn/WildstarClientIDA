//----- (000000014094E040) ----------------------------------------------------
int sub_14094E040()
{
	__int64* i; // rax
	int result; // eax

	for (i = (__int64*)qword_140C79B38; qword_140C79B38; i = (__int64*)qword_140C79B38)
	{
		qword_140C79B38 = *i;
		sub_14018B900((__int64)i, 0);
	}
	result = (int)qword_140C79B30;
	if (qword_140C79B30)
		return CloseHandle(qword_140C79B30);
	return result;
}
// 140C79B38: using guessed type __int64 qword_140C79B38;

