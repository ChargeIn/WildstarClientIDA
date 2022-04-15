//----- (000000014000A3B0) ----------------------------------------------------
void sub_14000A3B0()
{
	_QWORD* v0; // rax
	_QWORD* i; // rbx
	__int64 v2; // rcx

	v0 = (_QWORD*)qword_140C667B0;
	for (i = *(_QWORD**)qword_140C667B0; i != (_QWORD*)qword_140C667B0; v0 = (_QWORD*)qword_140C667B0)
	{
		v2 = (__int64)i;
		i = (_QWORD*)*i;
		sub_14018B900(v2, 0);
	}
	*v0 = v0;
	*(_QWORD*)(qword_140C667B0 + 8) = qword_140C667B0;
	sub_14018B900(qword_140C667B0, 0);
	if (hEvent)
		CloseHandle(hEvent);
	sub_140019B10(&qword_140C66770);
	if (qword_140C66760)
	{
		sub_140019A80((__int64)&unk_140C66750, *(_QWORD**)(qword_140C66758 + 8));
		*(_QWORD*)(qword_140C66758 + 16) = qword_140C66758;
		*(_QWORD*)(qword_140C66758 + 8) = 0i64;
		*(_QWORD*)(qword_140C66758 + 24) = qword_140C66758;
		qword_140C66760 = 0i64;
	}
	sub_14018B900(qword_140C66758, 0);
}
// 140C66758: using guessed type __int64 qword_140C66758;
// 140C66760: using guessed type __int64 qword_140C66760;
// 140C66770: using guessed type __int64 qword_140C66770;
// 140C667B0: using guessed type __int64 qword_140C667B0;

