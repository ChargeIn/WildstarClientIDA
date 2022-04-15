//----- (00000001401A4610) ----------------------------------------------------
__int64 sub_1401A4610()
{
	int* v1; // rax
	__int64 v2; // rbx
	signed int v3; // edi

	if (qword_140C886B8)
		return 1i64;
	v1 = sub_14018B280(288i64, 0);
	v2 = (__int64)v1;
	if (v1)
	{
		*((_QWORD*)v1 + 34) = 0i64;
		*((_QWORD*)v1 + 35) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = sub_1401A4150(v2);
	if (v3 >= 0)
	{
		qword_140C886B8 = v2;
		return 0i64;
	}
	else
	{
		if (v2)
			sub_1401A46B0(v2);
		return (unsigned int)v3;
	}
}
// 140C886B8: using guessed type __int64 qword_140C886B8;

