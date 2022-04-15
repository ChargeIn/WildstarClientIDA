//----- (000000014019E4A0) ----------------------------------------------------
__int64 sub_14019E4A0()
{
	int* v0; // rcx
	__int64 v1; // rax
	int* v2; // rax
	int v3; // ebx
	__int64 v4; // rdi

	if (!dword_140C6373C)
	{
		v0 = sub_14018B280(24i64, 0);
		if (v0)
		{
			*((_QWORD*)v0 + 1) = 2i64;
			*((_QWORD*)v0 + 2) = 0i64;
			*(_QWORD*)v0 = &unk_140A446E8;
		}
		else
		{
			v0 = 0i64;
		}
		v1 = qword_140C63770;
		dword_140C6373C = 1;
		qword_140C63770 = (__int64)v0;
		*((_QWORD*)v0 + 2) = v1;
	}
	if (qword_140C63758)
	{
		_InterlockedIncrement((volatile signed __int32*)qword_140C63758);
		return 0i64;
	}
	v2 = sub_14018B280(208i64, 0);
	if (v2)
		qword_140C63758 = sub_1401C7F70((__int64)v2);
	else
		qword_140C63758 = 0i64;
	v3 = sub_1401C80A0();
	if (v3 >= 0)
		return 0i64;
	v4 = qword_140C63758;
	if (qword_140C63758)
	{
		sub_1401C8010(qword_140C63758);
		sub_14018B900(v4, 0);
	}
	qword_140C63758 = 0i64;
	return (unsigned int)v3;
}
// 140C6373C: using guessed type int dword_140C6373C;
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C63770: using guessed type __int64 qword_140C63770;

