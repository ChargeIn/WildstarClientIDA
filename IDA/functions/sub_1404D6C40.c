//----- (00000001404D6C40) ----------------------------------------------------
__int64 sub_1404D6C40()
{
	int* v1; // rax
	__int64 v2; // rcx
	int* v3; // rdi
	__int64 v4; // rdi

	if (qword_140C65A50)
		return 0i64;
	v1 = sub_14018B280(112i64, 0);
	v3 = v1;
	if (v1)
	{
		*((_QWORD*)v1 + 1) = 0i64;
		*(_QWORD*)v1 = 0i64;
		sub_1400522F0((_QWORD*)v1 + 2);
		sub_1402E2870((_QWORD*)v3 + 7);
		*((_QWORD*)v3 + 13) = 0i64;
		*((_QWORD*)v3 + 12) = 0i64;
		qword_140C65A50 = (__int64)v3;
	}
	else
	{
		qword_140C65A50 = 0i64;
	}
	if ((int)sub_1404D64D0(v2) >= 0)
		return 0i64;
	v4 = qword_140C65A50;
	if (qword_140C65A50)
	{
		sub_1404D6380((_QWORD*)qword_140C65A50);
		sub_14018B900(v4, 0);
	}
	qword_140C65A50 = 0i64;
	return 2147500037i64;
}
// 1404D6CA4: variable 'v2' is possibly undefined
// 140C65A50: using guessed type __int64 qword_140C65A50;

