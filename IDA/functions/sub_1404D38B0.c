//----- (00000001404D38B0) ----------------------------------------------------
__int64 sub_1404D38B0()
{
	int* v0; // rax

	if (qword_140C65A40)
		return 0i64;
	v0 = sub_14018B280(80i64, 0);
	if (v0)
	{
		*(_QWORD*)v0 = 0i64;
		*((_QWORD*)v0 + 1) = 0i64;
		*((_QWORD*)v0 + 2) = 0i64;
		*((_QWORD*)v0 + 3) = 0i64;
		*((_QWORD*)v0 + 4) = 0i64;
		*((_QWORD*)v0 + 5) = 0i64;
		*((_QWORD*)v0 + 6) = 0i64;
		*((_QWORD*)v0 + 7) = 0i64;
		*((_QWORD*)v0 + 8) = 0i64;
		*((_QWORD*)v0 + 9) = 0i64;
		qword_140C65A40 = (__int64)v0;
	}
	else
	{
		qword_140C65A40 = 0i64;
	}
	if ((int)sub_1404D3990() >= 0)
		return 0i64;
	sub_1404D3930();
	return 2147500037i64;
}
// 140C65A40: using guessed type __int64 qword_140C65A40;

