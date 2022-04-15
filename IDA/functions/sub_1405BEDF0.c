//----- (00000001405BEDF0) ----------------------------------------------------
__int64 sub_1405BEDF0()
{
	int* v0; // rax
	__int64 v1; // rbx

	if (qword_140C65B98)
		return 0i64;
	v0 = sub_14018B280(568i64, 0);
	qword_140C65B98 = v0 ? sub_1405BEE80((__int64)v0) : 0i64;
	if ((int)sub_1405C2F20() >= 0)
		return 0i64;
	v1 = qword_140C65B98;
	if (qword_140C65B98)
	{
		sub_1405BF130(qword_140C65B98);
		sub_14018B900(v1, 0);
	}
	qword_140C65B98 = 0i64;
	return 2147500037i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

