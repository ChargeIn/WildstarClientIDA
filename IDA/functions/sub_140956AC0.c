//----- (0000000140956AC0) ----------------------------------------------------
void sub_140956AC0()
{
	unsigned __int64 v0; // rax
	unsigned __int64 i; // rdi
	__int64 v2; // rbx
	__int64 v3; // rcx

	v0 = qword_140C4B730;
	for (i = 0i64; i < v0; ++i)
	{
		v2 = qword_140C4B738;
		if (*(_QWORD*)(qword_140C4B738 + 8 * i))
		{
			do
			{
				v3 = *(_QWORD*)(v2 + 8 * i);
				*(_QWORD*)(v2 + 8 * i) = *(_QWORD*)(v3 + 8);
				sub_14018B900(v3, 0);
			} while (*(_QWORD*)(v2 + 8 * i));
			v0 = qword_140C4B730;
		}
	}
	qword_140C4B728 = 0i64;
	sub_14018B900(qword_140C4B738, 0);
	qword_140C4B738 = 0i64;
}
// 140C4B728: using guessed type __int64 qword_140C4B728;
// 140C4B730: using guessed type __int64 qword_140C4B730;
// 140C4B738: using guessed type __int64 qword_140C4B738;

