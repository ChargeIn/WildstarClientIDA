//----- (00000001402C7A70) ----------------------------------------------------
__int64 sub_1402C7A70()
{
	__int64 v0; // rbx
	int* v1; // rcx
	__int64 v2; // rax
	int* v4; // rax
	int v5; // edi

	v0 = 0i64;
	if (!byte_140C7F847)
	{
		v1 = sub_14018B280(24i64, 0);
		if (v1)
		{
			*((_QWORD*)v1 + 1) = 2i64;
			*((_QWORD*)v1 + 2) = 0i64;
			*(_QWORD*)v1 = &unk_140C38630;
		}
		else
		{
			v1 = 0i64;
		}
		v2 = qword_140C63770;
		byte_140C7F847 = 1;
		qword_140C63770 = (__int64)v1;
		*((_QWORD*)v1 + 2) = v2;
	}
	if (qword_140C657F0)
		return 0i64;
	v4 = sub_14018B280(1392i64, 0);
	if (v4)
		v0 = sub_1402C7B40((__int64)v4);
	v5 = sub_1402C7E30(v0);
	if (v5 >= 0)
	{
		qword_140C657F0 = v0;
		return 0i64;
	}
	else
	{
		if (v0)
		{
			sub_1402C7C50(v0);
			sub_14018B900(v0, 0);
		}
		return (unsigned int)v5;
	}
}
// 140C63770: using guessed type __int64 qword_140C63770;
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 140C7F847: using guessed type char byte_140C7F847;

