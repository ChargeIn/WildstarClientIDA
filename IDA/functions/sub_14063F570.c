//----- (000000014063F570) ----------------------------------------------------
void sub_14063F570()
{
	__int64 v0; // rsi
	__int64 v1; // rbx
	__int64 v2; // rdi
	__int64 v3; // rbp
	__int64 v4; // rcx

	v0 = qword_140C7E668;
	v1 = qword_140C7E648;
	v2 = qword_140C7E658;
	v3 = qword_140C7E660;
	while (v1 != v0)
	{
		v4 = *(_QWORD*)(v1 + 8);
		if (v4)
			sub_14018B900(v4, 0);
		v1 += 32i64;
		if (v1 == v2)
		{
			v1 = *(_QWORD*)(v3 + 8);
			v2 = v1 + 480;
			v3 += 8i64;
		}
	}
	sub_14063F730();
}
// 140C7E648: using guessed type __int64 qword_140C7E648;
// 140C7E658: using guessed type __int64 qword_140C7E658;
// 140C7E660: using guessed type __int64 qword_140C7E660;
// 140C7E668: using guessed type __int64 qword_140C7E668;

