//----- (000000014040AD50) ----------------------------------------------------
__int64 sub_14040AD50()
{
	__int64 result; // rax
	int* v1; // rax
	__int64 v2; // rcx
	int v3; // ebx
	__int64 v4; // rdi

	if (qword_140C658A0)
		return 0i64;
	v1 = sub_14018B280(272i64, 0);
	if (v1)
		qword_140C658A0 = sub_140402BA0((__int64)v1);
	else
		qword_140C658A0 = 0i64;
	v3 = sub_140404EE0(v2);
	if (v3 >= 0)
		return 0i64;
	v4 = qword_140C658A0;
	if (qword_140C658A0)
	{
		sub_140402CF0(qword_140C658A0);
		sub_14018B900(v4, 0);
	}
	result = (unsigned int)v3;
	qword_140C658A0 = 0i64;
	return result;
}
// 14040AD97: variable 'v2' is possibly undefined
// 140C658A0: using guessed type __int64 qword_140C658A0;

