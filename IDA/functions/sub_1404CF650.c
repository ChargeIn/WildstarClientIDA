//----- (00000001404CF650) ----------------------------------------------------
__int64 sub_1404CF650()
{
	int* v1; // rax
	__int64 v2; // rdi

	if (qword_140C65A28)
		return 0i64;
	v1 = sub_14018B280(160i64, 0);
	if (v1)
	{
		*(_QWORD*)v1 = 0i64;
		*((_QWORD*)v1 + 3) = 0i64;
		*((_QWORD*)v1 + 4) = 0i64;
		*((_QWORD*)v1 + 6) = 0i64;
		*((_QWORD*)v1 + 7) = 0i64;
		v1[2] = 1414420037;
		v1[19] = 22;
		*((_QWORD*)v1 + 12) = 0i64;
		*((_QWORD*)v1 + 13) = 0i64;
		*((_QWORD*)v1 + 15) = 0i64;
		*((_QWORD*)v1 + 16) = 0i64;
		v1[20] = 1414420037;
		*(_QWORD*)(v1 + 37) = 22i64;
		qword_140C65A28 = (__int64)v1;
		v1[39] = 0;
	}
	else
	{
		qword_140C65A28 = 0i64;
	}
	if ((int)sub_1404CF880() >= 0)
		return 0i64;
	v2 = qword_140C65A28;
	if (qword_140C65A28)
	{
		sub_1404CF7A0(qword_140C65A28);
		sub_14018B900(v2, 0);
	}
	qword_140C65A28 = 0i64;
	return 2147500037i64;
}
// 140C65A28: using guessed type __int64 qword_140C65A28;

