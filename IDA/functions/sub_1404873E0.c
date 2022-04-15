//----- (00000001404873E0) ----------------------------------------------------
__int64 sub_1404873E0()
{
	__int64 v1; // rcx
	int* v2; // rdi
	int* v3; // rax
	__int64 v4; // rdi

	if (qword_140C65928)
		return 0i64;
	v2 = sub_14018B280(32i64, 0);
	if (v2)
	{
		v3 = sub_14018B280(48i64, 0);
		*((_QWORD*)v2 + 2) = 0i64;
		qword_140C65928 = (__int64)v2;
		*((_QWORD*)v2 + 1) = v3;
		*(_BYTE*)v3 = 0;
		v1 = *((_QWORD*)v2 + 1);
		*(_QWORD*)(v1 + 8) = 0i64;
		*(_QWORD*)(*((_QWORD*)v2 + 1) + 16i64) = *((_QWORD*)v2 + 1);
		*(_QWORD*)(*((_QWORD*)v2 + 1) + 24i64) = *((_QWORD*)v2 + 1);
	}
	else
	{
		qword_140C65928 = 0i64;
	}
	if ((int)sub_140487570(v1) >= 0)
		return 0i64;
	v4 = qword_140C65928;
	if (qword_140C65928)
	{
		sub_1404874B0(qword_140C65928);
		sub_14018B900(v4, 0);
	}
	qword_140C65928 = 0i64;
	return 2147500037i64;
}
// 140487455: variable 'v1' is possibly undefined
// 140C65928: using guessed type __int64 qword_140C65928;

